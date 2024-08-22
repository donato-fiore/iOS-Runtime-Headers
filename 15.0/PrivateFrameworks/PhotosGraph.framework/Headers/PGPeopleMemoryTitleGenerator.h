// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPEOPLEMEMORYTITLEGENERATOR_H
#define PGPEOPLEMEMORYTITLEGENERATOR_H

@class NSString, NSSet;


#import "PGTitleGenerator.h"
#import "PGTimeTitleOptions.h"

@interface PGPeopleMemoryTitleGenerator : PGTitleGenerator {
    NSString *_seasonName;
}


@property (readonly, nonatomic) NSSet *personNodes; // ivar: _personNodes
@property (readonly, nonatomic) PGTimeTitleOptions *timeTitleOptions; // ivar: _timeTitleOptions
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)peopleOverTimeTimeTitleOptionsWithMomentNodes:(id)arg0 ;
-(BOOL)_person:(id)arg0 isPresentInAnyMomentOfMomentNodes:(id)arg1 ;
-(BOOL)_useSplitTimeTitlesIfNeeded;
-(id)_birthdayTitleForPeople;
-(id)_timeTitleForEarlyMoments;
-(id)_timeTitleForPeople;
-(id)_titleForChildAndPerson;
-(id)_titleForEarlyMoments;
-(id)_titleForPeople;
-(id)_titleForSocialGroup;
-(id)initWithMomentNodes:(id)arg0 personNodes:(id)arg1 seasonName:(id)arg2 type:(NSUInteger)arg3 titleGenerationContext:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 personNodes:(id)arg1 timeTitleOptions:(id)arg2 type:(NSUInteger)arg3 titleGenerationContext:(id)arg4 ;
-(id)initWithMomentNodes:(id)arg0 personNodes:(id)arg1 type:(NSUInteger)arg2 titleGenerationContext:(id)arg3 ;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif