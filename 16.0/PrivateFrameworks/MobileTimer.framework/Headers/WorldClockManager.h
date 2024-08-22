// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WORLDCLOCKMANAGER_H
#define WORLDCLOCKMANAGER_H

@class NSArray, NSDate;

#import <Foundation/Foundation.h>

#import "WorldClockPreferences.h"

@interface WorldClockManager : NSObject {
    BOOL _dirty;
    WorldClockPreferences *_defaults;
}


@property (readonly, nonatomic) NSArray *cities; // ivar: _cities
@property (retain, nonatomic) NSDate *lastModified; // ivar: lastModified


+(id)sharedManager;
+(id)sharedManagerWithPreferences:(id)arg0 ;
-(BOOL)canAddCity;
-(BOOL)checkIfCitiesModified;
-(NSUInteger)addCity:(id)arg0 ;
-(id)allCities;
-(id)citiesMatchingIdentifiers:(id)arg0 ;
-(id)citiesMatchingName:(id)arg0 ;
-(id)cityWithIdUrl:(id)arg0 ;
-(id)fixUpCityProperties:(id)arg0 ;
-(id)initWithPreferences:(id)arg0 ;
-(id)updateALDataWithCity:(id)arg0 ;
-(id)updatedTimezoneForCityWithID:(id)arg0 ;
-(id)worldClockCityFromPersistenceArray:(id)arg0 ;
-(id)worldClockCityFromPersistenceDictionary:(id)arg0 ;
-(id)worldClockCityFromPersistenceRepresentation:(id)arg0 ;
-(void)_notifyNano;
-(void)addDefaultCitiesIfNeeded;
-(void)loadCities;
-(void)moveCityFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(void)pushCityPropertiesToPreferences;
-(void)removeAllCities;
-(void)removeCity:(id)arg0 ;
-(void)removeCityAtIndex:(NSUInteger)arg0 ;
-(void)saveCities;


@end


#endif