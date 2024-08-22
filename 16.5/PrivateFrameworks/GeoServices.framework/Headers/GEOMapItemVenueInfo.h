// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMVENUEINFO_H
#define GEOMAPITEMVENUEINFO_H

@class NSString, NSArray;
@protocol GEOMapItemVenueInfo, GEOMapItemVenueContents, GEOVenueIdentifier;

#import <Foundation/Foundation.h>

#import "GEOMapItemParentVenue.h"

@interface GEOMapItemVenueInfo : NSObject <GEOMapItemVenueInfo>



@property (readonly, nonatomic) NSObject<GEOMapItemVenueContents> *contents; // ivar: _contents
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) GEOMapItemParentVenue *parent; // ivar: _parent
@property (readonly) Class superclass;
@property (readonly, nonatomic) int venueFeatureType; // ivar: _venueFeatureType
@property (readonly, nonatomic) NSObject<GEOVenueIdentifier> *venueIdentifier; // ivar: _venueIdentifier


-(id)_filtersFromVenueInfo:(id)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 featureType:(int)arg1 filters:(id)arg2 parent:(id)arg3 contents:(id)arg4 ;
-(id)initWithVenueInfo:(id)arg0 ;


@end


#endif