// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLINGCARDSECTIONROWMODEL_H
#define SEARCHUIHORIZONTALLYSCROLLINGCARDSECTIONROWMODEL_H

@class NSArray;


#import "SearchUIRowModel.h"

@interface SearchUIHorizontallyScrollingCardSectionRowModel : SearchUIRowModel

@property (retain) NSArray *cardSectionRowModels; // ivar: _cardSectionRowModels
@property (readonly) NSInteger numberOfRows; // ivar: _numberOfRows


-(BOOL)hasLeadingImage;
-(Class)cellViewClass;
-(id)cardSection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 queryId:(NSUInteger)arg2 ;
-(id)initWithResults:(id)arg0 ;
-(id)reuseIdentifier;


@end


#endif