// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDHISTORYPUSHAGENTPROXY_H
#define WBSCLOUDHISTORYPUSHAGENTPROXY_H

@class NSXPCConnection, NSString;
@protocol WBSCloudHistoryPushAgent;

#import <Foundation/Foundation.h>


@interface WBSCloudHistoryPushAgentProxy : NSObject <WBSCloudHistoryPushAgent>

 {
    NSXPCConnection *_agentConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)queryMemoryFootprintWithError:(*id)arg0 ;
-(void)acknowledgePendingPushNotifications;
-(void)clearAcknowledgedPushNotifications;
-(void)dealloc;
-(void)getPushNotifications:(id)arg0 ;
-(void)queryMemoryFootprint:(id)arg0 ;


@end


#endif