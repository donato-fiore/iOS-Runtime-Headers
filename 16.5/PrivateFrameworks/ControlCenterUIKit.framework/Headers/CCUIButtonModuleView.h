// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIBUTTONMODULEVIEW_H
#define CCUIBUTTONMODULEVIEW_H

@class UIControl, UIView, UIImageView, MTVisualStylingProvider, NSString, UIColor, UIImage;
@protocol UIGestureRecognizerDelegate;


#import "CCUICAPackageView.h"
#import "CCUICAPackageDescription.h"

@interface CCUIButtonModuleView : UIControl <UIGestureRecognizerDelegate>

 {
    UIView *_highlightedBackgroundView;
    UIImageView *_glyphImageView;
    CCUICAPackageView *_glyphPackageView;
    MTVisualStylingProvider *_visualStylingProvider;
}


@property (nonatomic) NSDirectionalEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat glyphAlpha; // ivar: _glyphAlpha
@property (retain, nonatomic) UIColor *glyphColor; // ivar: _glyphColor
@property (retain, nonatomic) UIImage *glyphImage; // ivar: _glyphImage
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription; // ivar: _glyphPackageDescription
@property (nonatomic) CGFloat glyphScale; // ivar: _glyphScale
@property (copy, nonatomic) NSString *glyphState; // ivar: _glyphState
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *selectedGlyphColor; // ivar: _selectedGlyphColor
@property (retain, nonatomic) UIImage *selectedGlyphImage; // ivar: _selectedGlyphImage
@property (readonly) Class superclass;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)_tintColorForSelectedState:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_handlePressGesture:(id)arg0 ;
-(void)_updateForStateChange;
-(void)_updateGlyphImageViewVisualStyling;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif