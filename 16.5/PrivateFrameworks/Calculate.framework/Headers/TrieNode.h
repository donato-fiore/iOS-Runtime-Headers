// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIENODE_H
#define TRIENODE_H


#import <Foundation/Foundation.h>

#import "Trie.h"

@interface TrieNode : NSObject

@property (nonatomic) int node; // ivar: _node
@property (nonatomic) int offset; // ivar: _offset
@property (weak, nonatomic) Trie *trie; // ivar: _trie




@end


#endif