// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MEDIACONTROLSVOLUMESLIDERVIEW_H
#define MEDIACONTROLSVOLUMESLIDERVIEW_H

@class CCUIContinuousSliderView, UIView, UIImageSymbolConfiguration;



@interface MediaControlsVolumeSliderView : CCUIContinuousSliderView {
    UIView *_materialView;
}


@property (retain, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration; // ivar: _imageSymbolConfiguration


-(id)createBackgroundView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)setContinuousSliderCornerRadius:(CGFloat)arg0 ;
-(void)setGlyphImage:(id)arg0 packageDescription:(id)arg1 state:(id)arg2 animated:(BOOL)arg3 ;
-(void)setGlyphPackageDescription:(id)arg0 state:(id)arg1 animated:(BOOL)arg2 ;
-(void)setOutputDeviceAsset:(id)arg0 state:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif