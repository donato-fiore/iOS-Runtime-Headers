// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATTRACKINGMANAGER_H
#define ATTRACKINGMANAGER_H


#import <Foundation/Foundation.h>


@interface ATTrackingManager : NSObject



+(BOOL)_applicationHasDisqualifyingEntitlement;
+(BOOL)_isCrossAppTrackingAllowed;
+(BOOL)_restrictionProfileInstalled;
+(BOOL)_userAllowedToChangeSettings;
+(BOOL)applicationStateActive;
+(BOOL)isApplicationExtension;
+(NSUInteger)_trackingAuthorizationStatus;
+(NSUInteger)trackingAuthorizationStatus;
+(void)_sendRequestTrackingAnalytic:(NSUInteger)arg0 prompted:(BOOL)arg1 deniedReason:(NSUInteger)arg2 ;
+(void)_sendTrackingStatusAnalytic:(NSUInteger)arg0 prompted:(BOOL)arg1 deniedReason:(NSUInteger)arg2 ;
+(void)requestTrackingAuthorizationWithCompletionHandler:(id)arg0 ;


@end


#endif