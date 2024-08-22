// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDMVOCTRIEPROTOSPANMATCHER_H
#define CDMVOCTRIEPROTOSPANMATCHER_H

@class NSString;
@protocol CDMProtoSpanMatcher;

#import <Foundation/Foundation.h>

#import "CDMVocTrie.h"

@interface CDMVocTrieProtoSpanMatcher : NSObject <CDMProtoSpanMatcher>

 {
    CDMVocTrie *trie;
    BOOL useNormalizedValues;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)assetFolderNames;
+(id)trialFactorName;
-(BOOL)utteranceStartsWithVoiceTriggerSpan:(id)arg0 ;
-(id)initWithVocTriePath:(id)arg0 useNormalizedValues:(BOOL)arg1 ;
-(id)matchSpansForTokenChain:(id)arg0 ;


@end


#endif