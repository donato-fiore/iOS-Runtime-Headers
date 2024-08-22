// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOINSTRUCTIONSET_H
#define GEOINSTRUCTIONSET_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol GEOComposedRouteStepTransitInstructionMerging, NSCopying, GEOServerFormattedString;


#import "GEOFormattedString.h"
#import "GEODrivingWalkingInstruction.h"
#import "GEODrivingWalkingSpokenInstruction.h"
#import "GEOGenericInstruction.h"
#import "GEOTransitListInstruction.h"
#import "GEOTransitSignInstruction.h"

@interface GEOInstructionSet : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEODrivingWalkingInstruction *_drivingWalkingListInstruction;
    GEODrivingWalkingInstruction *_drivingWalkingSignInstruction;
    GEODrivingWalkingSpokenInstruction *_drivingWalkingSpokenInstruction;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _departureBarStyle;
    ? _flags;
}


@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *countStopsFormattedString;
@property (retain, nonatomic) GEOFormattedString *countStopsText;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GEOFormattedString *departureBar;
@property (readonly, nonatomic) NSInteger departureBarFormatStyle;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *departureBarFormattedString;
@property (nonatomic) int departureBarStyle;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingListInstruction;
@property (retain, nonatomic) GEODrivingWalkingInstruction *drivingWalkingSignInstruction;
@property (retain, nonatomic) GEODrivingWalkingSpokenInstruction *drivingWalkingSpokenInstruction;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *expandableListFormattedString;
@property (retain, nonatomic) GEOGenericInstruction *genericInstruction;
@property (readonly, nonatomic) BOOL hasCountStopsText;
@property (readonly, nonatomic) BOOL hasDepartureBar;
@property (nonatomic) BOOL hasDepartureBarStyle;
@property (readonly, nonatomic) BOOL hasDrivingWalkingListInstruction;
@property (readonly, nonatomic) BOOL hasDrivingWalkingSignInstruction;
@property (readonly, nonatomic) BOOL hasDrivingWalkingSpokenInstruction;
@property (readonly, nonatomic) BOOL hasGenericInstruction;
@property (readonly, nonatomic) BOOL hasTransitListInstruction;
@property (readonly, nonatomic) BOOL hasTransitSignInstruction;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideTimeInstructionsIfCollapsed;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *primaryTimeFormattedString;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *secondaryTimeFormattedString;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOTransitListInstruction *transitListInstruction;
@property (retain, nonatomic) GEOTransitSignInstruction *transitSignInstruction;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)_transit_hasAnyFieldSet;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)departureBarStyleAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(int)StringAsDepartureBarStyle:(id)arg0 ;
-(void)_transit_mergeFrom:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif