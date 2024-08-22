// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCOMPOSEDGUIDANCEEVENT_H
#define GEOCOMPOSEDGUIDANCEEVENT_H

@class NSMutableArray, NSArray, NSString, NSData, NSUUID;
@protocol NSSecureCoding, GEOServerFormattedString, GEOTransitArtworkDataSource;

#import <Foundation/Foundation.h>

#import "GEOGuidanceEvent.h"
#import "GEOJunctionView.h"
#import "GEOJunction.h"
#import "GEONameInfo.h"

@interface GEOComposedGuidanceEvent : NSObject <NSSecureCoding>

 {
    NSUInteger _creationOrder;
    GEOGuidanceEvent *_guidanceEvent;
    NSMutableArray *_lanes;
}


@property (readonly, nonatomic) NSArray *announcements;
@property (readonly, nonatomic) NSString *arArrowLabel;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *arInstruction;
@property (readonly, nonatomic) int arType;
@property (readonly, nonatomic) NSObject<GEOTransitArtworkDataSource> *artworkOverride; // ivar: _artworkOverride
@property (readonly, nonatomic) int composedGuidanceEventType;
@property (readonly, nonatomic) ? coordinateForDistanceStrings; // ivar: _coordinateForDistanceStrings
@property (readonly, nonatomic) CGFloat distance; // ivar: _distance
@property (readonly, nonatomic) CGFloat distanceForStrings; // ivar: _distanceForStrings
@property (readonly, nonatomic) int drivingSide; // ivar: _drivingSide
@property (readonly, nonatomic) CGFloat endValidDistance; // ivar: _endValidDistance
@property (readonly, nonatomic) ? endValidRouteCoordinate; // ivar: _endValidRouteCoordinate
@property (nonatomic) NSUInteger enrouteNoticeIndex; // ivar: _enrouteNoticeIndex
@property (readonly, nonatomic) NSString *exclusiveSetIdentifier;
@property (readonly, nonatomic) NSArray *gapRanges;
@property (readonly, nonatomic) BOOL hasArGuidance;
@property (readonly, nonatomic) BOOL hasHaptics;
@property (readonly, nonatomic) BOOL hasJunctionView;
@property (readonly, nonatomic) BOOL hasSignGuidance;
@property (readonly, nonatomic) BOOL hasSpokenGuidance;
@property (readonly, nonatomic) BOOL isImportant;
@property (readonly, nonatomic) BOOL isLaneGuidanceForManeuver;
@property (readonly, nonatomic) BOOL isSticky;
@property (readonly, nonatomic) GEOJunctionView *junctionView;
@property (readonly, nonatomic) NSArray *laneInstructions;
@property (readonly, nonatomic) NSArray *laneTitles;
@property (readonly, nonatomic) NSArray *lanes;
@property (readonly, nonatomic) NSUInteger legIndex; // ivar: _legIndex
@property (readonly, nonatomic) GEOJunction *maneuverJunction; // ivar: _maneuverJunction
@property (readonly, nonatomic) int maneuverType; // ivar: _maneuverType
@property (readonly, nonatomic) NSUInteger numChainedAnnouncements;
@property (readonly, nonatomic) CGFloat repetitionInterval;
@property (readonly, nonatomic) NSString *roadName; // ivar: _roadName
@property (readonly, nonatomic) NSData *serverRouteID; // ivar: _serverRouteID
@property (readonly, nonatomic) GEONameInfo *shieldInfo;
@property (readonly, nonatomic) NSArray *signDetails;
@property (readonly, nonatomic) NSArray *signTitles;
@property (nonatomic) NSUInteger source; // ivar: _source
@property (nonatomic) NSUInteger sourceIndex; // ivar: _sourceIndex
@property (readonly, nonatomic) NSUInteger stackRanking;
@property (readonly, nonatomic) CGFloat startValidDistance; // ivar: _startValidDistance
@property (readonly, nonatomic) ? startValidRouteCoordinate; // ivar: _startValidRouteCoordinate
@property (readonly, nonatomic) unsigned int stepID; // ivar: _stepID
@property (readonly, nonatomic) NSUInteger stepIndex; // ivar: _stepIndex
@property (readonly, nonatomic) int transportType; // ivar: _transportType
@property (readonly, nonatomic) NSUUID *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidForSpeed:(CGFloat)arg0 ;
-(CGFloat)desiredTimeGapToEvent:(id)arg0 chained:(BOOL)arg1 ;
-(CGFloat)endDistanceForSpeed:(CGFloat)arg0 ;
-(CGFloat)startDistanceForSpeed:(CGFloat)arg0 ;
-(CGFloat)triggerDistanceForSpeed:(CGFloat)arg0 andDuration:(id)arg1 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compareFactoringInSpeed:(id)arg0 speed:(CGFloat)arg1 ;
-(NSInteger)comparePriority:(id)arg0 ;
-(NSUInteger)_junctionViewIDForData:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGeoGuidanceEvent:(id)arg0 step:(id)arg1 legIndex:(NSUInteger)arg2 coordinates:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif