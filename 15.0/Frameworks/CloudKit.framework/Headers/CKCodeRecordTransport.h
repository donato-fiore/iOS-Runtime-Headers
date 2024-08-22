// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKCODERECORDTRANSPORT_H
#define CKCODERECORDTRANSPORT_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface CKCodeRecordTransport : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int contents; // ivar: _contents
@property (retain, nonatomic) NSData *encryptedMasterKey; // ivar: _encryptedMasterKey
@property (nonatomic) BOOL hasContents;
@property (readonly, nonatomic) BOOL hasEncryptedMasterKey;
@property (readonly, nonatomic) BOOL hasLocalSerialization;
@property (readonly, nonatomic) BOOL hasWireSerialization;
@property (retain, nonatomic) NSData *localSerialization; // ivar: _localSerialization
@property (retain, nonatomic) NSData *wireSerialization; // ivar: _wireSerialization


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)contentsAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithRecord:(id)arg0 ;
-(int)StringAsContents:(id)arg0 ;
-(void)clearOneofValuesForContents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif