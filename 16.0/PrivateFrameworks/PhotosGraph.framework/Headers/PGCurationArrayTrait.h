// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGCURATIONARRAYTRAIT_H
#define PGCURATIONARRAYTRAIT_H

@class NSArray;


#import "PGCurationTrait.h"

@interface PGCurationArrayTrait : PGCurationTrait

@property (readonly, nonatomic) NSArray *items; // ivar: _items
@property (readonly, nonatomic) NSArray *negativeItems; // ivar: _negativeItems


-(BOOL)isActive;
-(id)debugDescription;
-(id)initWithItems:(id)arg0 ;
-(id)initWithItems:(id)arg0 negativeItems:(id)arg1 ;


@end


#endif