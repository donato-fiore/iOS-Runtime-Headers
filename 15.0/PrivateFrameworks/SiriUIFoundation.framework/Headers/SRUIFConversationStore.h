// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SRUIFCONVERSATIONSTORE_H
#define SRUIFCONVERSATIONSTORE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SRUIFConversationStore : NSObject

@property (readonly, nonatomic, getter=_conversationsByIdentifier) NSMutableDictionary *conversationsByIdentifier; // ivar: _conversationsByIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)init;
-(void)_registerConversation:(id)arg0 withIdentifier:(id)arg1 ;
-(void)fetchConversationWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)removeConversationWithIdentifier:(id)arg0 completionBlock:(id)arg1 ;
-(void)saveConversation:(id)arg0 withIdentifier:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif