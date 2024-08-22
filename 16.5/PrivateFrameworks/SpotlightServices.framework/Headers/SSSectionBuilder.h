// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSSECTIONBUILDER_H
#define SSSECTIONBUILDER_H


#import <Foundation/Foundation.h>

#import "SPSearchQueryContext.h"
#import "SFMutableResultSection.h"

@interface SSSectionBuilder : NSObject

@property (weak, nonatomic) SPSearchQueryContext *queryContext; // ivar: _queryContext
@property (nonatomic) NSUInteger renderState; // ivar: _renderState
@property (weak, nonatomic) SFMutableResultSection *section; // ivar: _section


+(BOOL)supportsSection:(id)arg0 ;
+(id)detailedRowCardSectionForCardSection:(id)arg0 ;
+(id)searchInAppButtonItemWithCommand:(id)arg0 ;
+(id)searchInAppButtonItemWithCommand:(id)arg0 title:(id)arg1 ;
+(id)supportedBundleId;
+(id)supportedBundleIds;
+(id)visibleTextForCardSection:(id)arg0 includeDescriptions:(BOOL)arg1 ;
+(void)disambiguateUIIfNecessary:(id)arg0 ;
-(BOOL)hasEntities;
-(BOOL)isContactEntitySearch;
-(BOOL)shouldSkipSection;
-(BOOL)useHorizontallyScrollingCardSectionUI;
-(NSInteger)maxCardSections;
-(id)buildBridgedResult;
-(id)buildButtonItem;
-(id)buildCardSectionWithResult:(id)arg0 resultBuilder:(id)arg1 ;
-(id)buildCardSections;
-(id)buildCollectionCardSection;
-(id)buildCollectionStyle;
-(id)buildSearchContinuationString;
-(id)buildSection;
-(id)buildTitle;
-(id)bundleId;


@end


#endif