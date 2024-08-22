// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKSTATICSIRIANIMATIONVIEW_H
#define NTKSTATICSIRIANIMATIONVIEW_H

@class UIView, CLKDevice, UIImageView, UIColor, NSString, CLKImageProvider;
@protocol NTKComplicationImageView;



@interface NTKStaticSiriAnimationView : UIView <NTKComplicationImageView>

 {
    CLKDevice *_device;
    UIImageView *_imageView;
    CGSize _complicationSize;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif