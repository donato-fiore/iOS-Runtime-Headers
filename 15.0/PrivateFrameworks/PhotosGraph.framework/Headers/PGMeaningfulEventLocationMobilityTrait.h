// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMEANINGFULEVENTLOCATIONMOBILITYTRAIT_H
#define PGMEANINGFULEVENTLOCATIONMOBILITYTRAIT_H



#import "PGMeaningfulEventTrait.h"

@interface PGMeaningfulEventLocationMobilityTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isActive;
-(id)debugDescriptionWithMomentNode:(id)arg0 ;
-(id)initWithMobility:(NSUInteger)arg0 ;


@end


#endif