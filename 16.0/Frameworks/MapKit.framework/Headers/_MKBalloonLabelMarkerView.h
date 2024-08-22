// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MKBALLOONLABELMARKERVIEW_H
#define _MKBALLOONLABELMARKERVIEW_H

@class MKLabelMarkerView, UIView, UIColor, UIImage, UIBlurEffect, NSString;
@protocol _MKBalloonCalloutViewConfiguring;



@interface _MKBalloonLabelMarkerView : MKLabelMarkerView <_MKBalloonCalloutViewConfiguring>

 {
    UIView *_anchorDotView;
    BOOL _needsToResolveBalloonAttributes;
    NSInteger _balloonCalloutStyle;
    BOOL _balloonCalloutShouldOriginateFromSmallSize;
    UIColor *_balloonFillColor;
    UIColor *_balloonStrokeColor;
    UIImage *_balloonImage;
    UIView *_balloonContentView;
    CGFloat _smallBalloonScaleFactor;
}


@property (readonly, nonatomic, getter=_balloonCalloutShouldCenterWhenOffscreen) BOOL balloonCalloutShouldCenterWhenOffscreen;
@property (readonly, nonatomic, getter=_balloonCalloutShouldShowArrow) BOOL balloonCalloutShouldShowArrow;
@property (readonly, nonatomic, getter=_balloonCalloutStyle) NSInteger balloonCalloutStyle;
@property (readonly, nonatomic, getter=_balloonContentView) UIView *balloonContentView;
@property (readonly, nonatomic, getter=_balloonImage) UIImage *balloonImage;
@property (readonly, nonatomic, getter=_balloonImageTintColor) UIColor *balloonImageTintColor;
@property (readonly, nonatomic, getter=_balloonInnerStrokeColor) UIColor *balloonInnerStrokeColor;
@property (readonly, nonatomic, getter=_balloonMaterial) UIBlurEffect *balloonMaterial;
@property (readonly, nonatomic, getter=_balloonStrokeColor) UIColor *balloonStrokeColor;
@property (readonly, nonatomic, getter=_balloonTintColor) UIColor *balloonTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_balloonCalloutShouldOriginateFromSmallSize:(*CGFloat)arg0 ;
-(BOOL)shouldShowCallout;
-(BOOL)updateCalloutViewIfNeededAnimated:(BOOL)arg0 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addAnchorDotViewIfNeeded;
-(void)_configureBalloonForDataIconImageKeys:(id)arg0 scale:(CGFloat)arg1 ;
-(void)_resolveBalloonAttributesIfNecessary;
-(void)prepareForReuse;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif