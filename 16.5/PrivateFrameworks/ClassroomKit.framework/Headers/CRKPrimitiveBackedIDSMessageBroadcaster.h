// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPRIMITIVEBACKEDIDSMESSAGEBROADCASTER_H
#define CRKPRIMITIVEBACKEDIDSMESSAGEBROADCASTER_H

@class NSHashTable;
@protocol CRKIDSMessageBroadcasting, CRKIDSPrimitives, CRKCancelable;

#import <Foundation/Foundation.h>


@interface CRKPrimitiveBackedIDSMessageBroadcaster : NSObject <CRKIDSMessageBroadcasting>



@property (readonly, nonatomic) NSObject<CRKIDSPrimitives> *IDSPrimitives; // ivar: _IDSPrimitives
@property (readonly, nonatomic) NSHashTable *broadcastHandlers; // ivar: _broadcastHandlers
@property (retain, nonatomic) NSObject<CRKCancelable> *messageSubscription; // ivar: _messageSubscription


+(id)broadcasterWithIDSPrimitives:(id)arg0 ;
-(id)initWithIDSPrimitives:(id)arg0 ;
-(void)addBroadcastHandler:(id)arg0 ;
-(void)beginListeningForMessagesWithCompletion:(id)arg0 ;
-(void)broadcastMessage:(id)arg0 senderAppleID:(id)arg1 senderAddress:(id)arg2 ;


@end


#endif