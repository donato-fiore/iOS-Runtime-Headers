// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRCRYPTOPAIRINGMESSAGEPROTOBUF_H
#define _MRCRYPTOPAIRINGMESSAGEPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIsRetrying;
@property (nonatomic) BOOL hasIsUsingSystemPairing;
@property (readonly, nonatomic) BOOL hasPairingData;
@property (nonatomic) BOOL hasState;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL isRetrying; // ivar: _isRetrying
@property (nonatomic) BOOL isUsingSystemPairing; // ivar: _isUsingSystemPairing
@property (retain, nonatomic) NSData *pairingData; // ivar: _pairingData
@property (nonatomic) int state; // ivar: _state
@property (nonatomic) int status; // ivar: _status


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