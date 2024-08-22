// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUCLASSIFYPIPELINEIMAGECORRECTIONRESULT_H
#define _NUCLASSIFYPIPELINEIMAGECORRECTIONRESULT_H

@class NURenderResult, NSString;
@protocol NUClassifyPipelineImageCorrectionResult, NURenderStatistics;



@interface _NUClassifyPipelineImageCorrectionResult : NURenderResult <NUClassifyPipelineImageCorrectionResult>



@property float confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif