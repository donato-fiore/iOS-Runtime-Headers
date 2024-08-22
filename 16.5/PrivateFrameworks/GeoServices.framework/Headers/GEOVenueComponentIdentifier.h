// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOVENUECOMPONENTIDENTIFIER_H
#define GEOVENUECOMPONENTIDENTIFIER_H

@class NSString, NSArray;
@protocol GEOVenueComponentIdentifier, GEOVenueFloorInfo;

#import <Foundation/Foundation.h>


@interface GEOVenueComponentIdentifier : NSObject <GEOVenueComponentIdentifier>



@property (readonly, nonatomic) NSUInteger buildingID; // ivar: _buildingID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger fixtureID; // ivar: _fixtureID
@property (readonly, nonatomic) NSObject<GEOVenueFloorInfo> *floorInfo; // ivar: _floorInfo
@property (readonly, nonatomic, getter=_hasBuildingID) BOOL hasBuildingID; // ivar: _hasBuildingID
@property (readonly, nonatomic, getter=_hasFixtureID) BOOL hasFixtureID; // ivar: _hasFixtureID
@property (readonly, nonatomic, getter=_hasUnitID) BOOL hasUnitID; // ivar: _hasUnitID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *sectionIDs; // ivar: _sectionIDs
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unitID; // ivar: _unitID


-(id)init;
-(id)initWithBuildingID:(NSUInteger)arg0 ;
-(id)initWithBuildingID:(NSUInteger)arg0 floorInfo:(id)arg1 ;
-(id)initWithBuildingID:(NSUInteger)arg0 floorInfo:(id)arg1 fixtureID:(NSUInteger)arg2 ;
-(id)initWithBuildingID:(NSUInteger)arg0 floorInfo:(id)arg1 unitID:(NSUInteger)arg2 ;
-(id)initWithVenueIdentifier:(id)arg0 ;


@end


#endif