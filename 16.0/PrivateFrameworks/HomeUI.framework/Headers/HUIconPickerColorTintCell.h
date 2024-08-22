// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUICONPICKERCOLORTINTCELL_H
#define HUICONPICKERCOLORTINTCELL_H

@class UICollectionViewCell, UIColor;


#import "HUColorSwatchView.h"

@interface HUIconPickerColorTintCell : UICollectionViewCell

@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) HUColorSwatchView *colorSwatchView; // ivar: _colorSwatchView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif