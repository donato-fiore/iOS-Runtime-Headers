// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMOVIECARDSECTIONUPNEXTBUTTONVIEW_H
#define SEARCHUIMOVIECARDSECTIONUPNEXTBUTTONVIEW_H



#import "SearchUIMovieCardSectionBuyButtonView.h"
#import "SearchUIWatchListState.h"

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView

@property (retain, nonatomic) SearchUIWatchListState *watchListState; // ivar: _watchListState


-(id)initIsInUpNext:(BOOL)arg0 cardSectionView:(id)arg1 ;
-(void)buttonPressed;
-(void)updateUpNextStatus;


@end


#endif