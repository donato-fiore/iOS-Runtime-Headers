// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKLISTNODE_H
#define GKLISTNODE_H


#import <Foundation/Foundation.h>

#import "GKListNode.h"

@interface GKListNode : NSObject

@property (retain, nonatomic) GKListNode *nextNode; // ivar: _nextNode
@property (retain, nonatomic) GKListNode *prevNode; // ivar: _prevNode
@property (retain, nonatomic) id *value; // ivar: _value


-(id)description;
-(id)initWithValue:(id)arg0 ;


@end


#endif