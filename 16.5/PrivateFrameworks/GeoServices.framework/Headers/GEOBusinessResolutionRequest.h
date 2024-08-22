// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOBUSINESSRESOLUTIONREQUEST_H
#define GEOBUSINESSRESOLUTIONREQUEST_H

@class PBRequest, PBDataReader, NSString;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEOBusinessResolutionRequest : PBRequest <NSCopying>

 {
    PBDataReader *_reader;
    GEOLocation *_deviceLocation;
    NSString *_shortBusinessName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEOLocation *deviceLocation;
@property (readonly, nonatomic) BOOL hasDeviceLocation;
@property (readonly, nonatomic) BOOL hasShortBusinessName;
@property (retain, nonatomic) NSString *shortBusinessName;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(unsigned int)requestTypeCode;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif