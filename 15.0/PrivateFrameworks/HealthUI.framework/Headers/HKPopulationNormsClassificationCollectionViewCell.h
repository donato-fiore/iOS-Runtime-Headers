// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKPOPULATIONNORMSCLASSIFICATIONCOLLECTIONVIEWCELL_H
#define HKPOPULATIONNORMSCLASSIFICATIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIColor;



@interface HKPopulationNormsClassificationCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *classificationLabel; // ivar: _classificationLabel
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (nonatomic) BOOL isHighlighted; // ivar: _isHighlighted


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupFonts;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSoftHighlightState:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 highlighted:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif