// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUINTERNALIMAGEQUALITYFEEDBACKACTIVITY_H
#define PUINTERNALIMAGEQUALITYFEEDBACKACTIVITY_H

@class PXActivity, PXFeedbackImageQualityUIViewController, NSString;
@protocol PXFeedbackImageQualityUIViewControllerDelegate;



@interface PUInternalImageQualityFeedbackActivity : PXActivity <PXFeedbackImageQualityUIViewControllerDelegate>

 {
    PXFeedbackImageQualityUIViewController *_feedbackController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)assets;
-(void)feedbackImageQualityUIViewController:(id)arg0 didFinish:(BOOL)arg1 ;


@end


#endif