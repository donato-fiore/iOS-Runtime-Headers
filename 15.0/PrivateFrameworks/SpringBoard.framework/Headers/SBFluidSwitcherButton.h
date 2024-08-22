// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLUIDSWITCHERBUTTON_H
#define SBFLUIDSWITCHERBUTTON_H

@class UIControl, UIView, UIImageView, NSString, UIImage;
@protocol UIPointerInteractionDelegate;



@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate>

 {
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
}


@property (retain, nonatomic) NSString *backdropGroupName; // ivar: _backdropGroupName
@property (nonatomic) NSInteger buttonStyle; // ivar: _buttonStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) UIEdgeInsets extendedEdgeInsets; // ivar: _extendedEdgeInsets
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly) Class superclass;


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_backgroundMaterialView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_addHighlightViewIfNecessary;
-(void)_configureBackgroundViewIfNecessaryForStyle:(NSInteger)arg0 ;
-(void)_configureGlyphImageViewIfNecessaryForStyle:(NSInteger)arg0 ;
-(void)_configureXPlusDViewIfNecessaryForStyle:(NSInteger)arg0 ;
-(void)_invalidateBackgroundView;
-(void)_invalidateXPlusDView;
-(void)didMoveToSuperview;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;


@end


#endif