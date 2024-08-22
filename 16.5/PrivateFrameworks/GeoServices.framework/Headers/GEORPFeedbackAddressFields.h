// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEORPFEEDBACKADDRESSFIELDS_H
#define GEORPFEEDBACKADDRESSFIELDS_H

@class PBCodable, PBDataReader, NSString;
@protocol NSCopying;



@interface GEORPFeedbackAddressFields : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    NSString *_addressBasic;
    NSString *_addressBuilding;
    NSString *_addressFloor;
    NSString *_addressUnit;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) NSString *addressBasic;
@property (retain, nonatomic) NSString *addressBuilding;
@property (retain, nonatomic) NSString *addressFloor;
@property (retain, nonatomic) NSString *addressUnit;
@property (readonly, nonatomic) BOOL hasAddressBasic;
@property (readonly, nonatomic) BOOL hasAddressBuilding;
@property (readonly, nonatomic) BOOL hasAddressFloor;
@property (readonly, nonatomic) BOOL hasAddressUnit;


+(BOOL)isValid:(id)arg0 ;
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