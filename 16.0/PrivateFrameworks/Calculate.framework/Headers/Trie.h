// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIE_H
#define TRIE_H


#import <Foundation/Foundation.h>

#import "TrieNode.h"

@interface Trie : NSObject

@property (retain, nonatomic) TrieNode *root; // ivar: _root


+(void)enumerateCharactersInKey:(id)arg0 range:(struct _NSRange )arg1 usingBlock:(id)arg2 ;
-(id)init;
-(id)nodeForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKeyedSubscript:(id)arg1 ;


@end


#endif