// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WCDPROTOUSERINFOTRANSFER_H
#define WCDPROTOUSERINFOTRANSFER_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface WCDProtoUserInfoTransfer : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *clientData; // ivar: _clientData
@property (readonly, nonatomic) BOOL hasClientData;
@property (readonly, nonatomic) BOOL hasTransferIdentifier;
@property (nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *transferIdentifier; // ivar: _transferIdentifier
@property (nonatomic) unsigned int version; // ivar: _version


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