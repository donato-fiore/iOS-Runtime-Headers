// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGCURATIONPARTOFDAYTRAIT_H
#define PGCURATIONPARTOFDAYTRAIT_H



#import "PGCurationTrait.h"

@interface PGCurationPartOfDayTrait : PGCurationTrait

@property (readonly, nonatomic) NSUInteger value; // ivar: _value


-(BOOL)isActive;
-(id)debugDescription;
-(id)initWithPartOfDay:(NSUInteger)arg0 ;
-(id)niceDescription;


@end


#endif