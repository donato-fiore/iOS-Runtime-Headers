// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRMLMODEL_H
#define CRMLMODEL_H

@class MLModel, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CRMLModel : NSObject {
    MLModel *model;
    int _modelHeight;
    int _modelWidth;
}


@property (readonly) int classCount; // ivar: _classCount
@property (readonly) *int codeMap; // ivar: _codeMap
@property NSInteger cpuBatchSize; // ivar: _cpuBatchSize
@property NSInteger gpuBatchSize; // ivar: _gpuBatchSize
@property (readonly) int inputHeight;
@property (readonly) int inputWidth;
@property (readonly) NSString *modelName;
@property (retain) NSArray *modelShape; // ivar: _modelShape


-(id)decodeActivations:(*void)arg0 ;
-(id)decodeActivations:(*void)arg0 blank:(unsigned short)arg1 ctcAllowGarbage:(BOOL)arg2 numResultNeeded:(NSInteger)arg3 ;
-(id)init;
-(id)initRestrictingToCPU:(BOOL)arg0 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 restrictToCPU:(BOOL)arg1 error:(*id)arg2 ;
-(id)predict:(id)arg0 error:(*id)arg1 ;
-(struct vector<std::vector<std::vector<float>>, std::allocator<std::vector<std::vector<float>>>> )activationsFromImage:(id)arg0 ;


@end


#endif