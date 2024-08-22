// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCURATIONCONTENTORAESTHETICSCORETRAIT_H
#define PGCURATIONCONTENTORAESTHETICSCORETRAIT_H



#import "PGCurationTrait.h"

@interface PGCurationContentOrAestheticScoreTrait : PGCurationTrait

@property (nonatomic) CGFloat minimumAestheticScore; // ivar: _minimumAestheticScore


-(BOOL)isActive;
-(id)initWithMinimumContentScore:(CGFloat)arg0 minimumAestheticScore:(CGFloat)arg1 ;


@end


#endif