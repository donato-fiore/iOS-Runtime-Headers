// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADSHADOWEFFECT_H
#define OADSHADOWEFFECT_H



#import "OADEffect.h"
#import "OADColor.h"

@interface OADShadowEffect : OADEffect {
    OADColor *mColor;
    float mBlurRadius;
    float mDistance;
    float mAngle;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)angle;
-(float)blurRadius;
-(float)distance;
-(id)color;
-(id)description;
-(id)initWithShadowEffect:(id)arg0 type:(int)arg1 ;
-(id)initWithType:(int)arg0 ;
-(void)setAngle:(float)arg0 ;
-(void)setBlurRadius:(float)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setDistance:(float)arg0 ;
-(void)setStyleColor:(id)arg0 ;


@end


#endif