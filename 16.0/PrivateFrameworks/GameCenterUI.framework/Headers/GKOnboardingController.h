// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKONBOARDINGCONTROLLER_H
#define GKONBOARDINGCONTROLLER_H

@protocol GKOnboardingFlowDelegate;

#import <Foundation/Foundation.h>


@interface GKOnboardingController : NSObject

@property (weak, nonatomic) NSObject<GKOnboardingFlowDelegate> *delegate; // ivar: _delegate


+(id)describePlayerComparisonsBetween:(id)arg0 and:(id)arg1 ;
+(id)landingViewController;
+(id)shared;
-(void)presentContactsIntegrationConsentScreen:(id)arg0 ;
-(void)presentPersonalizationScreen:(id)arg0 ;
-(void)presentProfileCreatedScreen:(id)arg0 ;
-(void)presentProfilePrivacyScreen:(id)arg0 ;
-(void)presentViewController:(id)arg0 presentingViewController:(id)arg1 ;


@end


#endif