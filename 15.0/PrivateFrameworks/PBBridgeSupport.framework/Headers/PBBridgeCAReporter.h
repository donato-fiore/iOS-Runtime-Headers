// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBBRIDGECAREPORTER_H
#define PBBRIDGECAREPORTER_H


#import <Foundation/Foundation.h>


@interface PBBridgeCAReporter : NSObject



+(id)descriptionForCommTimingType:(NSUInteger)arg0 ;
+(id)descriptionForSuccessType:(NSUInteger)arg0 ;
+(id)descriptionForTimingType:(NSUInteger)arg0 ;
+(id)stringForSigninEventDaily:(NSUInteger)arg0 ;
+(id)stringForSigninEventPostPair:(NSUInteger)arg0 ;
+(id)stringForSigninFollowup:(NSUInteger)arg0 ;
+(id)stringForSigninPair:(NSUInteger)arg0 ;
+(void)activationServerRespondedAtPage:(NSUInteger)arg0 ;
+(void)incrementSuccessType:(NSUInteger)arg0 ;
+(void)pushCommunicationTimingType:(NSUInteger)arg0 withValue:(CGFloat)arg1 ;
+(void)pushTimingForTypeNamed:(id)arg0 withValue:(CGFloat)arg1 ;
+(void)pushTimingType:(NSUInteger)arg0 withValue:(CGFloat)arg1 ;
+(void)recordAllWatchesDetailButtonVisit:(BOOL)arg0 ;
+(void)recordAlreadyPairedAlertFired:(BOOL)arg0 afterDuration:(CGFloat)arg1 hasFiredBefore:(BOOL)arg2 ;
+(void)recordAlreadyPairedAlertFiredAndWatchRecovered:(CGFloat)arg0 ;
+(void)recordAlreadyPairedAlertLearnedMore:(BOOL)arg0 ;
+(void)recordEndOfLifePhoneAlertPresented:(BOOL)arg0 ;
+(void)recordEndOfLifePhoneAlertUserResponse:(BOOL)arg0 ;
+(void)recordPasscodeChallenge:(NSInteger)arg0 ;
+(void)recordPasscodeCreatedWithType:(NSInteger)arg0 wasChallenged:(BOOL)arg1 ;
+(void)recordSetupAppInstallChoice:(BOOL)arg0 ;
+(void)recordSigninEventDaily:(NSUInteger)arg0 ;
+(void)recordSigninEventFollowup:(NSUInteger)arg0 ;
+(void)recordSigninEventPair:(NSUInteger)arg0 ;
+(void)recordSigninEventPostPair:(NSUInteger)arg0 ;
+(void)recordTinkerGuardianAcceptedDiagsAndUsage:(BOOL)arg0 ;
+(void)recordTransitionedDynamicHelpViewFromType:(NSInteger)arg0 toType:(NSInteger)arg1 ;
+(void)recordUserAwarenessNotificationDuringSetup;
+(void)recordUserAwarenessNotificationDuringSetupUserEngaged;
+(void)sendEvent:(id)arg0 with:(id)arg1 ;


@end


#endif