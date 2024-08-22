// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCSMANATEESHAREINVITATION_H
#define PCSMANATEESHAREINVITATION_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface PCSManateeShareInvitation : PBCodable <NSCopying>



@property (retain, nonatomic) NSData *exportedPCSData; // ivar: _exportedPCSData
@property (readonly, nonatomic) BOOL hasExportedPCSData;
@property (readonly, nonatomic) BOOL hasShareePublicKeyData;
@property (retain, nonatomic) NSData *shareePublicKeyData; // ivar: _shareePublicKeyData


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif