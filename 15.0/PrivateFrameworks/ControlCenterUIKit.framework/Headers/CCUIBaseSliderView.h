// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCUIBASESLIDERVIEW_H
#define CCUIBASESLIDERVIEW_H

@class UIControl, UIImageView, MTVisualStylingProvider, NSString, UIImage, CALayer, NSArray;
@protocol CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider;


#import "CCUICAPackageView.h"
#import "CCUICAPackageDescription.h"

@interface CCUIBaseSliderView : UIControl <CCUIGroupRendering, CCUITouchContinuationProviding, CCUIContentModuleTopLevelGestureProvider>

 {
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    CCUICAPackageView *_compensatingGlyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
    BOOL _didConfigureGlyphPackageView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGPoint glyphCenter;
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // ivar: _glyphPackageDescription
@property (nonatomic) CGFloat glyphScale; // ivar: _glyphScale
@property (retain, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (nonatomic, getter=isGlyphVisible) BOOL glyphVisible; // ivar: _glyphVisible
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteractiveWhenUnexpanded) BOOL interactiveWhenUnexpanded; // ivar: _interactiveWhenUnexpanded
@property (readonly, nonatomic) CALayer *punchOutRootLayer;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *topLevelBlockingGestureRecognizers;
@property (nonatomic) float value; // ivar: _value


-(CGFloat)sliderHeightForValue:(float)arg0 ;
-(CGFloat)sliderLengthForValue:(float)arg0 ;
-(id)_newGlyphPackageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForTouchContinuation;
-(void)_configureCompensatingGlyphPackageView:(id)arg0 ;
-(void)_configureGlyphPackageView:(id)arg0 ;
-(void)_updateGlyphImageViewVisualStyling;
-(void)didMoveToWindow;
-(void)layoutSubviews;


@end


#endif