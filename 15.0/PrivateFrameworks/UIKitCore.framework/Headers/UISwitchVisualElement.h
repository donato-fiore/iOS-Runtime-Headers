// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISWITCHVISUALELEMENT_H
#define UISWITCHVISUALELEMENT_H

@class NSString;
@protocol UISwitchControl;


#import "UIView.h"
#import "UIImpactFeedbackGenerator.h"

@interface UISwitchVisualElement : UIView

@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (nonatomic) CGFloat enabledAlpha; // ivar: _enabledAlpha
@property (retain, nonatomic) UIImpactFeedbackGenerator *impactFeedbackGenerator; // ivar: _impactFeedbackGenerator
@property (weak, nonatomic) NSObject<UISwitchControl> *switchControl; // ivar: _switchControl
@property (copy) NSString *title; // ivar: _title


+(BOOL)isFixedSize;
+(struct CGSize )preferredContentSize;
+(struct UIEdgeInsets )preferredAlignmentRectInsets;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )preferredContentSize;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)setOffImage:(id)arg0 ;
-(void)setOn:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setOnImage:(id)arg0 ;
-(void)setOnTintColor:(id)arg0 ;
-(void)setShowsOnOffLabel:(BOOL)arg0 ;
-(void)setThumbTintColor:(id)arg0 ;
-(void)setTintColor:(id)arg0 ;
-(void)tintColorDidChange;


@end


#endif