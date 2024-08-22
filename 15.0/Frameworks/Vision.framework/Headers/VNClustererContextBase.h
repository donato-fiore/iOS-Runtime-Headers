// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VNCLUSTERERCONTEXTBASE_H
#define VNCLUSTERERCONTEXTBASE_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface VNClustererContextBase : NSObject {
    NSString *_type;
    NSNumber *_threshold;
    NSNumber *_torsoThreshold;
    NSString *_cacheDirectoryPath;
    BOOL _readOnly;
    NSUInteger _faceprintRequestRevision;
    NSUInteger _torsoprintRequestRevision;
}




-(BOOL)_checkInitInputs:(id)arg0 cachePath:(id)arg1 checkType:(id)arg2 requestRevision:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)_createGreedyClusterer:(Class)arg0 state:(id)arg1 error:(*id)arg2 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 readOnly:(BOOL)arg3 threshold:(float)arg4 requestRevision:(NSUInteger)arg5 error:(*id)arg6 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 readOnly:(BOOL)arg3 threshold:(float)arg4 requestRevision:(NSUInteger)arg5 torsoprintRequestRevision:(NSUInteger)arg6 error:(*id)arg7 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 readOnly:(BOOL)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(NSUInteger)arg6 error:(*id)arg7 ;
-(id)initWithType:(id)arg0 cachePath:(id)arg1 state:(id)arg2 readOnly:(BOOL)arg3 threshold:(float)arg4 torsoThreshold:(float)arg5 requestRevision:(NSUInteger)arg6 torsoprintRequestRevision:(NSUInteger)arg7 error:(*id)arg8 ;
-(void)_initializeGreedyClustererOptions:(id)arg0 ;


@end


#endif