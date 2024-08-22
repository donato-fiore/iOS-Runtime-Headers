// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BPSSETUPPAGEVIEWCONTROLLER_H
#define BPSSETUPPAGEVIEWCONTROLLER_H

@class UIViewController, UIView, NSString, UILabel;
@protocol BPSBuddyController, BPSBuddyControllerDelegate;



@interface BPSSetupPageViewController : UIViewController <BPSBuddyController>

 {
    UIView *_contentView;
}


@property (readonly, nonatomic) CGRect computedTitleFrame;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BPSBuddyControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)wantsFollowUpNotification;
-(CGFloat)verticalTitleInset;
-(id)_baseIdentifier;
-(id)followUpActions;
-(id)followUpIdentifier;
-(id)init;
-(id)localizedInformativeNotificationText;
-(id)localizedInformativeText;
-(id)localizedNotificationTitle;
-(id)localizedTitle;
-(id)titleAttributedString;
-(id)titleString;
-(void)addFollowUpForPageAndDevice:(id)arg0 withCompletion:(id)arg1 ;
-(void)addFollowUpForPageWithCompletion:(id)arg0 ;
-(void)removeFollowupForPageWithCompletion:(id)arg0 ;
-(void)updateTitleLabel;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif