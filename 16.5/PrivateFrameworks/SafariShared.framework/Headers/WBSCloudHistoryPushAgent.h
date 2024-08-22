// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSCLOUDHISTORYPUSHAGENT_H
#define WBSCLOUDHISTORYPUSHAGENT_H

@class NSXPCListener, APSConnection, NSString;
@protocol NSXPCListenerDelegate, WBSCloudHistoryPushAgent, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSCloudHistoryPushAgent : NSObject <NSXPCListenerDelegate, WBSCloudHistoryPushAgent>

 {
    NSXPCListener *_xpcListener;
    APSConnection *_pushConnection;
    NSObject<OS_dispatch_queue> *_pushNotificationStateQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasAcknowledgedPushNotifications;
-(BOOL)_hasUnacknowledgedPushNotifications;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_pushTopic;
-(id)_userDefaults;
-(id)init;
-(void)_setHasAcknowlegedPushNotifications:(BOOL)arg0 ;
-(void)_setHasUnacknowledgedPushNotifications:(BOOL)arg0 ;
-(void)acknowledgePendingPushNotifications;
-(void)clearAcknowledgedPushNotifications;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;
-(void)getPushNotifications:(id)arg0 ;
-(void)queryMemoryFootprint:(id)arg0 ;


@end


#endif