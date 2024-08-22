// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUICOMBINEDCARDSECTIONROWMODEL_H
#define SEARCHUICOMBINEDCARDSECTIONROWMODEL_H

@class NSArray;


#import "SearchUIRowModel.h"

@interface SearchUICombinedCardSectionRowModel : SearchUIRowModel

@property (retain, nonatomic) NSArray *cardSectionRowModels; // ivar: _cardSectionRowModels


-(BOOL)isDraggable;
-(BOOL)isTappable;
-(Class)cellViewClass;
-(Class)collectionViewCellClass;
-(id)cardSection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dragSubtitle;
-(id)dragText;
-(id)dragTitle;
-(id)dragURL;
-(id)firstRowModel;
-(id)initWithResult:(id)arg0 cardSectionRowModels:(id)arg1 ;
-(id)nextCard;
-(id)punchouts;
-(int)separatorStyle;


@end


#endif