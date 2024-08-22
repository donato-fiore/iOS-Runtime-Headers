// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOUBLELINKEDLISTNODE_H
#define SSDOUBLELINKEDLISTNODE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SSDoubleLinkedListNode.h"

@interface SSDoubleLinkedListNode : NSObject

@property (retain, nonatomic) NSString *listIdentifier; // ivar: _listIdentifier
@property (retain, nonatomic) SSDoubleLinkedListNode *next; // ivar: _next
@property (retain, nonatomic) id *object; // ivar: _object
@property (retain, nonatomic) SSDoubleLinkedListNode *previous; // ivar: _previous


-(id)init;
-(id)initWithObject:(id)arg0 ;


@end


#endif