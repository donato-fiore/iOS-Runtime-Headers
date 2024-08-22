// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETPHOTOSONEUPPROPERTIES_H
#define PHASSETPHOTOSONEUPPROPERTIES_H

@class NSString, NSData;


#import "PHAssetPropertySet.h"

@interface PHAssetPhotosOneUpProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSString *addressString;
@property (readonly, nonatomic) NSData *reverseLocationData; // ivar: _reverseLocationData
@property (readonly, nonatomic) BOOL reverseLocationDataIsValid; // ivar: _reverseLocationDataIsValid
@property (readonly, nonatomic) BOOL shiftedLocationIsValid; // ivar: _shiftedLocationIsValid
@property (readonly, nonatomic) NSUInteger variationSuggestionStates; // ivar: _variationSuggestionStates


+(id)propertiesToFetch;
+(id)propertySetName;
-(id)_locationInfo;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;
-(id)localizedGeoDescriptionIsHome:(*BOOL)arg0 ;
-(id)placeNamesForLocalizedDetailedDescriptionIsHome:(*BOOL)arg0 ;


@end


#endif