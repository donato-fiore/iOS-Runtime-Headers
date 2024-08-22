// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STINTRODUCTIONCONTROLLER_H
#define STINTRODUCTIONCONTROLLER_H

@class NSString, NSNumber, UIViewController, UINavigationController;
@protocol STContentPrivacyViewModelCoordinator;

#import <Foundation/Foundation.h>

#import "STIntroductionViewModel.h"

@interface STIntroductionController : NSObject

@property BOOL allowParentalControls; // ivar: _allowParentalControls
@property (copy) NSString *altDSID; // ivar: _altDSID
@property BOOL askForRecoveryAppleID; // ivar: _askForRecoveryAppleID
@property (copy) NSNumber *childAge; // ivar: _childAge
@property (copy) NSString *childName; // ivar: _childName
@property (getter=isChildOrNotSignedIntoiCloud) BOOL childOrNotSignedIntoiCloud; // ivar: _childOrNotSignedIntoiCloud
@property (copy) id *completionBlock; // ivar: _completionBlock
@property (retain) NSObject<STContentPrivacyViewModelCoordinator> *contentPrivacyCoordinator; // ivar: _contentPrivacyCoordinator
@property (copy) NSNumber *dsid; // ivar: _dsid
@property BOOL forceParentalControls; // ivar: _forceParentalControls
@property (readonly) UIViewController *initialViewController;
@property (readonly) STIntroductionViewModel *introductionModel; // ivar: _introductionModel
@property (nonatomic) BOOL isModalPresentation; // ivar: _isModalPresentation
@property (retain) UINavigationController *navigationController; // ivar: _navigationController
@property BOOL showCommunicationSafetyPane; // ivar: _showCommunicationSafetyPane
@property BOOL skipAppLimitsPane; // ivar: _skipAppLimitsPane
@property BOOL updateExistingSettings; // ivar: _updateExistingSettings


-(id)_viewControllerFollowingViewController:(id)arg0 ;
-(id)init;
-(void)_endIntroductionFlowWithEnablingScreenTime;
-(void)_endIntroductionFlowWithoutEnablingScreenTime;
-(void)_viewControllerCompleted:(id)arg0 ;
-(void)presentOverViewController:(id)arg0 ;


@end


#endif