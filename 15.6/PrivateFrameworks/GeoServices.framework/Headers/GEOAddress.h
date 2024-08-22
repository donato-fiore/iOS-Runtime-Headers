// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOADDRESS_H
#define GEOADDRESS_H

@class PBCodable, PBDataReader, PBUnknownFields, NSMutableArray, NSString;
@protocol GEOURLSerializable, NSCopying;


#import "GEOStructuredAddress.h"

@interface GEOAddress : PBCodable <GEOURLSerializable, NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_formattedAddressLines;
    GEOStructuredAddress *_structuredAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _formattedAddressType;
    ? _flags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableArray *formattedAddressLines;
@property (nonatomic) int formattedAddressType;
@property (nonatomic) BOOL hasFormattedAddressType;
@property (readonly, nonatomic) BOOL hasStructuredAddress;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) GEOStructuredAddress *structuredAddress;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(Class)formattedAddressLineType;
+(id)geoAddressForPlaceData:(id)arg0 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)addressDictionary;
-(id)bestName;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)formattedAddressLineAtIndex:(NSUInteger)arg0 ;
-(id)formattedAddressTypeAsString:(int)arg0 ;
-(id)init;
-(id)initWithAddressDictionary:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithPostalAddress:(id)arg0 ;
-(id)initWithUrlRepresentation:(id)arg0 ;
-(id)jsonRepresentation;
-(id)postalAddress;
-(id)urlRepresentation;
-(int)StringAsFormattedAddressType:(id)arg0 ;
-(void)addFormattedAddressLine:(id)arg0 ;
-(void)clearFormattedAddressLines;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif