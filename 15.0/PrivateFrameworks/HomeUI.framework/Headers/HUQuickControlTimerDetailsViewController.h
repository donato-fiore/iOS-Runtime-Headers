// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLTIMERDETAILSVIEWCONTROLLER_H
#define HUQUICKCONTROLTIMERDETAILSVIEWCONTROLLER_H

@class NSString, NSLayoutConstraint, NSArray;
@protocol HUQuickControlDetailsViewControllerVendor, HFItemSectionAccessoryButtonHeaderDelegate;


#import "HUQuickControlViewController.h"
#import "HUTimerTableViewController.h"

@interface HUQuickControlTimerDetailsViewController : HUQuickControlViewController <HUQuickControlDetailsViewControllerVendor, HFItemSectionAccessoryButtonHeaderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *timerTableViewConstraints; // ivar: _timerTableViewConstraints
@property (retain, nonatomic) HUTimerTableViewController *timerTableViewController; // ivar: _timerTableViewController


+(id)controlItemPredicate;
-(BOOL)_canShowWhileLocked;
-(BOOL)isAccessoryControllable;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg0 ;
-(id)controlItem;
-(id)createDetailsViewController;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(id)mediaProfileContainer;
-(id)secondaryQuickControlPresentationStyle;
-(void)_addTimerControlView;
-(void)_updateConstraints;
-(void)itemSection:(id)arg0 accessoryButtonPressedInHeader:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif