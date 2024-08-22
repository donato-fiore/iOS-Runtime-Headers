// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMVOCTRIE_H
#define CDMVOCTRIE_H


#import <Foundation/Foundation.h>

#import "OVMarisaTrie.h"

@interface CDMVocTrie : NSObject {
    OVMarisaTrie *vocTextTrieReadOnly;
    OVMarisaTrie *vocLabelTrieReadOnly;
    OVMarisaTrie *vocSemanticTrieReadOnly;
    OVMarisaTrie *vocUsoTrieReadOnly;
    OVMarisaTrie *vocUsoNodeIndexTrieReadOnly;
}




+(id)getTrieURLs:(id)arg0 ;
-(*NSInteger)getLabelTrieCount;
-(*NSInteger)getTextTrieCount;
-(id)entriesForText:(id)arg0 ;
-(id)initWithTriePath:(id)arg0 ;
-(id)usoGraphForLabel:(id)arg0 semantic:(id)arg1 ;
-(int)getUsoNodeIndex:(id)arg0 semantic:(id)arg1 ;


@end


#endif