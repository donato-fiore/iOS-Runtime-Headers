// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUITABLEROWCARDVIEW_H
#define SEARCHUITABLEROWCARDVIEW_H

@class TLKGridRowView;


#import "SearchUICardSectionView.h"

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (retain, nonatomic) TLKGridRowView *contentView;


+(BOOL)hasOnlyImages:(id)arg0 ;
+(BOOL)isAHeader:(id)arg0 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(CGFloat)largestImageSizeForSection:(id)arg0 ;
+(struct UIEdgeInsets )defaultLayoutMargins;
-(id)leadingTextView;
-(id)setupContentView;
-(struct UIEdgeInsets )verticalBaselineInsetsForHeader:(BOOL)arg0 isCompactTable:(BOOL)arg1 ;
-(struct UIEdgeInsets )verticalBaselineInsetsForRowsWithCompactTable:(BOOL)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif