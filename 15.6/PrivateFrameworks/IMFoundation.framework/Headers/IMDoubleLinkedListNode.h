// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMDOUBLELINKEDLISTNODE_H
#define IMDOUBLELINKEDLISTNODE_H


#import <Foundation/Foundation.h>

#import "IMDoubleLinkedListNode.h"

@interface IMDoubleLinkedListNode : NSObject

@property (retain) IMDoubleLinkedListNode *next; // ivar: _next
@property (retain) id *object; // ivar: _object
@property (retain) IMDoubleLinkedListNode *prev; // ivar: _prev


-(id)initWithObject:(id)arg0 ;
-(void)orphan;
-(void)removeFromList;


@end


#endif