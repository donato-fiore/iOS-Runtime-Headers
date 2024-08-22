// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADLUMINANCEEFFECT_H
#define OADLUMINANCEEFFECT_H



#import "OADBlipEffect.h"

@interface OADLuminanceEffect : OADBlipEffect {
    float mBrightness;
    float mContrast;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)brightness;
-(float)contrast;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)setBrightness:(float)arg0 ;
-(void)setContrast:(float)arg0 ;


@end


#endif