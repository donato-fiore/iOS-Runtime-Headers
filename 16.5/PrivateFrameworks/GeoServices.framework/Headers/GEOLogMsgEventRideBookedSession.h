// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTRIDEBOOKEDSESSION_H
#define GEOLOGMSGEVENTRIDEBOOKEDSESSION_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;



@interface GEOLogMsgEventRideBookedSession : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _statusIssue;
    BOOL _bookedUsingMaps;
    BOOL _cancelled;
    BOOL _contactedDriver;
    BOOL _invalidVehicleLocation;
    BOOL _missingVehicleLocation;
    BOOL _tappedProactiveTrayItem;
    BOOL _viewedDetails;
    BOOL _viewedInProactiveTray;
    ? _flags;
}


@property (nonatomic) BOOL bookedUsingMaps;
@property (nonatomic) BOOL cancelled;
@property (nonatomic) BOOL contactedDriver;
@property (nonatomic) BOOL hasBookedUsingMaps;
@property (nonatomic) BOOL hasCancelled;
@property (nonatomic) BOOL hasContactedDriver;
@property (nonatomic) BOOL hasInvalidVehicleLocation;
@property (nonatomic) BOOL hasMissingVehicleLocation;
@property (readonly, nonatomic) BOOL hasRideAppId;
@property (readonly, nonatomic) BOOL hasRideAppVersion;
@property (readonly, nonatomic) BOOL hasRideBookedSessionId;
@property (nonatomic) BOOL hasStatusIssue;
@property (nonatomic) BOOL hasTappedProactiveTrayItem;
@property (nonatomic) BOOL hasViewedDetails;
@property (nonatomic) BOOL hasViewedInProactiveTray;
@property (retain, nonatomic) NSMutableArray *intentResponseFailures;
@property (nonatomic) BOOL invalidVehicleLocation;
@property (nonatomic) BOOL missingVehicleLocation;
@property (retain, nonatomic) NSString *rideAppId;
@property (retain, nonatomic) NSString *rideAppVersion;
@property (retain, nonatomic) NSString *rideBookedSessionId;
@property (nonatomic) int statusIssue;
@property (nonatomic) BOOL tappedProactiveTrayItem;
@property (nonatomic) BOOL viewedDetails;
@property (nonatomic) BOOL viewedInProactiveTray;


+(BOOL)isValid:(id)arg0 ;
+(Class)intentResponseFailureType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)intentResponseFailureAtIndex:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)statusIssueAsString:(int)arg0 ;
-(int)StringAsStatusIssue:(id)arg0 ;
-(void)addIntentResponseFailure:(id)arg0 ;
-(void)clearIntentResponseFailures;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif