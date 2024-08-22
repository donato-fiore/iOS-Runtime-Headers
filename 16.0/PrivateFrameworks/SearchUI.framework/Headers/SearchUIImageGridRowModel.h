// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIIMAGEGRIDROWMODEL_H
#define SEARCHUIIMAGEGRIDROWMODEL_H

@class NSArray;


#import "SearchUICardSectionRowModel.h"

@interface SearchUIImageGridRowModel : SearchUICardSectionRowModel

@property (retain) NSArray *cardSectionRowModels; // ivar: _cardSectionRowModels


-(BOOL)isTappable;
-(Class)cardSectionViewClass;
-(id)cardSection;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 isInline:(BOOL)arg2 queryId:(NSUInteger)arg3 ;
-(id)initWithResults:(id)arg0 ;


@end


#endif