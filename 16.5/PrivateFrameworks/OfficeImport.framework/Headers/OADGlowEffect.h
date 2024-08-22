// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADGLOWEFFECT_H
#define OADGLOWEFFECT_H



#import "OADEffect.h"
#import "OADColor.h"

@interface OADGlowEffect : OADEffect {
    OADColor *mColor;
    float mRadius;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)radius;
-(id)color;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)setColor:(id)arg0 ;
-(void)setRadius:(float)arg0 ;


@end


#endif