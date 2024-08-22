// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUISUGGESTIONCANDIDATECELL_H
#define TUISUGGESTIONCANDIDATECELL_H

@class NSLayoutConstraint, TIKeyboardCandidate, UILayoutGuide, UIImageView, UILabel;


#import "TUICandidateBaseCell.h"

@interface TUISuggestionCandidateCell : TUICandidateBaseCell

@property (retain, nonatomic) NSLayoutConstraint *bottomPaddingConstraint; // ivar: _bottomPaddingConstraint
@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (retain, nonatomic) UILayoutGuide *centeredContainer; // ivar: _centeredContainer
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) NSLayoutConstraint *leftPaddingConstraint; // ivar: _leftPaddingConstraint
@property (retain, nonatomic) UILayoutGuide *paddedContainer; // ivar: _paddedContainer
@property (retain, nonatomic) NSLayoutConstraint *paddingBetweenConstraint; // ivar: _paddingBetweenConstraint
@property (retain, nonatomic) NSLayoutConstraint *rightPaddingConstraint; // ivar: _rightPaddingConstraint
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint; // ivar: _topPaddingConstraint


+(id)reuseIdentifier;
-(id)bodyText;
-(id)headerText;
-(id)image;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)textSuggestion;
-(void)commonInit;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setStyle:(id)arg0 ;
-(void)updateLabel;


@end


#endif