// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFADDTOHOMESCREENACTIVITY_H
#define WFADDTOHOMESCREENACTIVITY_H

@class UIActivity, UINavigationController, NSString, WFWorkflow;
@protocol WFAddToHomeScreenViewControllerDelegate, WFAddToHomeScreenActivityDelegate;



@interface WFAddToHomeScreenActivity : UIActivity <WFAddToHomeScreenViewControllerDelegate>



@property (weak, nonatomic) NSObject<WFAddToHomeScreenActivityDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (copy, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) WFWorkflow *workflow; // ivar: _workflow


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_systemImageName;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)init;
-(id)initWithSource:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)addToHomeScreenViewController:(id)arg0 didFinishWithName:(id)arg1 icon:(id)arg2 ;
-(void)addToHomeScreenWithName:(id)arg0 icon:(id)arg1 ;
-(void)cancel;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif