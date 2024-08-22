// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOLOGMSGSTATEPLACEREQUEST_H
#define GEOLOGMSGSTATEPLACEREQUEST_H

@class PBCodable;
@protocol NSCopying;


#import "GEOPDPlaceRequest.h"

@interface GEOLogMsgStatePlaceRequest : PBCodable <NSCopying>

 {
    GEOPDPlaceRequest *_placeDataRequest;
    int _placeRequestType;
    ? _flags;
}


@property (readonly, nonatomic) BOOL hasPlaceDataRequest;
@property (nonatomic) BOOL hasPlaceRequestType;
@property (retain, nonatomic) GEOPDPlaceRequest *placeDataRequest;
@property (nonatomic) int placeRequestType;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)placeRequestTypeAsString:(int)arg0 ;
-(int)StringAsPlaceRequestType:(id)arg0 ;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif