// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSLRUCACHEITEM_H
#define SSLRUCACHEITEM_H

@protocol NSCopying;


#import "SSDoubleLinkedListNode.h"

@interface SSLRUCacheItem : SSDoubleLinkedListNode

@property (weak, nonatomic) NSObject<NSCopying> *key; // ivar: _key


-(id)initWithKey:(id)arg0 object:(id)arg1 ;


@end


#endif