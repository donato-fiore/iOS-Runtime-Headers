// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIDOCUMENTWORDSALIGNED_H
#define TIDOCUMENTWORDSALIGNED_H

@class NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TIDocumentWordsAligned : NSObject

@property (retain, nonatomic) NSMutableArray *inDocumentWordsStack; // ivar: _inDocumentWordsStack
@property (retain, nonatomic) NSMutableDictionary *leftContextToWordMap; // ivar: _leftContextToWordMap


-(NSUInteger)wordsCount;
-(id)_wordsFromContext:(id)arg0 shouldDelete:(BOOL)arg1 ;
-(id)deleteWordsUpToContext:(id)arg0 ;
-(id)description;
-(id)init;
-(id)lastWord;
-(id)updateWordEntryAtIndex:(NSUInteger)arg0 withAcceptedString:(id)arg1 documentContext:(id)arg2 ;
-(id)wordsForContext:(id)arg0 ;
-(id)wordsFromContext:(id)arg0 ;
-(void)addToContextMap:(id)arg0 ;
-(void)insertWord:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)pushWordToDocument:(id)arg0 ;
-(void)removeFromContextMap:(id)arg0 ;


@end


#endif