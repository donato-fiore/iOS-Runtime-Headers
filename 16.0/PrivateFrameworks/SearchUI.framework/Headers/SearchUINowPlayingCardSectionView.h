// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUINOWPLAYINGCARDSECTIONVIEW_H
#define SEARCHUINOWPLAYINGCARDSECTIONVIEW_H

@class TLKStackView;


#import "SearchUICardSectionView.h"

@interface SearchUINowPlayingCardSectionView : SearchUICardSectionView

@property (retain, nonatomic) TLKStackView *contentView;


-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)setupContentView;


@end


#endif