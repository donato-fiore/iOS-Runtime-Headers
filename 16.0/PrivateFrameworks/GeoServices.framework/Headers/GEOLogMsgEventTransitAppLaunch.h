// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGEVENTTRANSITAPPLAUNCH_H
#define GEOLOGMSGEVENTTRANSITAPPLAUNCH_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLatLng.h"

@interface GEOLogMsgEventTransitAppLaunch : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_bundleIdentifier;
    GEOLatLng *_destination;
    GEOLatLng *_source;
    CGFloat _timestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) GEOLatLng *destination;
@property (readonly, nonatomic) BOOL hasBundleIdentifier;
@property (readonly, nonatomic) BOOL hasDestination;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) GEOLatLng *source;
@property (nonatomic) CGFloat timestamp;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
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
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif