// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMVOCTRIE_H
#define CDMVOCTRIE_H


#import <Foundation/Foundation.h>

#import "OVMarisaTrie.h"

@interface CDMVocTrie : NSObject {
    OVMarisaTrie *vocTextTrieReadOnly;
    OVMarisaTrie *vocLabelTrieReadOnly;
    OVMarisaTrie *vocSemanticTrieReadOnly;
}




+(BOOL)serializeVocTriesToFile:(id)arg0 toURL:(id)arg1 ;
+(id)getTrieURLs:(id)arg0 ;
+(void)serializeVocLabelTrieToFile:(id)arg0 semanticTrieReadOnly:(id)arg1 toURL:(id)arg2 ;
+(void)serializeVocSemanticTrieToFile:(id)arg0 toURL:(id)arg1 ;
+(void)serializeVocTextTrieToFile:(id)arg0 readOnlyVocLabelTrie:(id)arg1 readOnlyVocSemanticTrie:(id)arg2 toURL:(id)arg3 ;
-(*NSInteger)getLabelTrieCount;
-(*NSInteger)getTextTrieCount;
-(id)entriesForText:(id)arg0 ;
-(id)initWithTriePath:(id)arg0 ;


@end


#endif