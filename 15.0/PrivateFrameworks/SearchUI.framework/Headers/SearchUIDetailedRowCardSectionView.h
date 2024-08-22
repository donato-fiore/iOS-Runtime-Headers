// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIDETAILEDROWCARDSECTIONVIEW_H
#define SEARCHUIDETAILEDROWCARDSECTIONVIEW_H

@class NSString;
@protocol SearchUIDetailedViewDelegate;


#import "SearchUICardSectionView.h"
#import "SearchUIDetailedView.h"
#import "SearchUIDetailedRowModel.h"

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>



@property (retain, nonatomic) SearchUIDetailedView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SearchUIDetailedRowModel *rowModel;
@property (readonly) Class superclass;


+(BOOL)supportsCustomUserReportRequestAfforance;
+(BOOL)supportsRecyclingForCardSection:(id)arg0 ;
-(id)leadingTextView;
-(id)leadingView;
-(id)setupContentView;
-(void)containerView:(id)arg0 willMeasureArrangedSubviewsFittingSize:(struct CGSize )arg1 forReason:(NSInteger)arg2 ;
-(void)footnoteButtonPressed;
-(void)setFeedbackDelegate:(id)arg0 ;
-(void)updateChevronVisible:(BOOL)arg0 leaveSpaceForChevron:(BOOL)arg1 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif