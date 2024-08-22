// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIRICHTITLECARDSECTIONVIEW_H
#define SEARCHUIRICHTITLECARDSECTIONVIEW_H

@class TLKHeaderView;


#import "SearchUICardSectionView.h"

@interface SearchUIRichTitleCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKHeaderView *contentView;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)dragSubtitleForCardSection:(id)arg0 ;
+(id)dragTitleForCardSection:(id)arg0 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
-(id)setupContentView;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif