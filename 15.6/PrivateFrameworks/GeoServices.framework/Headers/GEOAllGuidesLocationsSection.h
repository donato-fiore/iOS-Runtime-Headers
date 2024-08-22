// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOALLGUIDESLOCATIONSSECTION_H
#define GEOALLGUIDESLOCATIONSSECTION_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "GEOPDAllGuidesLocationsSection.h"
#import "GEOPDPlace.h"

@interface GEOAllGuidesLocationsSection : NSObject {
    GEOPDAllGuidesLocationsSection *_section;
    NSArray *_mapsResults;
    GEOPDPlace *_place;
    NSDictionary *_entriesDictionary;
}


@property (readonly, nonatomic) NSArray *guideLocationIdentifiers;
@property (readonly, nonatomic) NSArray *guideLocations;
@property (readonly, nonatomic) BOOL isWorldwideSection; // ivar: _isWorldwideSection
@property (readonly, nonatomic) NSDictionary *pdGuideLocationEntries;
@property (readonly, nonatomic) NSString *sectionTitle; // ivar: _sectionTitle


-(id)initWithAllGuidesLocationSection:(id)arg0 mapsResults:(id)arg1 ;
-(id)placeResultForSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif