// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPOTENTIALSEASONMEMORY_H
#define PGPOTENTIALSEASONMEMORY_H



#import "PGPotentialMemory.h"

@interface PGPotentialSeasonMemory : PGPotentialMemory

@property (nonatomic) NSInteger year; // ivar: _year


-(NSUInteger)memoryCategory;
-(id)initWithCategory:(NSUInteger)arg0 momentNodes:(id)arg1 ;
-(id)memoryFeatureNodesInGraph:(id)arg0 ;


@end


#endif