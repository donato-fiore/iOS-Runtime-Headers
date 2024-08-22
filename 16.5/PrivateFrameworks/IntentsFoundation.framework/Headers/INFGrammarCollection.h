// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFGRAMMARCOLLECTION_H
#define INFGRAMMARCOLLECTION_H

@class NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface INFGrammarCollection : NSObject

@property (readonly, nonatomic) NSArray *sentences;
@property (retain, nonatomic) NSMutableDictionary *sentencesDictionary; // ivar: _sentencesDictionary
@property (readonly, nonatomic) NSArray *tokens;
@property (retain, nonatomic) NSMutableDictionary *tokensDictionary; // ivar: _tokensDictionary


+(id)grammarCollection;
+(id)grammarCollectionNamed:(id)arg0 bundle:(id)arg1 ;
+(id)grammarCollectionNamed:(id)arg0 bundle:(id)arg1 language:(id)arg2 ;
-(id)createAdjectiveWithIdentifier:(id)arg0 language:(id)arg1 ;
-(id)createNounWithGender:(NSUInteger)arg0 identifier:(id)arg1 language:(id)arg2 ;
-(id)createNounWithIdentifier:(id)arg0 language:(id)arg1 ;
-(id)createSentenceWithIdentifier:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithGrammarCollectionNamed:(id)arg0 bundle:(id)arg1 language:(id)arg2 ;
-(id)sentenceWithIdentifier:(id)arg0 ;
-(id)tokenWithIdentifier:(id)arg0 ;
-(void)addSentence:(id)arg0 ;
-(void)addToken:(id)arg0 ;
-(void)writeToFileAtPath:(id)arg0 ;


@end


#endif