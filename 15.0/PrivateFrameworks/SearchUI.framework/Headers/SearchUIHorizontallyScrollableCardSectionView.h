// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIHORIZONTALLYSCROLLABLECARDSECTIONVIEW_H
#define SEARCHUIHORIZONTALLYSCROLLABLECARDSECTIONVIEW_H



#import "SearchUICardSectionView.h"
#import "SearchUIHorizontallyScrollingContainerView.h"

@interface SearchUIHorizontallyScrollableCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) SearchUIHorizontallyScrollingContainerView *contentView;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;
-(void)setFeedbackDelegate:(id)arg0 ;


@end


#endif