// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADREFLECTIONEFFECT_H
#define OADREFLECTIONEFFECT_H



#import "OADEffect.h"

@interface OADReflectionEffect : OADEffect {
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
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
-(float)blurRadius;
-(float)direction;
-(float)distance;
-(float)endOpacity;
-(float)endPosition;
-(float)fadeDirection;
-(float)startOpacity;
-(float)startPosition;
-(float)xScale;
-(float)xSkew;
-(float)yScale;
-(float)ySkew;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(int)alignment;
-(void)setAlignment:(int)arg0 ;
-(void)setBlurRadius:(float)arg0 ;
-(void)setDirection:(float)arg0 ;
-(void)setDistance:(float)arg0 ;
-(void)setEndOpacity:(float)arg0 ;
-(void)setEndPosition:(float)arg0 ;
-(void)setFadeDirection:(float)arg0 ;
-(void)setRotateWithShape:(BOOL)arg0 ;
-(void)setStartOpacity:(float)arg0 ;
-(void)setStartPosition:(float)arg0 ;
-(void)setStyleColor:(id)arg0 ;
-(void)setXScale:(float)arg0 ;
-(void)setXSkew:(float)arg0 ;
-(void)setYScale:(float)arg0 ;
-(void)setYSkew:(float)arg0 ;


@end


#endif