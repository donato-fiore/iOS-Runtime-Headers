// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INFSENTENCE_H
#define INFSENTENCE_H

@class NSString, NSSet, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "INFGrammarCollection.h"

@interface INFSentence : NSObject

@property (weak, nonatomic) INFGrammarCollection *collection; // ivar: _collection
@property (copy, nonatomic) NSString *format; // ivar: _format
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSSet *placeholders; // ivar: _placeholders
@property (retain, nonatomic) NSMutableDictionary *placeholdersToTokens; // ivar: _placeholdersToTokens
@property (retain, nonatomic) NSMutableDictionary *relationships; // ivar: _relationships
@property (readonly, nonatomic) NSString *resolvedSentence;


+(id)sentenceWithIdentifier:(id)arg0 ;
-(BOOL)containsUnresolvedTokens:(id)arg0 ;
-(id)concreteToken:(id)arg0 in:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)filteredPlaceholders;
-(id)init;
-(id)initWithDictionary:(id)arg0 identifier:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)unresolvedInArray:(id)arg0 ;
-(void)generatePlaceholders;
-(void)placeholder:(id)arg0 dependsOn:(id)arg1 ;
-(void)reportCyclesIfAny;
-(void)setNumber:(id)arg0 forPlaceholder:(id)arg1 ;
-(void)setToken:(id)arg0 forPlaceholder:(id)arg1 ;


@end


#endif