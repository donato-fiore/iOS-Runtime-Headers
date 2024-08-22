// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWPREVIEWSTITCHERFENCEDANIMATIONINFO_H
#define BWPREVIEWSTITCHERFENCEDANIMATIONINFO_H



#import "BWFencedAnimationInfo.h"

@interface BWPreviewStitcherFencedAnimationInfo : BWFencedAnimationInfo

@property CGFloat primaryCaptureAspectRatio; // ivar: _primaryCaptureAspectRatio
@property CGFloat primaryCaptureRectCenterX; // ivar: _primaryCaptureRectCenterX
@property int primaryCaptureRectCenterXPixelOffset; // ivar: _primaryCaptureRectCenterXPixelOffset


+(id)fencedAnimationInfoWithAspectRatio:(CGFloat)arg0 centerX:(CGFloat)arg1 centerXPixelOffset:(int)arg2 fencePortSendRight:(id)arg3 ;
-(id)description;


@end


#endif