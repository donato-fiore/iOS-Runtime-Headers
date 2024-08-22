// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMAGSAFEACCESSORYVIEW_H
#define CSMAGSAFEACCESSORYVIEW_H

@class _UILegibilitySettings;


#import "CSCoverSheetViewBase.h"
#import "CSMagSafeAccessoryConfiguration.h"

@interface CSMagSafeAccessoryView : CSCoverSheetViewBase

@property (readonly, nonatomic) CGFloat animationDurationBeforeDismissal;
@property (retain, nonatomic) CSMagSafeAccessoryConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings


-(BOOL)isReduceMotionEnabled;
-(BOOL)isReduceTransparencyEnabled;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)performAnimation:(NSUInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif