// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPSEARCHQUERYCONTEXT_H
#define SPSEARCHQUERYCONTEXT_H

@class CSAttributeEvaluator, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "SPSearchSuggestionResult.h"

@interface SPSearchQueryContext : NSObject {
    CSAttributeEvaluator *_evaluator;
    CSAttributeEvaluator *_evaluatorForPersonMatching;
}


@property (nonatomic) BOOL allowInternet; // ivar: _allowInternet
@property (nonatomic) CGFloat currentTime; // ivar: _currentTime
@property (nonatomic) BOOL disableOCR; // ivar: _disableOCR
@property (retain, nonatomic) NSArray *disabledApps; // ivar: _disabledApps
@property (retain, nonatomic) NSArray *disabledBundles; // ivar: _disabledBundles
@property (retain, nonatomic) NSArray *disabledDomains; // ivar: _disabledDomains
@property (readonly, nonatomic) NSString *displayedText;
@property (retain, nonatomic) SPSearchSuggestionResult *engagedSuggestion; // ivar: _engagedSuggestion
@property (nonatomic) BOOL forceQueryEvenIfSame; // ivar: _forceQueryEvenIfSame
@property (retain, nonatomic) NSArray *groupingRules; // ivar: _groupingRules
@property (readonly, nonatomic) BOOL hasMarkedText;
@property (nonatomic) BOOL internalDebug; // ivar: _internalDebug
@property (nonatomic) BOOL internalValidation; // ivar: _internalValidation
@property (nonatomic) BOOL isAdvancedSyntax; // ivar: _isAdvancedSyntax
@property (nonatomic) BOOL isPasscodeLocked; // ivar: _isPasscodeLocked
@property (retain, nonatomic) NSString *keyboardLanguage; // ivar: _keyboardLanguage
@property (retain, nonatomic) NSString *keyboardPrimaryLanguage; // ivar: _keyboardPrimaryLanguage
@property (retain, nonatomic) NSArray *markedTextArray; // ivar: _markedTextArray
@property (nonatomic) BOOL noTokenize; // ivar: _noTokenize
@property (readonly, nonatomic) NSString *normalizedSearchString; // ivar: _normalizedSearchString
@property (nonatomic) BOOL promoteLocalResults; // ivar: _promoteLocalResults
@property (nonatomic) BOOL promoteParsecResults; // ivar: _promoteParsecResults
@property (nonatomic) NSUInteger queryIdent; // ivar: _queryIdent
@property (nonatomic) NSUInteger queryKind; // ivar: _queryKind
@property (nonatomic) CGFloat scaleFactor; // ivar: _scaleFactor
@property (retain, nonatomic) NSArray *searchDomains; // ivar: _searchDomains
@property (retain, nonatomic) NSArray *searchEntities; // ivar: _searchEntities
@property (retain, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly, getter=getTrimmedSearchString) NSString *trimmedSearchString;
@property (nonatomic) NSUInteger whyClear; // ivar: _whyClear
@property (nonatomic) NSUInteger whyQuery; // ivar: _whyQuery


+(id)queryContextWithSearchString:(id)arg0 ;
-(id)evaluator;
-(id)evaluatorForPersonMatching;
-(id)evaluatorWithSearchString:(id)arg0 ;
-(id)init;
-(id)initWithSearchString:(id)arg0 ;


@end


#endif