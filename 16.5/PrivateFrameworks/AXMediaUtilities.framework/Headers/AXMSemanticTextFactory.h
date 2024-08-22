// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSEMANTICTEXTFACTORY_H
#define AXMSEMANTICTEXTFACTORY_H

@class NSMutableDictionary, NSDataDetector, NSNumberFormatter, NLTagger;

#import <Foundation/Foundation.h>


@interface AXMSemanticTextFactory : NSObject

@property (retain, nonatomic) NSMutableDictionary *cachedLexicons; // ivar: _cachedLexicons
@property (retain, nonatomic) NSMutableDictionary *compiledPatterns; // ivar: _compiledPatterns
@property (retain, nonatomic) NSDataDetector *dataDetector; // ivar: _dataDetector
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (retain, nonatomic) NLTagger *tagger; // ivar: _tagger


-(BOOL)_lexiconExistsForLocale:(id)arg0 ;
-(BOOL)_string:(id)arg0 containsOnlyCharactersFrom:(id)arg1 ;
-(BOOL)_textExistsInLexicon:(id)arg0 withLocale:(id)arg1 ;
-(id)_preprocessedText:(id)arg0 ;
-(id)semanticTextForText:(id)arg0 withLocale:(id)arg1 ;
-(struct _LXLexicon *)_lexiconForLocale:(id)arg0 ;
-(void)_applyCustomPatterns:(id)arg0 ;
-(void)_applyDataDetectors:(id)arg0 ;
-(void)_applyNaturalLanguageTokens:(id)arg0 ;
-(void)_performSemanticAnalysis:(id)arg0 ;


@end


#endif