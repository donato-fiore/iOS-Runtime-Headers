// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUILEGIBILITYVIEW_H
#define SBUILEGIBILITYVIEW_H

@class UILegibilityView, NSString, _UILegibilitySettings, UIImage;
@protocol SBUILegibility;



@interface SBUILegibilityView : UILegibilityView <SBUILegibility>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets hitTestEdgeInsets; // ivar: _hitTestEdgeInsets
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength;
@property (readonly) Class superclass;
@property (retain, nonatomic) UIImage *tintImage; // ivar: _tintImage
@property (nonatomic) NSInteger tintStyle; // ivar: _tintStyle


-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)_tintColorForSettings:(id)arg0 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 image:(id)arg2 tintStyle:(NSInteger)arg3 ;
-(void)setSettings:(id)arg0 image:(id)arg1 shadowImage:(id)arg2 ;
-(void)updateForChangedSettings:(id)arg0 ;


@end


#endif