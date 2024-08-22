// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLINEWRAPPINGCONTEXT_H
#define CRLINEWRAPPINGCONTEXT_H

@class NSArray, NSString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CRLineWrappingClassifier.h"
#import "CRTextFeature.h"
#import "CRLanguageResourcesManager.h"

@interface CRLineWrappingContext : NSObject {
    vector<unsigned int, std::allocator<unsigned int>> _contextTokens;
}


@property BOOL active; // ivar: _active
@property (readonly) CGFloat averageLineHeight;
@property (readonly) CGFloat averageVerticalSpacing;
@property (readonly) CRLineWrappingClassifier *classifier; // ivar: _classifier
@property (readonly) NSArray *contextResults;
@property NSUInteger contextSize; // ivar: _contextSize
@property (readonly) CRTextFeature *lastFeature;
@property NSUInteger lineCount; // ivar: _lineCount
@property CGFloat lineHeightSum; // ivar: _lineHeightSum
@property (readonly) NSString *locale; // ivar: _locale
@property (retain) CRLanguageResourcesManager *lrManager; // ivar: _lrManager
@property (retain) NSMutableArray *results; // ivar: _results
@property (readonly) BOOL shouldConsiderLetterCase;
@property (retain) NSString *text; // ivar: _text
@property (readonly) BOOL usesWordTokens;
@property CGFloat verticalSpacingSum; // ivar: _verticalSpacingSum
@property NSInteger verticalSpacingSumCount; // ivar: _verticalSpacingSumCount


+(BOOL)_usesWordTokensForLocale:(id)arg0 ;
-(BOOL)classifierShouldCorrectOverwrappingWithEvaluation:(NSInteger)arg0 correctionMode:(NSInteger)arg1 ;
-(BOOL)classifierShouldInsertLineBreakForEvaluationResult:(id)arg0 threshold:(float)arg1 ;
-(BOOL)isClassifierAvailable;
-(BOOL)isValidWordString:(id)arg0 ;
-(CGFloat)charLMScoreByAddingString:(id)arg0 eosScore:(*CGFloat)arg1 ;
-(CGFloat)wordLMScoreByAddingToken:(unsigned int)arg0 ;
-(CGFloat)wordLMScoreByAddingTokens:(*void)arg0 ;
-(id)initWithLocale:(id)arg0 ;
-(struct vector<unsigned int, std::allocator<unsigned int>> )contextByAddingNewTokens:(*void)arg0 ;
-(struct vector<unsigned int, std::allocator<unsigned int>> )tokenizeStringIntoWords:(id)arg0 ;
-(void)addResult:(id)arg0 ;
-(void)dealloc;
-(void)startWithResult:(id)arg0 contextSize:(NSInteger)arg1 ;


@end


#endif