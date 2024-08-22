// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STDYNAMICACTIVITYATTRIBUTIONPUBLISHER_H
#define STDYNAMICACTIVITYATTRIBUTIONPUBLISHER_H

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface STDynamicActivityAttributionPublisher : NSObject

@property (retain, nonatomic) NSString *cachedAppBundleID; // ivar: _cachedAppBundleID
@property (retain, nonatomic) NSString *cachedLocalizedPlistKey; // ivar: _cachedLocalizedPlistKey
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // ivar: _internalQueue
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection; // ivar: _serverXPCConnection


+(id)sharedInstance;
+(void)setCurrentAttributionKey:(id)arg0 andApp:(id)arg1 ;
+(void)setCurrentAttributionStringWithFormat:(id)arg0 auditToken:(struct ? )arg1 ;
-(id)init;
-(void)_internalQueue_sendAttributionKey:(id)arg0 andApp:(id)arg1 ;
-(void)_internalQueue_sendAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 ;
-(void)_resendAttributionData;
-(void)_tearDownXPCConnection;
-(void)setCurrentAttributionKey:(id)arg0 application:(id)arg1 ;
-(void)setCurrentAttributionStringWithFormat:(id)arg0 maskingClientAuditToken:(struct ? )arg1 ;


@end


#endif