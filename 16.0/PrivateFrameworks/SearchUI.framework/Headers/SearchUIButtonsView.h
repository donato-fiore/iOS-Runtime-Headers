// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIBUTTONSVIEW_H
#define SEARCHUIBUTTONSVIEW_H

@class NUIContainerBoxView;


#import "SearchUIMovieCardSectionView.h"

@interface SearchUIButtonsView : NUIContainerBoxView

@property (weak) SearchUIMovieCardSectionView *cardSectionView; // ivar: _cardSectionView


-(id)buttonWithTitle:(id)arg0 subtitle:(id)arg1 punchoutURL:(id)arg2 ;
-(id)initWithCardSectionView:(id)arg0 ;
-(void)fetchButtonsWithCompletionHandler:(id)arg0 ;


@end


#endif