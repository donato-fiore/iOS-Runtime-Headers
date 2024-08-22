// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STINTRODUCTIONCONTROLLER_H
#define STINTRODUCTIONCONTROLLER_H

@class NSString, NSNumber, UIViewController, UINavigationController;
@protocol STContentPrivacyViewModelCoordinator;

#import <Foundation/Foundation.h>

#import "STIntroductionViewModel.h"
#import "_TtC20ScreenTimeSettingsUI23SettingsPresetViewModel.h"

@interface STIntroductionController : NSObject

@property BOOL allowParentalControls; // ivar: _allowParentalControls
@property (readonly, copy) NSString *altDSID; // ivar: _altDSID
@property BOOL askForRecoveryAppleID; // ivar: _askForRecoveryAppleID
@property (readonly, copy) NSNumber *childAge; // ivar: _childAge
@property (copy) NSString *childName; // ivar: _childName
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud; // ivar: _childOrNotSignedIntoiCloud
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (readonly) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator; // ivar: _contentPrivacyCoordinator
@property (readonly, copy) NSNumber *dsid; // ivar: _dsid
@property BOOL forceParentalControls; // ivar: _forceParentalControls
@property (readonly) UIViewController *initialViewController;
@property (readonly) STIntroductionViewModel *introductionModel; // ivar: _introductionModel
@property (nonatomic) BOOL isModalPresentation; // ivar: _isModalPresentation
@property (retain) UINavigationController *navigationController; // ivar: _navigationController
@property (retain, nonatomic) _TtC20ScreenTimeSettingsUI23SettingsPresetViewModel *settingsPresetViewModel; // ivar: _settingsPresetViewModel
@property BOOL showCommunicationSafetyPane; // ivar: _showCommunicationSafetyPane
@property BOOL skipAppLimitsPane; // ivar: _skipAppLimitsPane
@property BOOL updateExistingSettings; // ivar: _updateExistingSettings


-(id)_viewControllerFollowingViewController:(id)arg0 ;
-(id)initWithDSID:(id)arg0 childAge:(id)arg1 childName:(id)arg2 updateExistingSettings:(BOOL)arg3 contentPrivacyCoordinator:(id)arg4 ;
-(void)_endIntroductionFlowWithEnablingScreenTime;
-(void)_endIntroductionFlowWithoutEnablingScreenTime;
-(void)_viewControllerCompleted:(id)arg0 ;
-(void)presentOverViewController:(id)arg0 ;


@end


#endif