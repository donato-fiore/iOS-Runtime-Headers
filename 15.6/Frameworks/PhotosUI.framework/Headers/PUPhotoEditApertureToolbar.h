// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITAPERTURETOOLBAR_H
#define PUPHOTOEDITAPERTURETOOLBAR_H

@class UIViewController, UIView, _UIBackdropView, NSMutableArray, PFCoalescer, NSString, UILabel, CEKApertureSlider;
@protocol PUPhotoEditLayoutDynamicAdaptable, PUPhotoEditApertureToolbarDelegate;



@interface PUPhotoEditApertureToolbar : UIViewController <PUPhotoEditLayoutDynamicAdaptable>

 {
    UIView *_solidBackgroundView;
    _UIBackdropView *_backdropBackgroundView;
    BOOL _isResizing;
    CGSize _cachedSize;
    NSMutableArray *_constraints;
    PFCoalescer *_apertureUpdateCoalescer;
}


@property (readonly, nonatomic) CGFloat apertureValue;
@property (copy, nonatomic) NSString *backdropViewGroupName; // ivar: _backdropViewGroupName
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUPhotoEditApertureToolbarDelegate> *delegate; // ivar: delegate
@property (retain, nonatomic) UILabel *depthEffectLabel; // ivar: _depthEffectLabel
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutOrientation; // ivar: _layoutOrientation
@property (nonatomic) CGFloat maximumApertureValue;
@property (nonatomic) CGFloat minimumApertureValue;
@property (readonly, nonatomic) CGFloat originalApertureValue;
@property (readonly, nonatomic) UIEdgeInsets preferredPreviewViewInsets;
@property (retain, nonatomic) CEKApertureSlider *slider; // ivar: _slider
@property (nonatomic) CGFloat sliderWidth; // ivar: _sliderWidth
@property (readonly) Class superclass;
@property (nonatomic) BOOL useTranslucentBackground; // ivar: _useTranslucentBackground
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(id)_nextApertureValueFromValue:(id)arg0 reverse:(BOOL)arg1 ;
-(id)init;
-(void)_apertureSliderDidChangeValue:(id)arg0 ;
-(void)_updateBackgroundAnimated:(BOOL)arg0 ;
-(void)loadView;
-(void)setNextApertureValue:(BOOL)arg0 coarse:(BOOL)arg1 ;
-(void)updateViewConstraints;
-(void)viewDidLayoutSubviews;


@end


#endif