// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUCONTINUOUSSLIDERVIEW_H
#define MRUCONTINUOUSSLIDERVIEW_H

@class CCUIContinuousSliderView, UIImageSymbolConfiguration, UIView;


#import "MRUOutputDeviceAsset.h"

@interface MRUContinuousSliderView : CCUIContinuousSliderView

@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration
@property (readonly, nonatomic) UIView *materialView; // ivar: _materialView
@property (readonly, nonatomic) MRUOutputDeviceAsset *outputDeviceAsset; // ivar: _outputDeviceAsset


-(id)createBackgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setContinuousSliderCornerRadius:(CGFloat)arg0 ;


@end


#endif