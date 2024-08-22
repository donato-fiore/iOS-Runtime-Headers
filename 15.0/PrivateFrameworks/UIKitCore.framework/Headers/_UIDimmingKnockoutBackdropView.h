// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDIMMINGKNOCKOUTBACKDROPVIEW_H
#define _UIDIMMINGKNOCKOUTBACKDROPVIEW_H

@class NSString;
@protocol UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying;


#import "UIView.h"
#import "UIVisualEffectView.h"

@interface _UIDimmingKnockoutBackdropView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>

 {
    UIView *dimmingKnockoutView;
    UIVisualEffectView *backdropView;
    CGFloat _alpha;
    CGFloat _currentCornerRadius;
}


@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;


-(id)_dimmingKnockoutBackgroundColorForBackdropStyle:(NSInteger)arg0 ;
-(id)_dimmingKnockoutFilterForBackdropStyle:(NSInteger)arg0 ;
-(id)_vibrancyEffectForStyle:(NSInteger)arg0 ;
-(id)_visualEffectForStyle:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)_configureViewsWithStyle:(NSInteger)arg0 ;
-(void)_setContinuousCornerRadius:(CGFloat)arg0 ;
-(void)_updateBackdropViewWithStyle:(NSInteger)arg0 alpha:(CGFloat)arg1 ;
-(void)_updateCornerRadius;
-(void)setAlpha:(CGFloat)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setPressed:(BOOL)arg0 ;
-(void)setRoundedCornerPosition:(NSUInteger)arg0 ;


@end


#endif