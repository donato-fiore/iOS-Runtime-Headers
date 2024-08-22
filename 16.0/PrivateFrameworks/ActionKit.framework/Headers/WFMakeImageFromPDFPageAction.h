// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFMAKEIMAGEFROMPDFPAGEACTION_H
#define WFMAKEIMAGEFROMPDFPAGEACTION_H

@class WFAction;



@interface WFMakeImageFromPDFPageAction : WFAction



-(CGFloat)selectedResolution;
-(id)parameterSummary;
-(id)selectedFileType;
-(struct CGColorSpace *)selectedColorspace;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg0 ;


@end


#endif