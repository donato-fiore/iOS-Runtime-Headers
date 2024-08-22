// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKSYSTEMARC4RANDOMSOURCE_H
#define GKSYSTEMARC4RANDOMSOURCE_H



#import "GKRandomSource.h"

@interface GKSystemArc4RandomSource : GKRandomSource



-(NSInteger)nextInt;
-(NSUInteger)nextIntWithUpperBound:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif