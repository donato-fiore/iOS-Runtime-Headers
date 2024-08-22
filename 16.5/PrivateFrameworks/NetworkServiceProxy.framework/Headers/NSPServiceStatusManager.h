// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPSERVICESTATUSMANAGER_H
#define NSPSERVICESTATUSMANAGER_H

@class NSMutableArray;
@protocol NSSecureCoding, NSCopying, NSPServiceStatusManagerDelegate;

#import <Foundation/Foundation.h>

#import "PrivacyProxyServiceStatus.h"
#import "NSPUserNotification.h"

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying>

 {
    PrivacyProxyServiceStatus *_serviceStatus;
    NSMutableArray *_serviceStatusTimeline;
    NSObject<NSPServiceStatusManagerDelegate> *_delegate;
    NSInteger _diskVersion;
    NSUInteger _generation;
    NSPUserNotification *_userNotification;
    NSMutableArray *_networkStatusTimeline;
    NSUInteger _userTier;
    NSUInteger _effectiveTier;
    NSUInteger _lastOutageType;
}


@property (readonly, retain) PrivacyProxyServiceStatus *serviceStatus;
@property (readonly, retain) NSMutableArray *serviceStatusTimeline;


+(BOOL)supportsSecureCoding;
+(void)removeFromPreferences;
-(BOOL)isNetworkOutage;
-(BOOL)isServiceActive;
-(BOOL)isServiceOutage;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diagnostics;
-(id)initFromPreferencesWithUserTier:(NSUInteger)arg0 effectiveUserTier:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserTier:(NSUInteger)arg0 effectiveUserTier:(NSUInteger)arg1 delegate:(id)arg2 ;
-(void)clearNetworkStatusForType:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEffectiveUserTierChange:(NSUInteger)arg0 ;
-(void)publishDailyNetworkStatus;
-(void)publishDailyServiceStatus;
-(void)reportActiveOnCellularName:(id)arg0 ;
-(void)reportActiveOnInterfaceName:(id)arg0 displayName:(id)arg1 type:(int)arg2 ;
-(void)reportActiveOnWiFiName:(id)arg0 ;
-(void)reportBlockedOnCellularName:(id)arg0 ;
-(void)reportBlockedOnInterfaceName:(id)arg0 displayName:(id)arg1 type:(int)arg2 ;
-(void)reportBlockedOnWiFiName:(id)arg0 ;
-(void)reportDisabledOnCellularName:(id)arg0 ;
-(void)reportDisabledOnInterfaceName:(id)arg0 displayName:(id)arg1 type:(int)arg2 ;
-(void)reportDisabledOnWiFiName:(id)arg0 ;
-(void)reportFraudAlert;
-(void)reportServiceActiveShouldReport:(BOOL)arg0 ;
-(void)reportServiceDisabledShouldReport:(BOOL)arg0 ;
-(void)reportServiceOutageWithType:(NSUInteger)arg0 outageReasonStats:(id)arg1 ;
-(void)reportSubscriberUnsupportedRegion:(id)arg0 ;
-(void)reportSystemIncompatibility;
-(void)reportUnsupportedRegion:(id)arg0 ;


@end


#endif