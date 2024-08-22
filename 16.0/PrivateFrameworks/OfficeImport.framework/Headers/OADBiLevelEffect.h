// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADBILEVELEFFECT_H
#define OADBILEVELEFFECT_H



#import "OADBlipEffect.h"

@interface OADBiLevelEffect : OADBlipEffect {
    float mThreshold;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)threshold;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)setThreshold:(float)arg0 ;


@end


#endif