// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LPVIDEOVIEWSTYLE_H
#define LPVIDEOVIEWSTYLE_H

@class UIColor, CAMediaTimingFunction;

#import <Foundation/Foundation.h>

#import "LPImageViewStyle.h"
#import "LPPadding.h"
#import "LPVideoPlayButtonStyle.h"

@interface LPVideoViewStyle : NSObject

@property (readonly, nonatomic) LPImageViewStyle *muteButton; // ivar: _muteButton
@property (nonatomic) CGFloat muteButtonHighlightedOpacity; // ivar: _muteButtonHighlightedOpacity
@property (nonatomic) CGFloat muteButtonOpacity; // ivar: _muteButtonOpacity
@property (readonly, retain, nonatomic) LPPadding *muteButtonPadding; // ivar: _muteButtonPadding
@property (readonly, nonatomic) LPVideoPlayButtonStyle *playButton; // ivar: _playButton
@property (retain, nonatomic) UIColor *pulsingLoadIndicatorColor; // ivar: _pulsingLoadIndicatorColor
@property (nonatomic) CGFloat pulsingLoadIndicatorDuration; // ivar: _pulsingLoadIndicatorDuration
@property (nonatomic) CGFloat pulsingLoadIndicatorMaximumOpacity; // ivar: _pulsingLoadIndicatorMaximumOpacity
@property (retain, nonatomic) CAMediaTimingFunction *pulsingLoadIndicatorTimingFunction; // ivar: _pulsingLoadIndicatorTimingFunction


-(id)initWithPlatform:(NSInteger)arg0 ;


@end


#endif