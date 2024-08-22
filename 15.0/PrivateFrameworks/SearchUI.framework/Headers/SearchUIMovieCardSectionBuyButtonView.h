// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIMOVIECARDSECTIONBUYBUTTONVIEW_H
#define SEARCHUIMOVIECARDSECTIONBUYBUTTONVIEW_H

@class TLKStackView, SFPunchout;


#import "SearchUIOfferButtonView.h"
#import "SearchUIMovieCardSectionView.h"
#import "SearchUILabel.h"

@interface SearchUIMovieCardSectionBuyButtonView : TLKStackView

@property (retain, nonatomic) SearchUIOfferButtonView *button; // ivar: _button
@property (weak, nonatomic) SearchUIMovieCardSectionView *cardSectionView; // ivar: _cardSectionView
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (retain, nonatomic) SearchUILabel *subtitleLabel; // ivar: _subtitleLabel


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 punchout:(id)arg2 cardSectionView:(id)arg3 ;


@end


#endif