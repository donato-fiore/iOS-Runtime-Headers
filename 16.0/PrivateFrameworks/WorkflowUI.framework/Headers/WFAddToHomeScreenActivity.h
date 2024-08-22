// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFADDTOHOMESCREENACTIVITY_H
#define WFADDTOHOMESCREENACTIVITY_H

@class UIActivity, NSString, UINavigationController, WFWorkflow;
@protocol WFAddToHomeScreenViewControllerDelegate, UIAdaptivePresentationControllerDelegate, WFAddToHomeScreenActivityDelegate;



@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFAddToHomeScreenActivityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)initWithSource:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 shouldDismiss:(BOOL)arg1 ;
-(void)addToHomeScreenViewController:(id)arg0 didFinishWithName:(id)arg1 icon:(id)arg2 ;
-(void)addToHomeScreenWithName:(id)arg0 icon:(id)arg1 ;
-(void)cancel;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif