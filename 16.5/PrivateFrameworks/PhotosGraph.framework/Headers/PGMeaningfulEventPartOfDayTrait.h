// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMEANINGFULEVENTPARTOFDAYTRAIT_H
#define PGMEANINGFULEVENTPARTOFDAYTRAIT_H



#import "PGMeaningfulEventTrait.h"

@interface PGMeaningfulEventPartOfDayTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) NSUInteger forbiddenValue; // ivar: _forbiddenValue
@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isActive;
-(id)debugDescriptionWithMomentNode:(id)arg0 ;
-(id)initWithPartOfDay:(NSUInteger)arg0 ;
-(id)initWithPartOfDay:(NSUInteger)arg0 forbiddenPartOfDay:(NSUInteger)arg1 ;


@end


#endif