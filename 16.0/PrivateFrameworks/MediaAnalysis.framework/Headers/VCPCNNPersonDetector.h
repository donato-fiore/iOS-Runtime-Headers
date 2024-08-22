// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPCNNPERSONDETECTOR_H
#define VCPCNNPERSONDETECTOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "VCPCNNModelEspresso.h"

@interface VCPCNNPersonDetector : NSObject {
    int _maxNumRegions;
    *float _inputData;
    NSArray *_outputNames;
    vector<float *, std::allocator<float *>> _outputsData;
    VCPCNNModelEspresso *_modelEspresso;
    int _inputWidth;
    int _inputHeight;
}




-(id)initWithMaxNumRegions:(int)arg0 forceCPU:(BOOL)arg1 sharedModel:(BOOL)arg2 inputConfig:(id)arg3 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 inputHeight:(int)arg2 inputWidth:(int)arg3 ;
-(int)generatePersonBoxes:(id)arg0 ;
-(int)generatePersonRegions:(*void)arg0 boxes:(id)arg1 maxNumRegions:(int)arg2 ;
-(int)personDetection:(struct __CVBuffer *)arg0 personRegions:(id)arg1 cancel:(id)arg2 ;
-(int)retrieveBoxes:(*float)arg0 outHeight:(int)arg1 outWidth:(int)arg2 boxes:(id)arg3 anchorBox:(float)arg4 ;
-(void)nonMaxSuppression:(id)arg0 ;


@end


#endif