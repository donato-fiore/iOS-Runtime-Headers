// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMVISIONCOLORMARKER_H
#define AXMVISIONCOLORMARKER_H

@class NSString;


#import "AXMVisionColor.h"

@interface AXMVisionColorMarker : AXMVisionColor

@property (retain, nonatomic) NSString *localizedName; // ivar: _localizedName


+(id)allColorMarkers;
+(id)closestMarkerToColor:(id)arg0 withMaximumThreshold:(CGFloat)arg1 ;
+(id)colorWithHueDegrees:(CGFloat)arg0 saturation:(CGFloat)arg1 brightness:(CGFloat)arg2 localizedName:(id)arg3 ;
-(id)description;


@end


#endif