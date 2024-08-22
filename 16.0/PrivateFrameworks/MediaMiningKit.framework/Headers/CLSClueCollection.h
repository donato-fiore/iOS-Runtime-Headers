// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCLUECOLLECTION_H
#define CLSCLUECOLLECTION_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "CLSMeaningClue.h"
#import "CLSInputPeopleClue.h"

@interface CLSClueCollection : NSObject {
    os_unfair_recursive_lock_s _recursiveLock;
    NSMapTable *_inputCluesByKey;
    NSMapTable *_outputCluesByKey;
    NSMapTable *_meaningCluesByKey;
}


@property (readonly) CLSMeaningClue *locationMobilityClue;
@property (retain, nonatomic) CLSInputPeopleClue *mePersonClue; // ivar: _mePersonClue
@property (readonly) NSUInteger versionCount; // ivar: _versionCount


-(BOOL)hasMeaningClueWithKey:(id)arg0 andValue:(id)arg1 ;
-(BOOL)hasMeaningClueWithKey:(id)arg0 value:(id)arg1 andMinimumScore:(CGFloat)arg2 ;
-(BOOL)hasOutputClueWithKey:(id)arg0 andValue:(id)arg1 ;
-(BOOL)hasOutputClueWithKey:(id)arg0 value:(id)arg1 andMinimumScore:(CGFloat)arg2 ;
-(CGFloat)timeInterval;
-(NSInteger)year;
-(NSUInteger)numberOfDays;
-(NSUInteger)numberOfLocations;
-(NSUInteger)numberOfPersons;
-(NSUInteger)numberOfTimes;
-(id)description;
-(id)init;
-(id)inputClues;
-(id)inputCluesForKey:(id)arg0 ;
-(id)localDates;
-(id)localEndDate;
-(id)localStartDate;
-(id)locationPlacemarks;
-(id)locationRegions;
-(id)locationRegionsInPlacemarks;
-(id)locations;
-(id)mePerson;
-(id)meaningClues;
-(id)meaningCluesForKey:(id)arg0 ;
-(id)meaningCluesForKey:(id)arg0 andValue:(id)arg1 ;
-(id)outputClueRelatedEventsForKey:(id)arg0 value:(id)arg1 andMinimumScore:(CGFloat)arg2 ;
-(id)outputClueRelatedPeopleForKey:(id)arg0 value:(id)arg1 andMinimumScore:(CGFloat)arg2 ;
-(id)outputClueRelatedPlacesForKey:(id)arg0 value:(id)arg1 andMinimumScore:(CGFloat)arg2 ;
-(id)outputClues;
-(id)outputCluesForKey:(id)arg0 ;
-(id)outputCluesForKey:(id)arg0 andValue:(id)arg1 ;
-(id)peopleDescription;
-(id)peopleDescriptionWithoutPeople:(id)arg0 ;
-(id)peopleNames;
-(id)uniqueInputClues;
-(id)uniqueMeaningClueForKey:(id)arg0 andValue:(id)arg1 ;
-(id)uniqueMeaningClues;
-(id)uniqueMeaningCluesForKey:(id)arg0 ;
-(id)uniqueOutputClueForKey:(id)arg0 andValue:(id)arg1 ;
-(id)uniqueOutputClues;
-(id)uniqueOutputCluesForKey:(id)arg0 ;
-(id)universalDateInterval;
-(id)universalDates;
-(id)universalEndDate;
-(id)universalStartDate;
-(void)_incrementVersionCount;
-(void)_mergeInputClue:(id)arg0 ;
-(void)_mergeMeaningClue:(id)arg0 ;
-(void)_mergeOutputClue:(id)arg0 ;
-(void)enumerateLocationClues:(id)arg0 ;
-(void)enumeratePeopleClues:(id)arg0 ;
-(void)enumerateTimeClues:(id)arg0 ;
-(void)enumerateTimeOfDayClues:(id)arg0 ;
-(void)mergeClues:(id)arg0 ;
-(void)prepareWithProgressBlock:(id)arg0 ;


@end


#endif