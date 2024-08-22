// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRMSBEGINPAIRINGRESPONSEMESSAGE_H
#define TVRMSBEGINPAIRINGRESPONSEMESSAGE_H

@class PBCodable;
@protocol NSCopying;



@interface TVRMSBeginPairingResponseMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) BOOL hasSessionIdentifier;
@property (nonatomic) int responseCode; // ivar: _responseCode
@property (nonatomic) int sessionIdentifier; // ivar: _sessionIdentifier


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