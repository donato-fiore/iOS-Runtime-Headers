// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSSUGGESTIONRESULTBUILDER_H
#define SSSUGGESTIONRESULTBUILDER_H

@class NSString, SFSearchSuggestion;


#import "SSResultBuilder.h"
#import "SPSearchEntity.h"

@interface SSSuggestionResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *contactIdentifier; // ivar: _contactIdentifier
@property (retain, nonatomic) SPSearchEntity *entity; // ivar: _entity
@property (retain, nonatomic) NSString *queryString; // ivar: _queryString
@property (retain, nonatomic) SFSearchSuggestion *suggestion; // ivar: _suggestion
@property (retain, nonatomic) NSString *suggestionString; // ivar: _suggestionString


+(id)buildResultWithResult:(id)arg0 queryContext:(id)arg1 ;
+(id)buildResultWithSuggestion:(id)arg0 queryContext:(id)arg1 ;
-(id)buildCommand;
-(id)buildCompactCardSection;
-(id)buildHighlightedTextForSuggestion;
-(id)buildInlineCardSections;
-(id)buildResult;
-(id)buildSymbolImage;
-(id)initWithResult:(id)arg0 queryContext:(id)arg1 ;
-(id)initWithSuggestion:(id)arg0 queryContext:(id)arg1 ;


@end


#endif