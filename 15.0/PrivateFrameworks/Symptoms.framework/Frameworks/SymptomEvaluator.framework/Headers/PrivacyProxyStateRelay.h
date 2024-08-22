// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PRIVACYPROXYSTATERELAY_H
#define PRIVACYPROXYSTATERELAY_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFPrivacyProxyTraffic.h"

@interface PrivacyProxyStateRelay : NSObject {
    os_unfair_lock_s lock;
    int proxyConfigurationToken;
    int proxyStatusToken;
    int proxyPathToken;
    NSObject<OS_dispatch_queue> *_privacyProxyStateQueue;
}


@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (retain, nonatomic) NSMutableArray *networks; // ivar: _networks
@property (nonatomic) unsigned int serviceStatus; // ivar: _serviceStatus
@property (retain, nonatomic) SFPrivacyProxyTraffic *traffic; // ivar: _traffic
@property (nonatomic) unsigned int userTier; // ivar: _userTier


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)networkStatusString:(unsigned int)arg0 ;
+(id)serviceStatusString:(unsigned int)arg0 ;
+(id)sharedInstance;
+(id)userTierString:(unsigned int)arg0 ;
+(unsigned int)networkStatusFromNSPStatus:(NSUInteger)arg0 ;
+(unsigned int)serviceStatusFromNSPStatus:(NSUInteger)arg0 ;
+(unsigned int)userTierFromNSPTier:(NSUInteger)arg0 ;
-(id)init;
-(void)dealloc;
-(void)updatePrivacyProxyConfiguration;
-(void)updatePrivacyProxyPath;
-(void)updatePrivacyProxyStatus;


@end


#endif