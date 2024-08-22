// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILPIGMENTCOLORSLIDERCELL_H
#define NTKCFACEDETAILPIGMENTCOLORSLIDERCELL_H

@protocol NTKColorSliderDelegate, NTKCFaceDetailPigmentColorSliderCellDelegate;


#import "NTKCFaceDetailRowActionCell.h"
#import "NTKColorSlider.h"

@interface NTKCFaceDetailPigmentColorSliderCell : NTKCFaceDetailRowActionCell <NTKColorSliderDelegate>

 {
    NTKColorSlider *_slider;
}


@property (weak, nonatomic) NSObject<NTKCFaceDetailPigmentColorSliderCellDelegate> *delegate; // ivar: _delegate


+(id)reuseIdentifier;
-(CGFloat)rowHeight;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)colorSlider:(id)arg0 valueChanged:(CGFloat)arg1 phase:(NSInteger)arg2 ;
-(void)layoutSubviews;
-(void)setColorFraction:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setColors:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif