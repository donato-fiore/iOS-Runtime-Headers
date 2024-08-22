// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FUDINTERNALCONNECTION_H
#define FUDINTERNALCONNECTION_H

@class NSString, NSMutableDictionary;
@protocol FudConnection, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FudInternalConnection : NSObject <FudConnection>

 {
    NSString *clientIdentifier;
    NSObject<OS_dispatch_queue> *handlerQueue;
    id *messageHandler;
    NSMutableDictionary *pendingRequests;
    BOOL didStop;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)getNextMessageID;
-(id)initWithClientIdentifier:(id)arg0 handlerQueue:(id)arg1 messageHandler:(id)arg2 ;
-(void)dealloc;
-(void)handleInboundNotification:(id)arg0 ;
-(void)sendMessageToFud:(id)arg0 ;
-(void)sendMessageToFud:(id)arg0 reply:(id)arg1 ;
-(void)stop;


@end


#endif