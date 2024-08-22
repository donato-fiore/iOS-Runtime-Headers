// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPFEATURERUNNINGTRACK_H
#define GEOMAPFEATURERUNNINGTRACK_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "GEOMapRegion.h"

@interface GEOMapFeatureRunningTrack : NSObject

@property (readonly, nonatomic) GEOMapRegion *boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) NSUInteger features; // ivar: _features
@property (readonly, nonatomic) NSArray *lanes; // ivar: _lanes
@property (readonly, nonatomic) GEOMapRegion *orientedBoundingRegion; // ivar: _orientedBoundingRegion
@property (readonly, nonatomic) unsigned char reliabilityScore;
@property (readonly, nonatomic) NSUInteger trackId; // ivar: _trackId
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(id)description;
-(id)initWithVMP4Track:(*void)arg0 boundingBox:(id)arg1 ;


@end


#endif