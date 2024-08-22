// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISECTIONHEADERCARDSECTIONVIEW_H
#define SEARCHUISECTIONHEADERCARDSECTIONVIEW_H

@class TLKSectionHeaderView;


#import "SearchUICardSectionView.h"

@interface SearchUISectionHeaderCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSectionHeaderView *contentView;


+(BOOL)fillsBackgroundWithContentForCardSection:(id)arg0 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif