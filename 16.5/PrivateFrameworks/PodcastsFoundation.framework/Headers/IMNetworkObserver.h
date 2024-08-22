// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMNETWORKOBSERVER_H
#define IMNETWORKOBSERVER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMNetworkObserver : NSObject {
    NSString *_dataStatusIndicator;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned int _networkReachabilityFlags;
    NSInteger _networkType;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSString *_operatorName;
    *__SCNetworkReachability _reachability;
    *__CTServerConnection _telephonyServer;
}


@property (readonly) NSString *connectionTypeHeader;
@property (readonly) unsigned int networkReachabilityFlags;
@property NSInteger networkType;


+(BOOL)isLikelyToReachRemoteServerWithReachabilityFlags:(unsigned int)arg0 ;
+(id)_networkObserverLogConfig;
+(id)sharedInstance;
-(BOOL)networkTypeIsCellularType:(NSInteger)arg0 ;
-(NSInteger)_networkTypeForReachabilityFlags:(unsigned int)arg0 ;
-(NSInteger)_networkTypeFromDataIndicator:(id)arg0 ;
-(id)_dataStatusIndicator;
-(id)dataStatusIndicator;
-(id)init;
-(id)operatorName;
-(id)stringForNetworkType:(NSInteger)arg0 ;
-(unsigned int)_currentNetworkReachabilityFlags;
-(void)_applicationForegroundNotification:(id)arg0 ;
-(void)_copyConnectionDataStatus:(id)arg0 ;
-(void)_handleTelephonyNotificationWithName:(struct __CFString *)arg0 userInfo:(struct __CFDictionary *)arg1 ;
-(void)_postReachabilityFlagsChangedNotificationFromValue:(unsigned int)arg0 toValue:(unsigned int)arg1 ;
-(void)_postTypeChangedNotificationFromValue:(NSInteger)arg0 toValue:(NSInteger)arg1 ;
-(void)_reloadDataStatusIndicator;
-(void)_reloadNetworkType;
-(void)_reloadNetworkTypeWithReachabilityFlags:(unsigned int)arg0 ;
-(void)dealloc;
-(void)reloadNetworkType;


@end


#endif