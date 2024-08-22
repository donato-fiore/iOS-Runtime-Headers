// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUILISTCOLLECTIONVIEWCELL_H
#define VUILISTCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIColor;



@interface VUIListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIColor *highlightedBackgroundColor; // ivar: _highlightedBackgroundColor
@property (nonatomic) BOOL shouldAppearSelected; // ivar: _shouldAppearSelected


-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif