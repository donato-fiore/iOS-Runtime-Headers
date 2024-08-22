// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPTEXTMESSAGECONVERSATION_H
#define IPTEXTMESSAGECONVERSATION_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "IPCircularBufferArray.h"

@interface IPTextMessageConversation : NSObject {
    IPCircularBufferArray *_lastMessages;
}


@property (copy, nonatomic) NSArray *allMessages; // ivar: _allMessages
@property (retain) NSMutableDictionary *eventsByMessageIdentifierDictionary; // ivar: _eventsByMessageIdentifierDictionary
@property (retain) NSMutableDictionary *messageByMessageIdentifierDictionary; // ivar: _messageByMessageIdentifierDictionary


+(id)collapseMessages:(id)arg0 ;
+(id)collapsedMessagesFromMessages:(id)arg0 ;
-(id)eventsInPreviouslyScannedMessageWithIdentifier:(id)arg0 ;
-(id)init;
-(id)messageForIdentifier:(id)arg0 ;
-(void)_scanEventsInLastMessageOnly:(BOOL)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)addMessage:(id)arg0 ;
-(void)reset;
-(void)scanEventsInLastMessageOnly:(BOOL)arg0 synchronously:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif