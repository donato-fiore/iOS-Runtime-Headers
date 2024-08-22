// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSRESULTBUILDER_H
#define SSRESULTBUILDER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SPSearchQueryContext.h"
#import "SFSearchResult_SpotlightExtras.h"

@interface SSResultBuilder : NSObject

@property (nonatomic) BOOL isTopHit; // ivar: _isTopHit
@property (retain, nonatomic) NSArray *matchedStrings; // ivar: _matchedStrings
@property (retain, nonatomic) SPSearchQueryContext *queryContext; // ivar: _queryContext
@property (retain, nonatomic) SFSearchResult_SpotlightExtras *result; // ivar: _result


+(BOOL)isCoreSpotlightResult;
+(BOOL)supportsResult:(id)arg0 ;
+(Class)resultBuilderClassForResult:(id)arg0 ;
+(id)bundleId;
+(id)resultBuilderWithResult:(id)arg0 ;
+(id)richTextsFromStrings:(id)arg0 ;
+(struct CGSize )defaultThumbnailSize;
+(void)setMaxLinesForDescriptions:(id)arg0 ;
-(BOOL)buildButtonItemsAreTrailing;
-(BOOL)buildPreventThumbnailImageScaling;
-(BOOL)buildSecondaryTitleIsDetached;
-(id)buildAction;
-(id)buildButtonItems;
-(id)buildCommand;
-(id)buildCompactCard;
-(id)buildCompactCardSection;
-(id)buildCompactCardSections;
-(id)buildDescriptions;
-(id)buildDetailedRowCardSection;
-(id)buildFootnote;
-(id)buildHighlightedMatchedTextWithTitle:(id)arg0 headTruncation:(BOOL)arg1 ;
-(id)buildHorizontallyScrollingCardSection;
-(id)buildInlineCard;
-(id)buildInlineCardSection;
-(id)buildInlineCardSections;
-(id)buildPreviewButtonItems;
-(id)buildPunchouts;
-(id)buildResult;
-(id)buildSecondaryTitle;
-(id)buildSecondaryTitleImage;
-(id)buildThumbnail;
-(id)buildTitle;
-(id)buildTrailingBottomText;
-(id)buildTrailingMiddleText;
-(id)buildTrailingTopText;
-(id)coreSpotlightId;
-(id)initWithResult:(id)arg0 ;
-(id)subclassBuildHorizontallyScrollingCardSection;
-(void)buildDefaultPropertiesForCardSection:(id)arg0 ;


@end


#endif