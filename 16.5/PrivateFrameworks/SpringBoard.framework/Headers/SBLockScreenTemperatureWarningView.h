// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBLOCKSCREENTEMPERATUREWARNINGVIEW_H
#define SBLOCKSCREENTEMPERATUREWARNINGVIEW_H

@class UIImageView;


#import "SBLockOverlayView.h"

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView {
    UIImageView *_warningIconView;
}




-(BOOL)_statusBarOrientationIsPortrait;
-(CGFloat)_iconYPosition;
-(CGFloat)_subtitleBaseline;
-(CGFloat)_titleBaseline;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif