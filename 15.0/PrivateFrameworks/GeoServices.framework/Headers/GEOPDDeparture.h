// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOPDDEPARTURE_H
#define GEOPDDEPARTURE_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString, NSDate;
@protocol GEOTransitDeparture, NSCopying, GEOServerFormattedString;


#import "GEOFormattedString.h"

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CGFloat _absDepartureTime;
    CGFloat _absLiveDepartureTime;
    NSString *_displayNameOverride;
    GEOFormattedString *_realTimeStatus;
    NSUInteger _referenceTripId;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _realTimeStatusInfo;
    BOOL _isCanceled;
    ? _flags;
}


@property (nonatomic) CGFloat absDepartureTime;
@property (nonatomic) CGFloat absLiveDepartureTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *departureDate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *displayNameOverride;
@property (nonatomic) BOOL hasAbsDepartureTime;
@property (nonatomic) BOOL hasAbsLiveDepartureTime;
@property (readonly, nonatomic) BOOL hasDisplayNameOverride;
@property (nonatomic) BOOL hasIsCanceled;
@property (readonly, nonatomic) BOOL hasRealTimeStatus;
@property (nonatomic) BOOL hasRealTimeStatusInfo;
@property (nonatomic) BOOL hasReferenceTripId;
@property (readonly, nonatomic) BOOL hasVehicleNumber;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCanceled;
@property (nonatomic) BOOL isCanceled;
@property (readonly, nonatomic) BOOL isPastDeparture;
@property (readonly, nonatomic) NSDate *liveDepartureDate;
@property (readonly, nonatomic) NSInteger liveStatus;
@property (readonly, nonatomic) NSObject<GEOServerFormattedString> *liveStatusString;
@property (retain, nonatomic) GEOFormattedString *realTimeStatus;
@property (nonatomic) int realTimeStatusInfo;
@property (nonatomic) NSUInteger referenceTripId;
@property (readonly, nonatomic) NSDate *scheduledDepartureDate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger tripIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (readonly, nonatomic) NSString *vehicleIdentifier;
@property (retain, nonatomic) NSString *vehicleNumber;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPastDepartureRelativeToDate:(id)arg0 usingGracePeriod:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)realTimeStatusInfoAsString:(int)arg0 ;
-(int)StringAsRealTimeStatusInfo:(id)arg0 ;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif