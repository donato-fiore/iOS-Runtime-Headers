// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _GEOTRANSITDEPARTURESEQUENCE_H
#define _GEOTRANSITDEPARTURESEQUENCE_H

@class NSSet, NSString, NSArray, NSTimeZone;
@protocol GEOTransitDepartureSequence, GEOTransitLine;

#import <Foundation/Foundation.h>

#import "GEOPDDepartureSequence.h"
#import "GEOPDStopInfo.h"
#import "GEOPDDepartureSequenceContainer.h"

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence>

 {
    GEOPDDepartureSequence *_sequence;
    id<GEOTransitLine> *_line;
    NSSet *_nextStopIDs;
    NSInteger _displayStyle;
    GEOPDStopInfo *_stopInfo;
    GEOPDDepartureSequenceContainer *_container;
}


@property (readonly, nonatomic) NSString *containerDisplayName;
@property (readonly, nonatomic) NSArray *containerLabelItems;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *departures;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *direction;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSInteger displayStyle;
@property (readonly, nonatomic) NSArray *frequencies;
@property (readonly, nonatomic) BOOL hasWalkingETA;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *headsign;
@property (readonly, nonatomic) BOOL isLowFrequency;
@property (readonly, nonatomic) NSObject<GEOTransitLine> *line;
@property (readonly, nonatomic) NSSet *nextStopIDs;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly, nonatomic) NSString *originName;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) NSUInteger transitId;
@property (readonly, nonatomic) NSUInteger walkingETA;


-(BOOL)areOperatingHours:(id)arg0 activeForDate:(id)arg1 ;
-(BOOL)hasFrequencyAtDate:(id)arg0 ;
-(BOOL)isDepartureDateInactive:(id)arg0 withReferenceDate:(id)arg1 ;
-(BOOL)isValidForDate:(id)arg0 inTimeZone:(id)arg1 ;
-(CGFloat)frequencyForSortingAtDate:(id)arg0 ;
-(NSUInteger)numberOfDeparturesAfterDate:(id)arg0 ;
-(NSUInteger)stopId;
-(id)departuresValidForDate:(id)arg0 ;
-(id)firstDepartureAfterDate:(id)arg0 ;
-(id)firstDepartureFrequencyOnOrAfterDate:(id)arg0 ;
-(id)firstDepartureOnOrAfterDate:(id)arg0 ;
-(id)firstDepartureValidForDate:(id)arg0 ;
-(id)firstOpenOperatingDateOnOrAfterDate:(id)arg0 ;
-(id)frequencyToDescribeAtDate:(id)arg0 ;
-(id)initWithSequence:(id)arg0 line:(id)arg1 pbLine:(id)arg2 stopInfo:(id)arg3 container:(id)arg4 ;
-(id)operatingHoursForDate:(id)arg0 inTimeZone:(id)arg1 ;
-(id)serviceResumesAfterDate:(id)arg0 ;
-(void)_enumerateDeparturesValidForDate:(id)arg0 withBlock:(id)arg1 ;


@end


#endif