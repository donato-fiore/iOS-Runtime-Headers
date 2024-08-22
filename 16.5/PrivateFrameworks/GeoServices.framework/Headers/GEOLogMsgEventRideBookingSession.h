// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGEVENTRIDEBOOKINGSESSION_H
#define GEOLOGMSGEVENTRIDEBOOKINGSESSION_H

@class PBCodable, PBDataReader, NSMutableArray, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOLogMsgEventRideBookingSession : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEOLatLng *_destinationBlurred;
    CGFloat _distanceToPickupInMeters;
    CGFloat _durationOfSessionInSeconds;
    NSMutableArray *_errorMessages;
    NSMutableArray *_intentResponseFailures;
    GEOLatLng *_originBlurred;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookingSessionId;
    NSString *_rideType;
    NSInteger _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _endState;
    int _endView;
    unsigned int _numberOfAvailableExtensions;
    int _statusIssue;
    BOOL _comparedRideOptions;
    BOOL _exploredOtherOptions;
    BOOL _installedApp;
    BOOL _movedPickupLocation;
    BOOL _paymentIsApplePay;
    BOOL _showedSurgePricingAlert;
    BOOL _switchedApp;
    BOOL _unavailable;
    ? _flags;
}


@property (nonatomic) BOOL comparedRideOptions;
@property (retain, nonatomic) GEOLatLng *destinationBlurred;
@property (nonatomic) CGFloat distanceToPickupInMeters;
@property (nonatomic) CGFloat durationOfSessionInSeconds;
@property (nonatomic) int endState;
@property (nonatomic) int endView;
@property (retain, nonatomic) NSMutableArray *errorMessages;
@property (nonatomic) BOOL exploredOtherOptions;
@property (nonatomic) BOOL hasComparedRideOptions;
@property (readonly, nonatomic) BOOL hasDestinationBlurred;
@property (nonatomic) BOOL hasDistanceToPickupInMeters;
@property (nonatomic) BOOL hasDurationOfSessionInSeconds;
@property (nonatomic) BOOL hasEndState;
@property (nonatomic) BOOL hasEndView;
@property (nonatomic) BOOL hasExploredOtherOptions;
@property (nonatomic) BOOL hasInstalledApp;
@property (nonatomic) BOOL hasMovedPickupLocation;
@property (nonatomic) BOOL hasNumberOfAvailableExtensions;
@property (readonly, nonatomic) BOOL hasOriginBlurred;
@property (nonatomic) BOOL hasPaymentIsApplePay;
@property (readonly, nonatomic) BOOL hasRideAppId;
@property (readonly, nonatomic) BOOL hasRideAppVersion;
@property (readonly, nonatomic) BOOL hasRideBookingSessionId;
@property (readonly, nonatomic) BOOL hasRideType;
@property (nonatomic) BOOL hasShowedSurgePricingAlert;
@property (nonatomic) BOOL hasStatusIssue;
@property (nonatomic) BOOL hasSwitchedApp;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUnavailable;
@property (nonatomic) BOOL installedApp;
@property (retain, nonatomic) NSMutableArray *intentResponseFailures;
@property (nonatomic) BOOL movedPickupLocation;
@property (nonatomic) unsigned int numberOfAvailableExtensions;
@property (retain, nonatomic) GEOLatLng *originBlurred;
@property (nonatomic) BOOL paymentIsApplePay;
@property (retain, nonatomic) NSString *rideAppId;
@property (retain, nonatomic) NSString *rideAppVersion;
@property (retain, nonatomic) NSString *rideBookingSessionId;
@property (retain, nonatomic) NSString *rideType;
@property (nonatomic) BOOL showedSurgePricingAlert;
@property (nonatomic) int statusIssue;
@property (nonatomic) BOOL switchedApp;
@property (nonatomic) NSInteger timestamp;
@property (nonatomic) BOOL unavailable;


+(BOOL)isValid:(id)arg0 ;
+(Class)errorMessageType;
+(Class)intentResponseFailureType;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)endStateAsString:(int)arg0 ;
-(id)endViewAsString:(int)arg0 ;
-(id)errorMessageAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)intentResponseFailureAtIndex:(NSUInteger)arg0 ;
-(id)jsonRepresentation;
-(id)statusIssueAsString:(int)arg0 ;
-(int)StringAsEndState:(id)arg0 ;
-(int)StringAsEndView:(id)arg0 ;
-(int)StringAsStatusIssue:(id)arg0 ;
-(void)addErrorMessage:(id)arg0 ;
-(void)addIntentResponseFailure:(id)arg0 ;
-(void)clearErrorMessages;
-(void)clearIntentResponseFailures;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif