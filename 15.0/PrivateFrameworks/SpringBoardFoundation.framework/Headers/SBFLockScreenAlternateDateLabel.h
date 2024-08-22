// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFLOCKSCREENALTERNATEDATELABEL_H
#define SBFLOCKSCREENALTERNATEDATELABEL_H

@class UIView, NSDate, NSString, UIFont, SBUILegibilityLabel, _UILegibilitySettings;
@protocol SBUILegibility;



@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility>



@property (readonly, nonatomic) UIEdgeInsets characterOverflowInsets;
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBUILegibilityLabel *label; // ivar: _label
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (readonly) Class superclass;


+(BOOL)showAlternateDate;
+(id)_lunarCalendarIdentifier;
-(id)_alternateDateString;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 font:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif