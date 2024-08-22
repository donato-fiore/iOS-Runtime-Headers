// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSPSERVICESTATUSMANAGER_H
#define NSPSERVICESTATUSMANAGER_H

@class NSMutableArray;
@protocol NSSecureCoding, NSCopying, NSPServiceStatusManagerDelegate;

#import <Foundation/Foundation.h>

#import "PrivacyProxyServiceStatus.h"
#import "NSPUserNotification.h"

@interface NSPServiceStatusManager : NSObject <NSSecureCoding, NSCopying>



@property (weak) NSObject<NSPServiceStatusManagerDelegate> *delegate; // ivar: _delegate
@property (readonly) NSInteger diskVersion; // ivar: _diskVersion
@property NSUInteger effectiveTier; // ivar: _effectiveTier
@property (nonatomic) NSUInteger generation; // ivar: _generation
@property NSUInteger lastOutageType; // ivar: _lastOutageType
@property (retain) NSMutableArray *networkStatusTimeline; // ivar: _networkStatusTimeline
@property (retain) PrivacyProxyServiceStatus *serviceStatus; // ivar: _serviceStatus
@property (retain) NSMutableArray *serviceStatusTimeline; // ivar: _serviceStatusTimeline
@property (retain) NSPUserNotification *userNotification; // ivar: _userNotification
@property NSUInteger userTier; // ivar: _userTier


+(BOOL)supportsSecureCoding;
+(void)removeFromPreferences;
-(BOOL)isEffectiveTierSubscriber;
-(BOOL)isNetworkOutage;
-(BOOL)isServiceActive;
-(BOOL)isServiceOutage;
-(BOOL)saveToPreferences;
-(BOOL)updateNetworkStatus:(NSUInteger)arg0 type:(int)arg1 name:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)diagnostics;
-(id)initFromPreferencesWithUserTier:(NSUInteger)arg0 effectiveUserTier:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserTier:(NSUInteger)arg0 effectiveUserTier:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)queue;
-(void)clearNetworkStatusForType:(int)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleEffectiveUserTierChange:(NSUInteger)arg0 ;
-(void)openiCloudSettings;
-(void)postNotification;
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
-(void)reportServiceActive;
-(void)reportServiceDisabled;
-(void)reportServiceOutageWithType:(NSUInteger)arg0 outageReasonStats:(id)arg1 ;
-(void)reportServiceStatus:(NSUInteger)arg0 title:(id)arg1 message:(id)arg2 serviceStatusDetails:(id)arg3 ;
-(void)reportSubscriberUnsupportedRegion:(id)arg0 ;
-(void)reportSystemIncompatibility;
-(void)reportUnsupportedRegion:(id)arg0 ;
-(void)setNetworkStatusOnTimeline:(id)arg0 ;


@end


#endif