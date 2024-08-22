// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUAPPLEMUSICACCOUNTVIEWCONTROLLER_H
#define HUAPPLEMUSICACCOUNTVIEWCONTROLLER_H

@class NAFuture, UIAlertController, NADeallocationSentinel, NSString;
@protocol HUAppleMusicAccountModuleControllerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol;


#import "HUItemTableViewController.h"
#import "HUAppleMusicAccountModuleController.h"
#import "HUPrimaryUserSettingsItemModuleController.h"

@interface HUAppleMusicAccountViewController : HUItemTableViewController <HUAppleMusicAccountModuleControllerDelegate, UITextViewDelegate, HUAccessorySettingsDetailsViewControllerProtocol>



@property (retain, nonatomic) NAFuture *accountArbitrationFuture; // ivar: _accountArbitrationFuture
@property (retain, nonatomic) HUAppleMusicAccountModuleController *appleMusicAccountModuleController; // ivar: _appleMusicAccountModuleController
@property (retain, nonatomic) UIAlertController *appleMusicLoadingViewController; // ivar: _appleMusicLoadingViewController
@property (retain, nonatomic) NADeallocationSentinel *appleMusicLoadingViewControllerDeallocationSentinel; // ivar: _appleMusicLoadingViewControllerDeallocationSentinel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUPrimaryUserSettingsItemModuleController *primaryUserModuleController; // ivar: _primaryUserModuleController
@property (readonly) Class superclass;


-(BOOL)_accessorySupportsMultiUser;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_appleMusicFooterMessage;
-(id)_appleMusicFooterView;
-(id)buildItemModuleControllerForModule:(id)arg0 ;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithAccessorySettingItem:(id)arg0 module:(id)arg1 ;
-(id)initWithHFItem:(id)arg0 mediaProfileContainer:(id)arg1 ;
-(id)itemModuleControllers;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)appleMusicModuleController:(id)arg0 willPresentContext:(id)arg1 account:(id)arg2 ;
-(void)appleMusicModuleControllerDidUpdateAuthenticationState:(id)arg0 ;
-(void)appleMusicModuleControllerPresentSignInFlow:(id)arg0 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif