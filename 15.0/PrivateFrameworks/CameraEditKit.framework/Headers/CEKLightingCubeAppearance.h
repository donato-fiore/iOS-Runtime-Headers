// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEKLIGHTINGCUBEAPPEARANCE_H
#define CEKLIGHTINGCUBEAPPEARANCE_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface CEKLightingCubeAppearance : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) *CGGradient background; // ivar: _background
@property (readonly, nonatomic) *CGColor bottomFill; // ivar: _bottomFill
@property (readonly, nonatomic) *CGGradient bottomInnerGlow; // ivar: _bottomInnerGlow
@property (readonly, nonatomic) *CGGradient bottomMask; // ivar: _bottomMask
@property (readonly, nonatomic) *CGGradient bottomOuterGlow; // ivar: _bottomOuterGlow
@property (readonly, nonatomic) *CGColor stroke; // ivar: _stroke
@property (readonly, nonatomic) *CGColor topFill; // ivar: _topFill
@property (readonly, nonatomic) *CGGradient topGlow; // ivar: _topGlow
@property (readonly, nonatomic) *CGGradient topMask; // ivar: _topMask
@property (readonly, nonatomic) *CGGradient topOver; // ivar: _topOver
@property (readonly, nonatomic) CGFloat verticalFillBackIntensity; // ivar: _verticalFillBackIntensity
@property (readonly, nonatomic) *CGColor verticalFillColor; // ivar: _verticalFillColor
@property (readonly, nonatomic) CGFloat verticalFillFrontIntensity; // ivar: _verticalFillFrontIntensity


+(id)appearanceFrom:(id)arg0 to:(id)arg1 progress:(CGFloat)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStroke:(struct CGColor *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif