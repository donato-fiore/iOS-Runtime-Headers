// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICARDSECTIONROWMODEL_H
#define SEARCHUICARDSECTIONROWMODEL_H

@class NSString;


#import "SearchUIRowModel.h"

@interface SearchUICardSectionRowModel : SearchUIRowModel

@property (copy, nonatomic) NSString *cardReuseIdentifier; // ivar: _cardReuseIdentifier
@property (readonly, nonatomic) Class cardSectionViewClass;
@property (nonatomic) NSUInteger cornerMask; // ivar: _cornerMask
@property (nonatomic) BOOL hasCustomCornerRounding; // ivar: _hasCustomCornerRounding
@property (nonatomic) BOOL isHorizontalInLayout; // ivar: _isHorizontalInLayout
@property (nonatomic) BOOL isInline; // ivar: _isInline


-(BOOL)anyInlineCardSectionsHaveNextCards;
-(BOOL)anyInlineCardSectionsHavePunchouts;
-(BOOL)fillsBackgroundWithContent;
-(BOOL)hasLeadingImage;
-(BOOL)isDraggable;
-(BOOL)isQuerySuggestion;
-(BOOL)isTappable;
-(BOOL)prefersNoSeparatorAbove;
-(BOOL)supportsCustomUserReportRequestAfforance;
-(Class)cellViewClass;
-(Class)collectionViewCellClass;
-(id)accessibilityIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dragSubtitle;
-(id)dragText;
-(id)dragTitle;
-(id)dragURL;
-(id)fallbackCardSectionForCompactResult;
-(id)horizontalRowModel;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3 ;
-(id)nextCard;
-(id)punchouts;
-(id)reuseIdentifier;
-(int)separatorStyle;


@end


#endif