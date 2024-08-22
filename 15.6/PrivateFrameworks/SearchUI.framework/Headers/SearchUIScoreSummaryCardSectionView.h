// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISCORESUMMARYCARDSECTIONVIEW_H
#define SEARCHUISCORESUMMARYCARDSECTIONVIEW_H

@class NSString, TLKSplitHeaderView;
@protocol NUIContainerViewDelegate;


#import "SearchUICardSectionView.h"

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) TLKSplitHeaderView *splitHeaderView; // ivar: _splitHeaderView
@property (readonly) Class superclass;


+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
+(id)dragTitleForCardSection:(id)arg0 ;
+(id)titleForScoreBoard:(id)arg0 forDisplay:(BOOL)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg0 ;
-(id)setupContentView;
-(struct CGSize )containerView:(id)arg0 systemLayoutSizeFittingSize:(struct CGSize )arg1 forArrangedSubview:(id)arg2 ;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif