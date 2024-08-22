// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICSEARCHRESULT_H
#define ICSEARCHRESULT_H

@class NSString, NSDictionary, NSTextCheckingResult, NSValue, NSRegularExpression, NSAttributedString;
@protocol ICItemIdentifier, ICSearchIndexable;

#import <Foundation/Foundation.h>

#import "ICSearchResultConfiguration.h"
#import "ICSearchResultRegexMatchFinder.h"

@interface ICSearchResult : NSObject <ICItemIdentifier>

 {
    NSUInteger _cachedHash;
}


@property (readonly, nonatomic) ICSearchResultConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSObject<ICSearchIndexable> *currentContextObject; // ivar: _currentContextObject
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *decomposedHighlightInfo; // ivar: _decomposedHighlightInfo
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *displayingSnippet; // ivar: _displayingSnippet
@property (retain, nonatomic) NSTextCheckingResult *displayingSnippetCheckingResult; // ivar: _displayingSnippetCheckingResult
@property (retain, nonatomic) NSString *displayingTitle; // ivar: _displayingTitle
@property (retain, nonatomic) NSTextCheckingResult *displayingTitleCheckingResult; // ivar: _displayingTitleCheckingResult
@property (retain, nonatomic) NSValue *firstMatchingRangeInNote; // ivar: _firstMatchingRangeInNote
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSRegularExpression *highlightPatternRegex; // ivar: _highlightPatternRegex
@property (nonatomic) BOOL isDisplayingParticipantMatch; // ivar: _isDisplayingParticipantMatch
@property (readonly, nonatomic) NSObject<ICSearchIndexable> *object; // ivar: _object
@property (readonly, nonatomic) NSObject<ICItemIdentifier> *parentIdentifier;
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *participantHighlightRegexMatchFinder; // ivar: _participantHighlightRegexMatchFinder
@property (retain, nonatomic) NSAttributedString *snippetAttributedString; // ivar: _snippetAttributedString
@property (nonatomic) CGRect snippetAttributedStringInsideFrame; // ivar: _snippetAttributedStringInsideFrame
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *snippetHighlightRegexMatchFinder; // ivar: _snippetHighlightRegexMatchFinder
@property (readonly) Class superclass;
@property (retain, nonatomic) NSRegularExpression *tipKitCheckRegex; // ivar: _tipKitCheckRegex
@property (retain, nonatomic) NSAttributedString *titleAttributedString; // ivar: _titleAttributedString
@property (nonatomic) CGRect titleAttributedStringInsideFrame; // ivar: _titleAttributedStringInsideFrame
@property (retain, nonatomic) ICSearchResultRegexMatchFinder *titleHighlightRegexMatchFinder; // ivar: _titleHighlightRegexMatchFinder


+(BOOL)canFitAttributedString:(id)arg0 ellipses:(id)arg1 shouldPrefixWithEllipses:(BOOL)arg2 insideFrame:(struct CGRect )arg3 centered:(BOOL)arg4 ;
+(id)attributedStringWithMatchHighlighted:(id)arg0 textCheckingResult:(id)arg1 usingAttributes:(id)arg2 highlightColor:(id)arg3 insideFrame:(struct CGRect )arg4 isSnippetForParticipantMatch:(BOOL)arg5 finishingUpRegexMatchFinder:(id)arg6 ;
+(id)attributesByHighlightingAttributes:(id)arg0 withHighlightColor:(id)arg1 ;
+(id)authorNameToHighlightForNote:(id)arg0 fromSearchResult:(id)arg1 textCheckingResult:(*id)arg2 ;
+(id)finishUpHighlightingWithMatchFinder:(id)arg0 forAttributedString:(id)arg1 inRange:(struct _NSRange )arg2 highlightedAttributes:(id)arg3 ;
+(id)firstTextCheckingResultOfRegex:(id)arg0 inDocumentText:(id)arg1 ;
+(struct CGRect )boundingRectForAttributedString:(id)arg0 fittingSize:(struct CGSize )arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compareByModificationDate:(id)arg0 ;
-(id)attributedSummaryWithBaseAttributes:(id)arg0 highlightColor:(id)arg1 insideFrame:(struct CGRect )arg2 ;
-(id)attributedTitleWithBaseAttributes:(id)arg0 highlightColor:(id)arg1 insideFrame:(struct CGRect )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithMainContextObject:(id)arg0 currentContextObject:(id)arg1 configuration:(id)arg2 ;
-(id)initWithObject:(id)arg0 configuration:(id)arg1 ;
-(id)snippetWithBaseAttributes:(id)arg0 highlightColor:(id)arg1 insideFrame:(struct CGRect )arg2 ;
-(void)initializeRegexes;
-(void)prepareDisplayingSnippetWithAccessingObject:(id)arg0 ;
-(void)prepareDisplayingTitleWithAccessingObject:(id)arg0 ;
-(void)prepareFirstMatchingRangeWithAccessingObject:(id)arg0 ;
-(void)refetchObjectFromContext:(id)arg0 ;
-(void)refreshDisplaySnippet;
-(void)refreshDisplayTitle;
-(void)refreshFirstMatchingRange;


@end


#endif