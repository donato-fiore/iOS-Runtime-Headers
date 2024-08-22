// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMTHUMBNAILCELL_H
#define ICDOCCAMTHUMBNAILCELL_H

@class UICollectionViewCell, UIImageView;



@interface ICDocCamThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView


-(BOOL)isAccessibilityElement;
-(id)accessibilityHint;
-(id)accessibilityLabel;
-(id)indexStringForAccessibility;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)parentCollectionView;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;


@end


#endif