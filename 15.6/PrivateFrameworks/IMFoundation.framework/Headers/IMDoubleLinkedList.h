// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDOUBLELINKEDLIST_H
#define IMDOUBLELINKEDLIST_H


#import <Foundation/Foundation.h>

#import "IMDoubleLinkedListNode.h"

@interface IMDoubleLinkedList : NSObject

@property (readonly) NSUInteger count; // ivar: _count
@property (retain) IMDoubleLinkedListNode *first; // ivar: _first
@property (retain) IMDoubleLinkedListNode *last; // ivar: _last


-(BOOL)containsObject:(id)arg0 ;
-(id)allObjects;
-(id)init;
-(id)popObject;
-(void)appendLinkedListNode:(id)arg0 ;
-(void)appendObject:(id)arg0 ;
-(void)dealloc;
-(void)pushLinkedListNode:(id)arg0 ;
-(void)pushObject:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeLinkedListNode:(id)arg0 ;


@end


#endif