// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STCOMMUNICATIONSAFETYONBOARDINGCONTROLLER_H
#define STCOMMUNICATIONSAFETYONBOARDINGCONTROLLER_H

@class NSString, UINavigationController;
@protocol STRestrictionsPINControllerDelegate, STRootViewModelCoordinator;

#import <Foundation/Foundation.h>


@interface STCommunicationSafetyOnboardingController : NSObject <STRestrictionsPINControllerDelegate>



@property (copy) id *completionBlock; // ivar: _completionBlock
@property (readonly) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isAnalyticsEnabled; // ivar: _isAnalyticsEnabled
@property BOOL isFeatureEnabled; // ivar: _isFeatureEnabled
@property (retain) UINavigationController *navigationController; // ivar: _navigationController
@property BOOL skipFeatureEnablement; // ivar: _skipFeatureEnablement
@property (readonly) Class superclass;


-(BOOL)validatePIN:(id)arg0 forPINController:(id)arg1 ;
-(id)_createCommunicationSafetyAnalyticsEDUController;
-(id)_createCommunicationSafetyEDUController;
-(id)_createInitialViewController;
-(id)_createPINController;
-(id)initWithCoordinator:(id)arg0 ;
-(void)_addAccessoryButtonToHeaderViewForWelcomeController:(id)arg0 title:(id)arg1 action:(SEL)arg2 ;
-(void)_addTrayButtonToWelcomeController:(id)arg0 localizationKey:(id)arg1 action:(SEL)arg2 isBold:(BOOL)arg3 ;
-(void)_continueSelected;
-(void)_dontShareAnalyticsSelected;
-(void)_notNowSelected;
-(void)_openAboutAnalytics;
-(void)_shareAnalyticsSelected;
-(void)didAcceptEnteredPIN;
-(void)didCancelEnteringPIN;
-(void)presentOverViewController:(id)arg0 skipFeatureEnablement:(BOOL)arg1 completionBlock:(id)arg2 ;


@end


#endif