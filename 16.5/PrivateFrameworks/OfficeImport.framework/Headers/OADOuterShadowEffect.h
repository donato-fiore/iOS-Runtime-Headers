// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADOUTERSHADOWEFFECT_H
#define OADOUTERSHADOWEFFECT_H



#import "OADShadowEffect.h"

@interface OADOuterShadowEffect : OADShadowEffect {
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)rotateWithShape;
-(NSUInteger)hash;
-(float)xScale;
-(float)xSkew;
-(float)yScale;
-(float)ySkew;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(int)alignment;
-(void)setAlignment:(int)arg0 ;
-(void)setRotateWithShape:(BOOL)arg0 ;
-(void)setXScale:(float)arg0 ;
-(void)setXSkew:(float)arg0 ;
-(void)setYScale:(float)arg0 ;
-(void)setYSkew:(float)arg0 ;


@end


#endif