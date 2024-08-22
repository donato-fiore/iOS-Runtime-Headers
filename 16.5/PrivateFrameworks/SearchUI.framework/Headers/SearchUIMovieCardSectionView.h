// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIMOVIECARDSECTIONVIEW_H
#define SEARCHUIMOVIECARDSECTIONVIEW_H

@class NUIContainerStackView, SFMediaInfoCardSection;


#import "SearchUICardSectionView.h"

@interface SearchUIMovieCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;
@property (retain, nonatomic) SFMediaInfoCardSection *section;


+(id)dragTitleForCardSection:(id)arg0 ;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;


@end


#endif