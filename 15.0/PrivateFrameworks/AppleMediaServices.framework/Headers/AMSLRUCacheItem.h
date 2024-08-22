// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSLRUCACHEITEM_H
#define AMSLRUCACHEITEM_H

@protocol NSCopying;


#import "AMSDoubleLinkedListNode.h"

@interface AMSLRUCacheItem : AMSDoubleLinkedListNode

@property (weak, nonatomic) NSObject<NSCopying> *key; // ivar: _key


-(id)initWithKey:(id)arg0 object:(id)arg1 ;


@end


#endif