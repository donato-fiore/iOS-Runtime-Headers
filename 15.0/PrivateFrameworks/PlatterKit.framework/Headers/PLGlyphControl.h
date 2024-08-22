// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLGLYPHCONTROL_H
#define PLGLYPHCONTROL_H

@class UIControl, MTVisualStylingProvider, MTMaterialView, NSString, UIImage, UIImageView, NSArray;
@protocol MTMaterialGrouping, MTVisualStylingRequiring;



@interface PLGlyphControl : UIControl <MTMaterialGrouping, MTVisualStylingRequiring>

 {
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView;
@property (retain, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // ivar: _backgroundMaterialView
@property (nonatomic, getter=isBlurEnabled) BOOL blurEnabled; // ivar: _blurEnabled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) UIImage *glyph;
@property (readonly, nonatomic, getter=_glyphView) UIImageView *glyphView;
@property (retain, nonatomic, getter=_glyphView) UIImageView *glyphView; // ivar: _glyphView
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (readonly, nonatomic) NSInteger materialRecipe; // ivar: _materialRecipe
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger visualStyle; // ivar: _visualStyle


+(id)dismissControlWithMaterialRecipe:(NSInteger)arg0 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_cornerRadius;
-(id)initWithMaterialRecipe:(NSInteger)arg0 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_configureBackgroundMaterialViewIfNecessary;
-(void)_configureGlyphViewIfNecessaryWithImage:(id)arg0 ;
-(void)_configureMaterialViewIfNecessary:(*id)arg0 positioningAtIndex:(NSUInteger)arg1 ;
-(void)_handleTouchUpInsideWithEvent:(id)arg0 ;
-(void)_removeAllVisualStyling;
-(void)_removeVisualStylingOfView:(id)arg0 ;
-(void)_sendActionsForEvents:(NSUInteger)arg0 withEvent:(id)arg1 ;
-(void)_updateAllVisualStyling;
-(void)_updateGlyphViewVisualStyling;
-(void)_updateVisualStylingOfView:(id)arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif