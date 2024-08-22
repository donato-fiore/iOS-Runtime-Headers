// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUISCORESUMMARYCARDSECTIONVIEW_H
#define SEARCHUISCORESUMMARYCARDSECTIONVIEW_H

@class NSString, TLKSplitHeaderView;
@protocol NUIContainerViewDelegate, TLKSplitHeaderViewDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, TLKSplitHeaderViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKSplitHeaderView *splitHeaderView; // ivar: _splitHeaderView
@property (readonly) Class superclass;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)dragTitleForCardSection:(id)arg0 ;
+(id)titleForScoreBoard:(id)arg0 forDisplay:(BOOL)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
-(BOOL)hasCommandForButtonItem:(id)arg0 ;
-(id)commandForButtonItem:(id)arg0 ;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)didPressLeadingButtonForSplitHeader:(id)arg0 ;
-(void)didPressTrailingButtonForSplitHeader:(id)arg0 ;
-(void)performCommandForButtonItem:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif