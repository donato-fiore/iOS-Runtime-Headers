// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIGRIDROWMODEL_H
#define SEARCHUIGRIDROWMODEL_H



#import "SearchUICardSectionRowModel.h"
#import "SearchUIGridLayoutManager.h"

@interface SearchUIGridRowModel : SearchUICardSectionRowModel

@property (retain, nonatomic) SearchUIGridLayoutManager *gridLayoutManager; // ivar: _gridLayoutManager
@property (nonatomic) BOOL shouldHide; // ivar: _shouldHide


-(BOOL)hasLeadingImage;
-(BOOL)prefersNoSeparatorAbove;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 gridLayoutManager:(id)arg2 queryId:(NSUInteger)arg3 ;


@end


#endif