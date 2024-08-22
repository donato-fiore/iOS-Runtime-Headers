// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADLINEARSHADE_H
#define OADLINEARSHADE_H



#import "OADShade.h"

@interface OADLinearShade : OADShade {
    float mAngle;
    BOOL mIsAngleOverridden;
    BOOL mScaled;
    BOOL mIsScaledOverridden;
}




+(id)defaultProperties;
-(BOOL)isAngleOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isScaledOverridden;
-(BOOL)scaled;
-(NSUInteger)hash;
-(float)angle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setAngle:(float)arg0 ;
-(void)setScaled:(BOOL)arg0 ;


@end


#endif