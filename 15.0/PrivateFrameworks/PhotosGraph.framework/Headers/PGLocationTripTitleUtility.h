// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGLOCATIONTRIPTITLEUTILITY_H
#define PGLOCATIONTRIPTITLEUTILITY_H

@class NSSet, NSString, NSArray;

#import <Foundation/Foundation.h>

#import "PGGraphLocationHelper.h"
#import "PGIncompleteLocationResolver.h"

@interface PGLocationTripTitleUtility : NSObject {
    PGGraphLocationHelper *_locationHelper;
}


@property (nonatomic) BOOL allowLongAOI; // ivar: _allowLongAOI
@property (nonatomic) BOOL filterMomentsAndCities; // ivar: _filterMomentsAndCities
@property (retain, nonatomic) NSSet *filteredLocationNodes; // ivar: _filteredLocationNodes
@property (retain, nonatomic) PGIncompleteLocationResolver *incompleteLocationResolver; // ivar: _incompleteLocationResolver
@property (retain, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger tripTitleLocationType; // ivar: _tripTitleLocationType
@property (readonly, nonatomic) NSUInteger tripTitleType; // ivar: _tripTitleType
@property (retain, nonatomic) NSSet *usedLocationNodes; // ivar: _usedLocationNodes
@property (retain, nonatomic) NSArray *usedTitleComponents; // ivar: _usedTitleComponents


+(BOOL)_visitedLocationNodeMoreThanOnce:(id)arg0 withReferenceMomentNodes:(id)arg1 ;
+(id)_filteredCityNodesByNameForCityNodes:(id)arg0 ;
+(void)_aoiTitleWithLocationNodes:(id)arg0 momentNodes:(id)arg1 allowLongAOI:(BOOL)arg2 graph:(id)arg3 result:(id)arg4 ;
+(void)_cityStateAndCountryNodesForLocationNodes:(id)arg0 result:(id)arg1 ;
-(id)_bestAddressNodeForCityNodes:(id)arg0 inMomentNodes:(id)arg1 ;
-(id)_cityNodesFromMomentNodes:(id)arg0 ;
-(id)_locationTitleWithLocationNode:(id)arg0 addressNode:(id)arg1 countryNode:(id)arg2 allowSecondPart:(BOOL)arg3 ;
-(id)initWithMomentNodes:(id)arg0 filterMomentsAndCities:(BOOL)arg1 allowLongAOI:(BOOL)arg2 locationHelper:(id)arg3 ;
-(id)initWithMomentNodes:(id)arg0 filterMomentsAndCities:(BOOL)arg1 locationHelper:(id)arg2 ;
-(void)_cityTitleWithCityNode:(id)arg0 countryNode:(id)arg1 visitedCountryOnlyOnce:(BOOL)arg2 momentNodes:(id)arg3 result:(id)arg4 ;
-(void)_generateLocationTitle;
-(void)_generateTitleForMomentNodes:(id)arg0 resolvedMomentNodes:(id)arg1 resolvedLocations:(id)arg2 ;
-(void)_resolveMomentNodes:(id)arg0 withResult:(id)arg1 ;


@end


#endif