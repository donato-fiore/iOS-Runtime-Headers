// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOURLOPTIONS_H
#define GEOURLOPTIONS_H

@class PBCodable, PBDataReader, NSString;
@protocol GEOURLSerializable, NSCopying;


#import "GEOURLCamera.h"
#import "GEOURLCenterSpan.h"
#import "GEOURLRouteHandle.h"
#import "GEOURLTimePoint.h"

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying>

 {
    PBDataReader *_reader;
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    GEOURLTimePoint *_timePoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _mapType;
    int _transportType;
    int _userTrackingMode;
    BOOL _connectedToCar;
    BOOL _enableTraffic;
    ? _flags;
}


@property (retain, nonatomic) GEOURLCamera *camera;
@property (retain, nonatomic) GEOURLCenterSpan *centerSpan;
@property (nonatomic) BOOL connectedToCar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableTraffic;
@property (readonly, nonatomic) BOOL hasCamera;
@property (readonly, nonatomic) BOOL hasCenterSpan;
@property (nonatomic) BOOL hasConnectedToCar;
@property (nonatomic) BOOL hasEnableTraffic;
@property (nonatomic) BOOL hasMapType;
@property (readonly, nonatomic) BOOL hasReferralIdentifier;
@property (readonly, nonatomic) BOOL hasRouteHandle;
@property (readonly, nonatomic) BOOL hasTimePoint;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasUserTrackingMode;
@property (readonly) NSUInteger hash;
@property (nonatomic) int mapType;
@property (retain, nonatomic) NSString *referralIdentifier;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly) Class superclass;
@property (retain, nonatomic) GEOURLTimePoint *timePoint;
@property (nonatomic) int transportType;
@property (nonatomic) int userTrackingMode;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithUrlRepresentation:(id)arg0 ;
-(id)jsonRepresentation;
-(id)mapTypeAsString:(int)arg0 ;
-(id)transportTypeAsString:(int)arg0 ;
-(id)urlRepresentation;
-(id)userTrackingModeAsString:(int)arg0 ;
-(int)StringAsMapType:(id)arg0 ;
-(int)StringAsTransportType:(id)arg0 ;
-(int)StringAsUserTrackingMode:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif