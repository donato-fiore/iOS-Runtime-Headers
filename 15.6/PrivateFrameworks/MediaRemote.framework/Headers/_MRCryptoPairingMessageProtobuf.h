// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRCRYPTOPAIRINGMESSAGEPROTOBUF_H
#define _MRCRYPTOPAIRINGMESSAGEPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;



@interface _MRCryptoPairingMessageProtobuf : PBCodable <NSCopying>

 {
    NSData *_pairingData;
    int _state;
    int _status;
    BOOL _isRetrying;
    BOOL _isUsingSystemPairing;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif