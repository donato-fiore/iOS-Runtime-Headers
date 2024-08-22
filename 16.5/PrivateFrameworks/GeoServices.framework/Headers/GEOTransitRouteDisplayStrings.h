// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOTRANSITROUTEDISPLAYSTRINGS_H
#define GEOTRANSITROUTEDISPLAYSTRINGS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol GEOComposedRouteTransitDisplayStrings, NSCopying, GEOServerFormattedString;


#import "GEOFormattedString.h"

@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_durationList;
    GEOFormattedString *_duration;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSMutableArray *advisorys;
@property (retain, nonatomic) GEOFormattedString *badge;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) GEOFormattedString *duration;
@property (retain, nonatomic) GEOFormattedString *durationList;
@property (readonly, nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasDurationList;
@property (readonly, nonatomic) BOOL hasPlanningDescription;
@property (readonly, nonatomic) BOOL hasTravelDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *pickingDurationFormatString;
@property (retain, nonatomic) GEOFormattedString *planningDescription;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *planningDescriptionFormatString;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *previewDurationFormatString;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *transitDescriptionFormatString;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *transitRouteBadge;
@property (retain, nonatomic) GEOFormattedString *travelDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)advisoryType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)advisoryAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)addAdvisory:(id)arg0 ;
-(void)clearAdvisorys;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif