// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPIMAGEHUMANACTIONANALYZER_H
#define VCPIMAGEHUMANACTIONANALYZER_H

@class NSMutableArray, NSArray, PHFetchResult;


#import "VCPImageAnalyzer.h"
#import "VCPCNNModelEspresso.h"

@interface VCPImageHumanActionAnalyzer : VCPImageAnalyzer {
    NSMutableArray *_results;
    NSArray *_existingResults;
    VCPCNNModelEspresso *_model;
    PHFetchResult *_phFaces;
    *float _inputData;
}




+(id)sharedModel:(id)arg0 outputNames:(id)arg1 properties:(id)arg2 ;
-(id)initWithPHFaces:(id)arg0 existingResults:(id)arg1 ;
-(int)aggregateWith:(id)arg0 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;
-(int)copyImage:(struct __CVBuffer *)arg0 toData:(*float)arg1 ;
-(int)createInput:(*float)arg0 withBuffer:(struct __CVBuffer *)arg1 cnnInputHeight:(int)arg2 cnnInputWidth:(int)arg3 crop:(struct CGRect )arg4 ;
-(struct CGRect )rectFromPHFace:(id)arg0 ;
-(void)dealloc;


@end


#endif