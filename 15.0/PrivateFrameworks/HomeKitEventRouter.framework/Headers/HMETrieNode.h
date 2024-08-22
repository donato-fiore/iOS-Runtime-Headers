// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMETRIENODE_H
#define HMETRIENODE_H

@class NSMapTable, NSHashTable, NSString;

#import <Foundation/Foundation.h>


@interface HMETrieNode : NSObject

@property (readonly, nonatomic) NSMapTable *children; // ivar: _children
@property (readonly, nonatomic) NSHashTable *consumers; // ivar: _consumers
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key




@end


#endif