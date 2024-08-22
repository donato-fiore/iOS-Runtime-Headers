// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSDOUBLELINKEDLISTNODE_H
#define AMSDOUBLELINKEDLISTNODE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AMSDoubleLinkedListNode.h"

@interface AMSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier; // ivar: _listIdentifier
@property (retain, nonatomic) AMSDoubleLinkedListNode *next; // ivar: _next
@property (retain, nonatomic) id *object; // ivar: _object
@property (retain, nonatomic) AMSDoubleLinkedListNode *previous; // ivar: _previous


-(id)init;
-(id)initWithObject:(id)arg0 ;


@end


#endif