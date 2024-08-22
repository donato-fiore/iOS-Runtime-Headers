// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKSOLARRICHCOMPLICATIONCIRCULARVIEWCOLORPOINT_H
#define NTKSOLARRICHCOMPLICATIONCIRCULARVIEWCOLORPOINT_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface NTKSolarRichComplicationCircularViewColorPoint : NSObject

@property (readonly, nonatomic) UIColor *color1; // ivar: _color1
@property (readonly, nonatomic) UIColor *color2; // ivar: _color2
@property (readonly, nonatomic) UIColor *color3; // ivar: _color3
@property (readonly, nonatomic) CGFloat position1; // ivar: _position1
@property (readonly, nonatomic) CGFloat position2; // ivar: _position2
@property (readonly, nonatomic) CGFloat position3; // ivar: _position3
@property (readonly, nonatomic) CGFloat progress; // ivar: _progress


+(id)allPoints;
+(id)pointWithColor1:(id)arg0 color2:(id)arg1 color3:(id)arg2 position1:(CGFloat)arg3 position2:(CGFloat)arg4 position3:(CGFloat)arg5 progress:(CGFloat)arg6 ;


@end


#endif