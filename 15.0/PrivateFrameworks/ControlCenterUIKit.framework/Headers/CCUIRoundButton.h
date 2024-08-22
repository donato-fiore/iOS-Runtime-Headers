// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUIROUNDBUTTON_H
#define CCUIROUNDBUTTON_H

@class UIControl, MTVisualStylingProvider, UILongPressGestureRecognizer, UIView, NSString, UIImage, UIImageView, UIColor, NSArray;
@protocol UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MTVisualStylingRequiring;


#import "CCUICAPackageDescription.h"
#import "CCUICAPackageView.h"

@interface CCUIRoundButton : UIControl <UIGestureRecognizerDelegate, UIPointerInteractionDelegate, MTVisualStylingRequiring>

 {
    MTVisualStylingProvider *_visualStylingProvider;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    BOOL _isStateValid;
}


@property (retain, nonatomic) UIView *alternateSelectedStateBackgroundView; // ivar: _alternateSelectedStateBackgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDynamicLayoutEnabled) BOOL dynamicLayoutEnabled; // ivar: _dynamicLayoutEnabled
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (retain, nonatomic) UIImageView *glyphImageView; // ivar: _glyphImageView
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // ivar: _glyphPackageDescription
@property (retain, nonatomic) CCUICAPackageView *glyphPackageView; // ivar: _glyphPackageView
@property (copy, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *highlightColor; // ivar: _highlightColor
@property (copy, nonatomic) UIColor *highlightTintColor; // ivar: _highlightTintColor
@property (retain, nonatomic) UIView *normalStateBackgroundView; // ivar: _normalStateBackgroundView
@property (readonly, copy, nonatomic) NSArray *requiredVisualStyleCategories;
@property (retain, nonatomic) UIImageView *selectedGlyphView; // ivar: _selectedGlyphView
@property (retain, nonatomic) UIView *selectedStateBackgroundView; // ivar: _selectedStateBackgroundView
@property (readonly) Class superclass;
@property (nonatomic) BOOL useAlternateBackground; // ivar: _useAlternateBackground


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_cornerRadius;
-(id)_initWithHighlightColor:(id)arg0 useLightStyle:(BOOL)arg1 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 highlightTintColor:(id)arg2 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 highlightTintColor:(id)arg2 useLightStyle:(BOOL)arg3 ;
-(id)initWithGlyphImage:(id)arg0 highlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(id)initWithGlyphPackageDescription:(id)arg0 highlightColor:(id)arg1 ;
-(id)initWithGlyphPackageDescription:(id)arg0 highlightColor:(id)arg1 useLightStyle:(BOOL)arg2 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(id)visualStylingProviderForCategory:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_deactivateReachability:(id)arg0 ;
-(void)_primaryActionPerformed:(id)arg0 ;
-(void)_setCornerRadius:(CGFloat)arg0 ;
-(void)_setNeedsStateChangeUpdate;
-(void)_updateForStateChange;
-(void)_updateForStateChangeIfNecessary;
-(void)_updateVisualStylingOfView:(id)arg0 style:(NSInteger)arg1 visualStylingProvider:(id)arg2 outgoingProvider:(id)arg3 ;
-(void)_visualStylingProvider:(id)arg0 didChangeWithOutgoingVisualStylingProvider:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setVisualStylingProvider:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif