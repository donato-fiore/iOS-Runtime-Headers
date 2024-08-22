// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUITRAILERVIEW_H
#define SEARCHUITRAILERVIEW_H

@class TLKStackView, UIView, SFPunchout, TLKLabel;


#import "SearchUITrailersCardSectionView.h"
#import "SearchUIButton.h"

@interface SearchUITrailerView : TLKStackView

@property (weak, nonatomic) SearchUITrailersCardSectionView *cardSectionView; // ivar: _cardSectionView
@property (retain, nonatomic) UIView *centeredBoxView; // ivar: _centeredBoxView
@property (retain, nonatomic) SearchUIButton *playButton; // ivar: _playButton
@property (retain, nonatomic) SFPunchout *punchout; // ivar: _punchout
@property (retain, nonatomic) TLKLabel *titleLabel; // ivar: _titleLabel


-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithMediaItem:(id)arg0 cardSectionView:(id)arg1 ;
-(void)playTrailer;


@end


#endif