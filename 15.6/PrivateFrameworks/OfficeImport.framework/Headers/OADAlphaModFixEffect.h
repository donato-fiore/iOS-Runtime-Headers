// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OADALPHAMODFIXEFFECT_H
#define OADALPHAMODFIXEFFECT_H



#import "OADBlipEffect.h"

@interface OADAlphaModFixEffect : OADBlipEffect {
    float mAlpha;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)alpha;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)setAlpha:(float)arg0 ;


@end


#endif