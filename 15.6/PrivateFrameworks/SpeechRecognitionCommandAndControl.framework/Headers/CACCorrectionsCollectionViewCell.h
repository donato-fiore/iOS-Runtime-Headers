// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CACCORRECTIONSCOLLECTIONVIEWCELL_H
#define CACCORRECTIONSCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, NSLayoutConstraint;



@interface CACCorrectionsCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *textLabel; // ivar: _textLabel
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)preferredLayoutAttributesFittingAttributes:(id)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif