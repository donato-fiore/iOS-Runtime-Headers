// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOMAPSSEARCHHOMESECTION_H
#define GEOMAPSSEARCHHOMESECTION_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "GEOCollectionSuggestionResult.h"
#import "GEOGuideLocationSuggestionResults.h"
#import "GEOPublisherSuggestionResult.h"

@interface GEOMapsSearchHomeSection : NSObject

@property (readonly, nonatomic) GEOCollectionSuggestionResult *collectionSuggestions; // ivar: _collectionSuggestions
@property (readonly, nonatomic) GEOGuideLocationSuggestionResults *guideLocationSuggestsions; // ivar: _guideLocationSuggestsions
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) GEOPublisherSuggestionResult *publisherSuggestions; // ivar: _publisherSuggestions
@property (readonly, nonatomic) NSArray *searchCategories; // ivar: _searchCategories
@property (readonly, nonatomic) NSUInteger sectionType; // ivar: _sectionType


-(BOOL)dataModelIsValid:(id)arg0 ;
-(id)description;
-(id)initWithMapsSearchHomeSection:(id)arg0 mapsResults:(id)arg1 ;


@end


#endif