// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGBESTOFPASTMEMORYGENERATOR_H
#define PGBESTOFPASTMEMORYGENERATOR_H

@class NSDate;


#import "PGMemoryGenerator.h"

@interface PGBestOfPastMemoryGenerator : PGMemoryGenerator

@property (nonatomic) NSDate *localEndDate; // ivar: _localEndDate
@property (nonatomic) NSDate *localStartDate; // ivar: _localStartDate


-(id)_potentialMemoriesForDryTesting;
-(id)keyAssetCurationOptionsWithPotentialMemory:(id)arg0 inGraph:(id)arg1 ;
-(id)keyAssetCurationOptionsWithTriggeredMemory:(id)arg0 inGraph:(id)arg1 ;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;


@end


#endif