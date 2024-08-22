// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGLOCATIONTITLEOPTIONS_H
#define PGLOCATIONTITLEOPTIONS_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "PGGraphAddressNode.h"

@interface PGLocationTitleOptions : NSObject

@property (nonatomic) BOOL allowFamilyHome; // ivar: _allowFamilyHome
@property (nonatomic) NSUInteger aoiDisplayType; // ivar: _aoiDisplayType
@property (retain, nonatomic) NSSet *curationAddressNodes; // ivar: _curationAddressNodes
@property (nonatomic) NSUInteger filterSignificantLocationsType; // ivar: _filterSignificantLocationsType
@property (retain, nonatomic) PGGraphAddressNode *keyAssetAddressNode; // ivar: _keyAssetAddressNode
@property (nonatomic) NSUInteger lineBreakBehavior; // ivar: _lineBreakBehavior
@property (retain, nonatomic) NSSet *momentNodes; // ivar: _momentNodes
@property (nonatomic) NSUInteger peopleDisplayType; // ivar: _peopleDisplayType
@property (nonatomic) BOOL showAllCities; // ivar: _showAllCities
@property (nonatomic) BOOL useBusinessItems; // ivar: _useBusinessItems
@property (nonatomic) BOOL useCities; // ivar: _useCities
@property (nonatomic) BOOL useDistrict; // ivar: _useDistrict
@property (nonatomic) BOOL useTripTitleForLongDuration; // ivar: _useTripTitleForLongDuration


+(id)onlyPeopleLocationTitleOptions;
-(id)init;


@end


#endif