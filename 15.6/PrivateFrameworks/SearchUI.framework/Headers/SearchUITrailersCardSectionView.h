// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUITRAILERSCARDSECTIONVIEW_H
#define SEARCHUITRAILERSCARDSECTIONVIEW_H

@class NUIContainerStackView;


#import "SearchUICardSectionView.h"

@interface SearchUITrailersCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) NUIContainerStackView *contentView;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;


@end


#endif