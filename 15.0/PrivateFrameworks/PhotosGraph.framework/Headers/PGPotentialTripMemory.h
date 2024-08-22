// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALTRIPMEMORY_H
#define PGPOTENTIALTRIPMEMORY_H

@class NSString;


#import "PGPotentialMemory.h"

@interface PGPotentialTripMemory : PGPotentialMemory

@property (retain, nonatomic) NSString *tripNodeUUID; // ivar: _tripNodeUUID


-(NSUInteger)memoryCategory;
-(id)initWithSubcategory:(NSUInteger)arg0 momentNodes:(id)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif