// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NTKPIGMENTADDCELL_H
#define _NTKPIGMENTADDCELL_H

@class UICollectionViewCell, UIImageView, CLKDevice, UIColor;


#import "NTKPigmentEditOption.h"

@interface _NTKPigmentAddCell : UICollectionViewCell

@property (readonly, nonatomic) UIImageView *check; // ivar: _check
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (retain, nonatomic) NTKPigmentEditOption *pigmentEditOption; // ivar: _pigmentEditOption
@property (retain, nonatomic) UIColor *primaryColor; // ivar: _primaryColor
@property (readonly, nonatomic) UIImageView *swatch; // ivar: _swatch


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateCheck;
-(void)layoutSubviews;
-(void)setImage:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif