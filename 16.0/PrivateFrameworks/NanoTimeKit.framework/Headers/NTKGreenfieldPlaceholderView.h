// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKGREENFIELDPLACEHOLDERVIEW_H
#define NTKGREENFIELDPLACEHOLDERVIEW_H

@class UIView, UIImageView, UIColor, NSString, UIFontDescriptor, CLKImageProvider;
@protocol CLKFullColorImageView, CDComplicationImageView, CLKMonochromeFilterProvider;


#import "_NTKPieChartView.h"

@interface NTKGreenfieldPlaceholderView : UIView <CLKFullColorImageView, CDComplicationImageView>

 {
    UIImageView *_iconView;
    _NTKPieChartView *_uncompletedPieChartView;
}


@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) UIColor *contentColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (copy, nonatomic) UIFontDescriptor *fontDescriptor;
@property (nonatomic) CGFloat fontSizeFactor;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CLKImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) UIColor *overrideColor; // ivar: _overrideColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesLegibility; // ivar: _usesLegibility


-(BOOL)_shouldAnimateWithTemplateUpdateReason:(NSInteger)arg0 ;
-(id)initFullColorImageViewWithDevice:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithImageProvider:(id)arg0 reason:(NSInteger)arg1 ;
-(void)layoutSubviews;
-(void)pauseLiveFullColorImageView;
-(void)resumeLiveFullColorImageView;
-(void)setAppIcon:(id)arg0 ;
-(void)setProgress:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;


@end


#endif