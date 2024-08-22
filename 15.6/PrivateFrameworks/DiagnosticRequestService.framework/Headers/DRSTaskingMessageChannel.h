// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSTASKINGMESSAGECHANNEL_H
#define DRSTASKINGMESSAGECHANNEL_H

@class APSConnection, NSString, PKPublicChannel;
@protocol APSConnectionDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "DRSCloudChannelConfig.h"

@interface DRSTaskingMessageChannel : NSObject <APSConnectionDelegate>



@property (retain, nonatomic) APSConnection *apsConnection; // ivar: _apsConnection
@property (readonly, nonatomic) NSString *apsEnvironmentString; // ivar: _apsEnvironmentString
@property (readonly, nonatomic) DRSCloudChannelConfig *config; // ivar: _config
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *processingBlock; // ivar: _processingBlock
@property (readonly, nonatomic) PKPublicChannel *pubSubChannel; // ivar: _pubSubChannel
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(BOOL)subscribe:(*id)arg0 ;
-(BOOL)unsubscribe:(*id)arg0 ;
-(id)initWithCloudChannelConfig:(id)arg0 payloadProcessingBlock:(id)arg1 ;
-(void)connection:(id)arg0 channelSubscriptionsFailedWithFailures:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveIncomingMessage:(id)arg1 ;
-(void)connection:(id)arg0 didReceivePublicToken:(id)arg1 ;
-(void)connection:(id)arg0 didReceiveToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3 ;


@end


#endif