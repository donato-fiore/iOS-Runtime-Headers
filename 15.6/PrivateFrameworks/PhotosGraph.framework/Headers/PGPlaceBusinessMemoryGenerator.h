// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGPLACEBUSINESSMEMORYGENERATOR_H
#define PGPLACEBUSINESSMEMORYGENERATOR_H

@class NSString;


#import "PGFeaturedMemoryGenerator.h"

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator

@property (nonatomic) NSString *business; // ivar: _business
@property (nonatomic) NSInteger year; // ivar: _year


-(id)_potentialMemoriesForDryTesting;
-(void)_enumeratePotentialMemoriesWithGraph:(id)arg0 usingBlock:(id)arg1 ;
-(void)_postProcessMemory:(id)arg0 withPotentialMemory:(id)arg1 andGraph:(id)arg2 ;
-(void)_potentialMemoriesWithBusinessNode:(id)arg0 inYear:(NSInteger)arg1 result:(id)arg2 ;


@end


#endif