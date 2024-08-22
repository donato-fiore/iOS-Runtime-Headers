// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADPRESETSHADOWEFFECT_H
#define OADPRESETSHADOWEFFECT_H



#import "OADShadowEffect.h"

@interface OADPresetShadowEffect : OADShadowEffect {
    int mPresetShadowType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)equivalentOuterShadowEffect;
-(id)init;
-(int)presetShadowType;
-(void)setPresetShadowType:(int)arg0 ;


@end


#endif