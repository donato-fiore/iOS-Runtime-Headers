// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIFOCUSABLECOLLECTIONVIEWCELL_H
#define VUIFOCUSABLECOLLECTIONVIEWCELL_H

@class UICollectionViewCell;



@interface VUIFocusableCollectionViewCell : UICollectionViewCell

@property (nonatomic) BOOL allowsFocus; // ivar: _allowsFocus


-(BOOL)canBecomeFocused;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBackgroundAndHighlightColor;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif