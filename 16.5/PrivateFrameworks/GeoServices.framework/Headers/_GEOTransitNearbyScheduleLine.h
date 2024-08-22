// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOTRANSITNEARBYSCHEDULELINE_H
#define _GEOTRANSITNEARBYSCHEDULELINE_H

@class NSArray, NSString;
@protocol GEOTransitNearbyScheduleCell;

#import <Foundation/Foundation.h>

#import "GEOPDDepartureSequenceContainer.h"

@interface _GEOTransitNearbyScheduleLine : NSObject <GEOTransitNearbyScheduleCell>

 {
    GEOPDDepartureSequenceContainer *_departureSequenceContainer;
}


@property (readonly, nonatomic) NSArray *artworks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *departureSequences; // ivar: _departureSequences
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isSignificant;
@property (readonly) Class superclass;


-(id)initWithDepartureSequenceContainer:(id)arg0 departureSequences:(id)arg1 ;


@end


#endif