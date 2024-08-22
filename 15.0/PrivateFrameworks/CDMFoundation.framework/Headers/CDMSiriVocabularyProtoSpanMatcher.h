// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDMSIRIVOCABULARYPROTOSPANMATCHER_H
#define CDMSIRIVOCABULARYPROTOSPANMATCHER_H

@class CKVocabularySearcher, CKVocabularySandbox, NSArray, NSString;
@protocol CDMProtoSpanMatcher;

#import <Foundation/Foundation.h>


@interface CDMSiriVocabularyProtoSpanMatcher : NSObject <CDMProtoSpanMatcher>

 {
    CKVocabularySearcher *_searcher;
    CKVocabularySandbox *_sandbox;
    NSArray *_overrideSpans;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)buildCKVTokenChain:(id)arg0 ;
+(id)convertCDMTokenToCKVToken:(id)arg0 ;
+(id)convertCKVMatchingSpanToNLUTypesMatchingSpan:(id)arg0 tokenChain:(id)arg1 ;
+(id)convertCKVMatchingSpans:(id)arg0 tokenChain:(id)arg1 ;
-(id)callSearcher:(id)arg0 ;
-(id)initWithOverrideSpans:(id)arg0 ;
-(id)initWithSandboxId:(id)arg0 ;
-(id)initWithSearcher:(id)arg0 ;
-(id)matchSpansForTokenChain:(id)arg0 ;
-(id)sandboxId;
-(void)dealloc;


@end


#endif