// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERACLIPFEEDBACKPREPARATIONOPERATION_H
#define HFCAMERACLIPFEEDBACKPREPARATIONOPERATION_H

@class NSOperation, HMCameraClip;



@interface HFCameraClipFeedbackPreparationOperation : NSOperation

@property (retain, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(id)initWithCameraClip:(id)arg0 completionHandler:(id)arg1 ;
-(void)main;


@end


#endif