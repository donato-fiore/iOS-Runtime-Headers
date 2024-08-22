// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKSTATICSIRIANIMATIONVIEW_H
#define NTKSTATICSIRIANIMATIONVIEW_H

@class UIView, CLKDevice, UIImageView, UIColor, NSString, UIFontDescriptor, CLKImageProvider;
@protocol CLKFullColorImageView, CDComplicationImageView, CLKMonochromeFilterProvider;



@interface NTKStaticSiriAnimationView : UIView <CLKFullColorImageView, CDComplicationImageView>

 {
    CLKDevice *_device;
    UIImageView *_imageView;
    CGSize _complicationSize;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider;
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 forDevice:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif