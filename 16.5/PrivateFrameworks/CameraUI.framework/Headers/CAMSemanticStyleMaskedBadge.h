// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMSEMANTICSTYLEMASKEDBADGE_H
#define CAMSEMANTICSTYLEMASKEDBADGE_H

@class UIView, NSTimer, NSString, CEKBadgeTextView;


#import "CAMSemanticStyle.h"

@interface CAMSemanticStyleMaskedBadge : UIView

@property (retain, nonatomic) NSTimer *_badgeUpdateLockoutTimer; // ivar: __badgeUpdateLockoutTimer
@property (retain, nonatomic) NSString *_cachedText; // ivar: __cachedText
@property (nonatomic) CGFloat badgeLeftInset; // ivar: _badgeLeftInset
@property (readonly, nonatomic) CEKBadgeTextView *badgeView; // ivar: _badgeView
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) CAMSemanticStyle *semanticStyle; // ivar: _semanticStyle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_handleBadgeUpdateLockoutTimerFired:(id)arg0 ;
-(void)_requestTextUpdateDelayIfNeeded:(BOOL)arg0 ;
-(void)layoutSubviews;


@end


#endif