// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRGETVOICEINPUTDEVICESRESPONSEMESSAGEPROTOBUF_H
#define _MRGETVOICEINPUTDEVICESRESPONSEMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying>

 {
    ? _deviceIDs;
    ? _has;
}


@property (readonly, nonatomic) *unsigned int deviceIDs;
@property (readonly, nonatomic) NSUInteger deviceIDsCount;
@property (nonatomic) unsigned int errorCode; // ivar: _errorCode
@property (nonatomic) BOOL hasErrorCode;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)deviceIDsAtIndex:(NSUInteger)arg0 ;
-(void)addDeviceIDs:(unsigned int)arg0 ;
-(void)clearDeviceIDs;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif