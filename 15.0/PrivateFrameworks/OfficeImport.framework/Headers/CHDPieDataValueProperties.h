// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHDPIEDATAVALUEPROPERTIES_H
#define CHDPIEDATAVALUEPROPERTIES_H



#import "CHDDataValueProperties.h"

@interface CHDPieDataValueProperties : CHDDataValueProperties {
    int mExplosion;
    BOOL mIsExplosionSet;
}




-(BOOL)isExplosionSet;
-(id)init;
-(id)shallowCopyWithIndex:(NSUInteger)arg0 ;
-(int)explosion;
-(void)setExplosion:(int)arg0 ;


@end


#endif