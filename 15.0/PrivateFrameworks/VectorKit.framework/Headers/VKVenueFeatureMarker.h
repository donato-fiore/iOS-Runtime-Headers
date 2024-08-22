// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKVENUEFEATUREMARKER_H
#define VKVENUEFEATUREMARKER_H

@class NSArray, GEOMapItemIdentifier;


#import "VKMarker.h"

@interface VKVenueFeatureMarker : VKMarker {
    BOOL _localize;
}


@property (readonly, nonatomic) NSArray *buildings;
@property (readonly, nonatomic) NSUInteger businessID;
@property (readonly, nonatomic) GEOMapItemIdentifier *mapIdentifier;


-(*void)venueFeatureMarker;
-(id)initWithVenue:(*void)arg0 localize:(BOOL)arg1 ;
-(id)name;
-(id)shortName;


@end


#endif