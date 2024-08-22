// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUTILITYFLATCOMPLICATIONVIEW_H
#define NTKUTILITYFLATCOMPLICATIONVIEW_H

@class UIImageView, NSString, UIView<NTKComplicationImageView>;
@protocol CLKMonochromeFilterProvider, CLKMonochromeComplicationView, NTKUtilityFlatComplicationViewDelegate;


#import "NTKUtilityComplicationView.h"
#import "NTKCurvedColoringLabel.h"
#import "NTKColoringLabel.h"

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>

 {
    NTKCurvedColoringLabel *_curvedLabel;
    UIImageView *_curvedHighlightView;
    NTKColoringLabel *_activeLabel;
}


@property (nonatomic) CGFloat circleRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NTKUtilityFlatComplicationViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<CLKMonochromeFilterProvider> *filterProvider; // ivar: _filterProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView<NTKComplicationImageView> *imageView; // ivar: _imageView
@property (retain, nonatomic) NTKColoringLabel *label; // ivar: _label
@property (nonatomic) CGFloat maxAngularWidth;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textWidthInRadians; // ivar: _textWidthInRadians


+(BOOL)handlesComplicationTemplate:(id)arg0 ;
+(void)circleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 interior:(*BOOL)arg3 forPlacement:(NSUInteger)arg4 forDevice:(id)arg5 ;
-(BOOL)_shouldLayoutWithImageView;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)_widthThatFits;
-(NSUInteger)imagePlacement;
-(id)_backgroundPlatterImage;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )boundingSizeOfCurrentComplicationTemplate;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_enumerateColoringStackedImagesViewsWithBlock:(id)arg0 ;
-(void)_enumerateColoringViewsWithBlock:(id)arg0 ;
-(void)_updateContentForMaxSizeChange;
-(void)_updateForTemplateChange;
-(void)_updateHighlightViewCornerRadius;
-(void)_updateLabelMaxWidth;
-(void)layoutSubviews;
-(void)setCanUseCurvedText:(BOOL)arg0 ;
-(void)setForegroundColor:(id)arg0 ;
-(void)setPlacement:(NSUInteger)arg0 ;
-(void)setShouldUseBackgroundPlatter:(BOOL)arg0 ;
-(void)setUseBlockyHighlightCorners:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;
-(void)updateTextWidthIfNeeded;


@end


#endif