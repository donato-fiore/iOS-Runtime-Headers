// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRREGISTERHIDDEVICERESULTMESSAGEPROTOBUF_H
#define _MRREGISTERHIDDEVICERESULTMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRRegisterHIDDeviceResultMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int deviceIdentifier; // ivar: _deviceIdentifier
@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasDeviceIdentifier;
@property (nonatomic) BOOL hasErrorCode;


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