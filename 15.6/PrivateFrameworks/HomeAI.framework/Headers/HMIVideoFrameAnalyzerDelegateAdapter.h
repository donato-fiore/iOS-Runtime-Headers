// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMEANALYZERDELEGATEADAPTER_H
#define HMIVIDEOFRAMEANALYZERDELEGATEADAPTER_H

@class HMFObject;
@protocol HMIVideoFrameAnalyzerDelegate;



@interface HMIVideoFrameAnalyzerDelegateAdapter : HMFObject <HMIVideoFrameAnalyzerDelegate>



@property (copy) id *frameAnalyzerDidAnalyzeFrame; // ivar: _frameAnalyzerDidAnalyzeFrame
@property (copy) id *frameAnalyzerDidProduceAnalysisStateUpdate; // ivar: _frameAnalyzerDidProduceAnalysisStateUpdate


-(void)frameAnalyzer:(id)arg0 didAnalyzeFrame:(id)arg1 error:(id)arg2 ;
-(void)frameAnalyzer:(id)arg0 didProduceAnalysisStateUpdate:(id)arg1 ;


@end


#endif