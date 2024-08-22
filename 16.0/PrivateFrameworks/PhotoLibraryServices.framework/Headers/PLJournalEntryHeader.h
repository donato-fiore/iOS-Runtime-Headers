// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLJOURNALENTRYHEADER_H
#define PLJOURNALENTRYHEADER_H

@class PBCodable, NSMutableArray, NSString, NSData;
@protocol NSCopying;



@interface PLJournalEntryHeader : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int entryType; // ivar: _entryType
@property (nonatomic) BOOL hasEntryType;
@property (nonatomic) BOOL hasPayloadCRC;
@property (readonly, nonatomic) BOOL hasPayloadID;
@property (nonatomic) BOOL hasPayloadLength;
@property (readonly, nonatomic) BOOL hasPayloadUUID;
@property (nonatomic) BOOL hasPayloadVersion;
@property (retain, nonatomic) NSMutableArray *nilProperties; // ivar: _nilProperties
@property (nonatomic) unsigned int payloadCRC; // ivar: _payloadCRC
@property (retain, nonatomic) NSString *payloadID; // ivar: _payloadID
@property (nonatomic) NSUInteger payloadLength; // ivar: _payloadLength
@property (retain, nonatomic) NSData *payloadUUID; // ivar: _payloadUUID
@property (nonatomic) unsigned int payloadVersion; // ivar: _payloadVersion


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entryTypeAsString:(int)arg0 ;
-(id)nilPropertiesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsEntryType:(id)arg0 ;
-(void)addNilProperties:(id)arg0 ;
-(void)clearNilProperties;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif