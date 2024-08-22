// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCHILDCONVERSATIONITEMLIST_H
#define AFCHILDCONVERSATIONITEMLIST_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "AFConversation.h"

@interface AFChildConversationItemList : NSObject

@property (readonly, nonatomic, getter=_conversation) AFConversation *conversation; // ivar: _conversation
@property (readonly, nonatomic, getter=_parentItemIdentifier) NSUUID *parentItemIdentifier; // ivar: _parentItemIdentifier


-(BOOL)itemIsRestoredAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfItems;
-(id)_identifierOfItemAtIndex:(NSInteger)arg0 ;
-(id)_indexPathForItemAtIndex:(NSInteger)arg0 ;
-(id)_indexPathForLastRestoredItem;
-(id)identifiersForItemsAtIndexes:(id)arg0 ;
-(id)init;
-(id)initWithConversation:(id)arg0 parentItemIdentifier:(id)arg1 ;
-(id)itemAtIndex:(NSInteger)arg0 ;
-(id)itemWithIdentifier:(id)arg0 ;
-(void)_addItemsForAceObjects:(id)arg0 type:(NSInteger)arg1 dialogPhase:(id)arg2 asChildrenOfItemWithIdentifier:(id)arg3 ;
-(void)addItemsForAceObjects:(id)arg0 type:(NSInteger)arg1 dialogPhase:(id)arg2 ;
-(void)addItemsForAceObjects:(id)arg0 type:(NSInteger)arg1 dialogPhase:(id)arg2 asChildrenOfItemAtIndex:(NSInteger)arg3 ;
-(void)removeItemsAtIndexes:(id)arg0 ;
-(void)removeItemsWithIdentifiers:(id)arg0 ;


@end


#endif