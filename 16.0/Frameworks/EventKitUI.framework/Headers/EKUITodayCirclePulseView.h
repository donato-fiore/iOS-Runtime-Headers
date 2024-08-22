// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUITODAYCIRCLEPULSEVIEW_H
#define EKUITODAYCIRCLEPULSEVIEW_H

@class UIView, UILabel, NSDictionary, NSString, UIFont;
@protocol _UIBasicAnimationFactory;


#import "TodayCirclePulseBackground.h"

@interface EKUITodayCirclePulseView : UIView <_UIBasicAnimationFactory>

 {
    UIView *_backgroundContainer;
    TodayCirclePulseBackground *_background;
    UILabel *_label;
    UILabel *_overlayLabel;
    NSDictionary *_attributes;
    NSDictionary *_overlayAttributes;
}


@property (retain, nonatomic) NSDictionary *attributes;
@property (nonatomic) CGFloat circleDiameter; // ivar: _circleDiameter
@property (nonatomic) BOOL circleShouldFillFrame; // ivar: _circleShouldFillFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dontApplyCenteringOffset; // ivar: _dontApplyCenteringOffset
@property (retain, nonatomic) UIFont *font;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *overlayAttributes;
@property (retain, nonatomic) UIFont *overlayFont;
@property (copy, nonatomic) NSString *overlayString;
@property (nonatomic) CGFloat roundedRectCornerRadius;
@property (copy, nonatomic) NSString *string;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat textFrameWidthAdjustment; // ivar: _textFrameWidthAdjustment
@property (nonatomic) CGPoint textOffsetFromCircle; // ivar: _textOffsetFromCircle
@property (nonatomic) CGFloat textYOffset; // ivar: _textYOffset
@property (nonatomic) BOOL usesRoundedRectInsteadOfCircle;
@property (nonatomic) BOOL usesTextYOffsetWithoutAdjustmentForOverlay; // ivar: _usesTextYOffsetWithoutAdjustmentForOverlay


-(id)_basicAnimationForView:(id)arg0 withKeyPath:(id)arg1 ;
-(id)_overlayLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutSubviews;
-(void)_updateLabelAttributedString;
-(void)_updateOverlayLabelAttributedString;
-(void)pulse:(id)arg0 ;


@end


#endif