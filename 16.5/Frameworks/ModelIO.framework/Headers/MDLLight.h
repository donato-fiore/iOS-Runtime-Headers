// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MDLLIGHT_H
#define MDLLIGHT_H

@class NSString;


#import "MDLObject.h"

@interface MDLLight : MDLObject {
    ? _light;
    NSString *_colorSpace;
    *CGColorSpace _cgColorSpace;
}


@property (copy, nonatomic) NSString *colorSpace;
@property (nonatomic) NSUInteger lightType; // ivar: _lightType


-(id)init;
-(id)position;
-(struct CGColor *)irradianceAtPoint;
-(struct CGColor *)irradianceAtPoint:(struct CGColorSpace *)arg0 colorSpace;
-(struct RTLight *)rtLight;
-(void)dealloc;
-(void)setTransform:(id)arg0 ;


@end


#endif