// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMDSYSTEMARC4RANDOMSOURCE_H
#define RMDSYSTEMARC4RANDOMSOURCE_H



#import "RMDRandomSource.h"

@interface RMDSystemArc4RandomSource : RMDRandomSource



-(NSInteger)nextInt;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif