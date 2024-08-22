// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENUIVIEWCONTROLLERFACTORY_H
#define ENUIVIEWCONTROLLERFACTORY_H

@class UIViewController;

#import <Foundation/Foundation.h>


@interface ENUIViewControllerFactory : NSObject

@property (nonatomic, weak) UIViewController *inflightOnboardingStack; // ivar: inflightOnboardingStack
@property (nonatomic, weak) UIViewController *inflightPreAuthorizationStack; // ivar: inflightPreAuthorizationStack
@property (nonatomic, weak) UIViewController *inflightVerificationStack; // ivar: inflightVerificationStack


+(id)sharedInstance;
-(id)createAnalyticsConsentStackForAgencyModel:(id)arg0 exposureManager:(id)arg1 completion:(id)arg2 ;
-(id)createKeyReleaseDialogueWithBundleIdentifier:(id)arg0 region:(id)arg1 completion:(id)arg2 ;
-(id)createOnboardingStackForAgencyModel:(id)arg0 exposureManager:(id)arg1 fromAvailabilityAlert:(BOOL)arg2 fromDeepLink:(BOOL)arg3 subsequentFlow:(NSInteger)arg4 completion:(id)arg5 ;
-(id)createPreApprovalDialogueWithBundleIdentifier:(id)arg0 region:(id)arg1 completion:(id)arg2 ;
-(id)createPreAuthorizationStackForAgencyModel:(id)arg0 exposureManager:(id)arg1 completion:(id)arg2 ;
-(id)createTurndownStackWithEnteredFromMainScreen:(BOOL)arg0 completion:(id)arg1 ;
-(id)createVerificationStackForAgencyModel:(id)arg0 exposureManager:(id)arg1 sessionIdentifier:(id)arg2 reportType:(unsigned int)arg3 enteredFromMainScreen:(BOOL)arg4 completion:(id)arg5 ;
-(id)init;


@end


#endif