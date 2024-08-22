// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIROWCARDSECTIONVIEW_H
#define SEARCHUIROWCARDSECTIONVIEW_H

@class TLKSimpleRowView;


#import "SearchUICardSectionView.h"

@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKSimpleRowView *contentView;


+(BOOL)hasLeadingImageForCardSection:(id)arg0 ;
+(BOOL)prefersNoSeparatorAboveCardSection:(id)arg0 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)dragSubtitleForCardSection:(id)arg0 ;
+(id)dragTitleForCardSection:(id)arg0 ;
-(id)leadingTextView;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif