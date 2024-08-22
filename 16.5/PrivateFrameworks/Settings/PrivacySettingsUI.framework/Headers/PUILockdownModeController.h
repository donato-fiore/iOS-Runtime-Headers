// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUILOCKDOWNMODECONTROLLER_H
#define PUILOCKDOWNMODECONTROLLER_H

@class PSListController, NSArray;
@protocol PUIOnboardingCellDelegate;



@interface PUILockdownModeController : PSListController <PUIOnboardingCellDelegate>



@property (retain, nonatomic) NSArray *_lockdownModeOptionsSpecifiers; // ivar: __lockdownModeOptionsSpecifiers
@property (nonatomic) BOOL lockdownModeEnabled; // ivar: _lockdownModeEnabled


-(BOOL)shouldReloadSpecifiersOnResume;
-(id)init;
-(id)isSpecifierEnabled:(id)arg0 ;
-(id)lockdownModeOptionsSpecifiers;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)dataDidChange;
-(void)didTapEnableLockdownModeButton:(id)arg0 ;
-(void)didTapLockdownModeButton;
-(void)didTapOnboardingCellLink:(id)arg0 ;
-(void)openLearnMorePage;
-(void)presentErrorAlert;
-(void)presentOnboardingController;
-(void)presentRebootAlert:(BOOL)arg0 ;
-(void)refreshLinkStatusInParent;
-(void)setLockdownModeGloballyEnabled:(BOOL)arg0 ;
-(void)updateSpecifiersForImposedSettings;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif