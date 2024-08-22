// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CFXEFFECTPICKERCOLLECTIONVIEWCELL_H
#define CFXEFFECTPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString;


#import "CFXEffect.h"
#import "JTImage.h"
#import "JFXImageView.h"

@interface CFXEffectPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CFXEffect *effect; // ivar: _effect
@property (retain, nonatomic) NSString *effectIdentifier; // ivar: _effectIdentifier
@property (retain, nonatomic) JTImage *image;
@property (retain, nonatomic) JFXImageView *imageView; // ivar: _imageView


-(BOOL)isAccessibilityElement;
-(NSUInteger)accessibilityTraits;
-(id)accessibilityLabel;
-(void)awakeFromNib;
-(void)configureCellAppearence;
-(void)prepareForReuse;


@end


#endif