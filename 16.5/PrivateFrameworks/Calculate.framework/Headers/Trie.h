// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TRIE_H
#define TRIE_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TrieNode.h"

@interface Trie : NSObject {
    BOOL _autocompress;
    TrieNode *_root;
}


@property (nonatomic) int characterCount; // ivar: _characterCount
@property (nonatomic) int characterSize; // ivar: _characterSize
@property (nonatomic) char * characters; // ivar: _characters
@property (nonatomic) BOOL compressed; // ivar: _compressed
@property (nonatomic) *int firstByteCache; // ivar: _firstByteCache
@property (nonatomic) int nodeCount; // ivar: _nodeCount
@property (nonatomic) int nodeSize; // ivar: _nodeSize
@property (nonatomic) *? nodes; // ivar: _nodes
@property (retain, nonatomic) NSMutableArray *objects; // ivar: _objects


-(id)init;
-(void)dealloc;
-(void)writeCharacter:(unsigned char)arg0 ;
-(void)writeNode:(struct ? )arg0 ;


@end


#endif