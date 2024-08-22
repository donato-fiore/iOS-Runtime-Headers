// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARUIRING_H
#define ARUIRING_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ARUICelebration.h"

@interface ARUIRing : NSObject <NSCopying>

 {
    ? _translation;
    ? _topColorVector;
    ? _topColorPremultipliedVector;
    ? _bottomColorVector;
    ? _bottomColorPremultipliedVector;
}


@property (retain, nonatomic) UIColor *bottomColor; // ivar: _bottomColor
@property ? bottomColorPremultipliedVector;
@property ? bottomColorVector;
@property (retain, nonatomic) ARUICelebration *celebration; // ivar: _celebration
@property (nonatomic) float diameter; // ivar: _diameter
@property (nonatomic) float emptyOpacity; // ivar: _emptyOpacity
@property (nonatomic) float opacity; // ivar: _opacity
@property (nonatomic) float percentage; // ivar: _percentage
@property (nonatomic) float scale; // ivar: _scale
@property (nonatomic) float thickness; // ivar: _thickness
@property (retain, nonatomic) UIColor *topColor; // ivar: _topColor
@property ? topColorPremultipliedVector;
@property ? topColorVector;
@property (nonatomic) float trackOpacity; // ivar: _trackOpacity
@property ? translation;
@property (nonatomic) float zRotation; // ivar: _zRotation


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRing:(id)arg0 ;


@end


#endif