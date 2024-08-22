// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDOUBLELINKEDLIST_H
#define AMSDOUBLELINKEDLIST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>

#import "AMSDoubleLinkedListNode.h"

@interface AMSDoubleLinkedList : NSObject

@property (readonly, nonatomic) NSArray *allNodes;
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (retain, nonatomic) AMSDoubleLinkedListNode *head; // ivar: _head
@property (retain, nonatomic) NSString *listIdentifier; // ivar: _listIdentifier
@property (retain, nonatomic) AMSDoubleLinkedListNode *tail; // ivar: _tail


-(id)appendObject:(id)arg0 ;
-(id)description;
-(id)init;
-(id)insertObject:(id)arg0 ;
-(void)appendNode:(id)arg0 ;
-(void)insertNode:(id)arg0 ;
-(void)removeAllNodes;
-(void)removeNode:(id)arg0 ;


@end


#endif