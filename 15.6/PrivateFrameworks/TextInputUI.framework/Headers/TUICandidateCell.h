// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUICANDIDATECELL_H
#define TUICANDIDATECELL_H

@class TIKeyboardCandidate, UILabel, UIImage, UIImageView;


#import "TUICandidateBaseCell.h"
#import "TUICandidateLabel.h"

@interface TUICandidateCell : TUICandidateBaseCell

@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) TUICandidateLabel *alternativeTextLabel; // ivar: _alternativeTextLabel
@property (retain, nonatomic) TUICandidateLabel *annotationTextLabel; // ivar: _annotationTextLabel
@property (retain, nonatomic) TIKeyboardCandidate *candidate; // ivar: _candidate
@property (nonatomic) NSUInteger candidateNumber; // ivar: _candidateNumber
@property (retain, nonatomic) UILabel *candidateNumberLabel; // ivar: _candidateNumberLabel
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat minimumTextLabelHeight; // ivar: _minimumTextLabelHeight
@property (nonatomic) BOOL rowSelected; // ivar: _rowSelected
@property (nonatomic) BOOL shouldShowCandidateNumber; // ivar: _shouldShowCandidateNumber
@property (retain, nonatomic) TUICandidateLabel *textLabel; // ivar: _textLabel


+(CGFloat)widthForCandidate:(id)arg0 showCandidateNumber:(BOOL)arg1 style:(id)arg2 ;
+(CGFloat)widthForText:(id)arg0 font:(id)arg1 layoutOrientation:(NSInteger)arg2 ;
+(id)reuseIdentifier;
-(BOOL)_canFocusProgrammatically;
-(BOOL)isFocused;
-(id)cellBackgroundColor;
-(id)cellBackgroundImage;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_computeImageViewFrame;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)commonInit;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)rotateBy90DegreesForFrame:(struct CGRect *)arg0 ;
-(void)setStyle:(id)arg0 ;
-(void)updateColors;
-(void)updateLabels;
-(void)updateStyle;


@end


#endif