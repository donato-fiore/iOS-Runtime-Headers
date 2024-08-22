// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMLIBRARYSELECTIONSIGNALRESULT_H
#define CAMLIBRARYSELECTIONSIGNALRESULT_H

@class CLLocation, NSArray, NSNumber;

#import <Foundation/Foundation.h>


@interface CAMLibrarySelectionSignalResult : NSObject

@property (readonly, nonatomic) BOOL cameraHasAccessToLocation;
@property (retain, nonatomic) CLLocation *currentLocation; // ivar: _currentLocation
@property (readonly, nonatomic) NSArray *frequentAndHomeLocations; // ivar: _frequentAndHomeLocations
@property (readonly, nonatomic) NSArray *homeLocations; // ivar: _homeLocations
@property (retain, nonatomic) NSArray *identitiesInProximity; // ivar: _identitiesInProximity
@property (readonly, nonatomic) BOOL isOnTrip;
@property (readonly, nonatomic) int locationAuthorizationStatus; // ivar: _locationAuthorizationStatus
@property (readonly, nonatomic) BOOL suggestsSharing;
@property (retain, nonatomic) NSNumber *suggestsSharingValue; // ivar: _suggestsSharingValue


+(BOOL)currentLocation:(id)arg0 isContainedInCircularRegions:(id)arg1 ;
+(CGFloat)distanceBetweenLocation:(id)arg0 andCircularRegion:(id)arg1 atDate:(id)arg2 ;
+(id)librarySelectionSignalResultWithIdentitiesInProximity:(id)arg0 currentLocation:(id)arg1 locationAuthorizationStatus:(int)arg2 homeLocations:(id)arg3 frequentLocations:(id)arg4 ;
-(id)_diagnosticsForRegions:(id)arg0 ;
-(id)description;
-(id)frequentLocationRegionContainingLocation:(id)arg0 ;
-(id)initWithIdentitiesInProximity:(id)arg0 currentLocation:(id)arg1 locationAuthorizationStatus:(int)arg2 homeLocations:(id)arg3 frequentLocations:(id)arg4 ;
-(id)resultDiagnostics;


@end


#endif