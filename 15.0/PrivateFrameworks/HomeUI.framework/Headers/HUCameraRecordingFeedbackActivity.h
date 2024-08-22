// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCAMERARECORDINGFEEDBACKACTIVITY_H
#define HUCAMERARECORDINGFEEDBACKACTIVITY_H

@class UIActivity, HMCameraClip, HMCameraProfile, UINavigationController;



@interface HUCameraRecordingFeedbackActivity : UIActivity

@property (retain, nonatomic) HMCameraClip *cameraClip; // ivar: _cameraClip
@property (retain, nonatomic) HMCameraProfile *cameraProfile; // ivar: _cameraProfile
@property (retain, nonatomic) UINavigationController *previewNavigationController; // ivar: _previewNavigationController
@property (copy, nonatomic) id *submissionHandler; // ivar: _submissionHandler


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithCameraClip:(id)arg0 cameraProfile:(id)arg1 completionHandler:(id)arg2 ;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif