// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLALARMDETAILSVIEWCONTROLLER_H
#define HUQUICKCONTROLALARMDETAILSVIEWCONTROLLER_H

@class NSArray, NSString, NSLayoutConstraint;
@protocol HFItemSectionAccessoryButtonHeaderDelegate;


#import "HUQuickControlViewController.h"
#import "HUAlarmTableViewController.h"
#import "HUOLDAlarmTableViewController.h"

@interface HUQuickControlAlarmDetailsViewController : HUQuickControlViewController <HFItemSectionAccessoryButtonHeaderDelegate>



@property (retain, nonatomic) NSArray *alarmTableViewConstraints; // ivar: _alarmTableViewConstraints
@property (retain, nonatomic) HUAlarmTableViewController *alarmTableViewController; // ivar: _alarmTableViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) HUOLDAlarmTableViewController *oldAlarmTableViewController; // ivar: _oldAlarmTableViewController
@property (readonly) Class superclass;


+(id)controlItemPredicate;
-(BOOL)_canShowWhileLocked;
-(BOOL)isAccessoryControllable;
-(BOOL)shouldShowContentForReachabilityState:(BOOL)arg0 ;
-(id)controlItem;
-(id)createDetailsViewController;
-(id)initWithControlItems:(id)arg0 home:(id)arg1 itemUpdater:(id)arg2 controlOrientation:(NSUInteger)arg3 preferredControl:(NSUInteger)arg4 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(id)mediaProfileContainer;
-(void)_addAlarmControlView;
-(void)_updateConstraints;
-(void)itemSection:(id)arg0 accessoryButtonPressedInHeader:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif