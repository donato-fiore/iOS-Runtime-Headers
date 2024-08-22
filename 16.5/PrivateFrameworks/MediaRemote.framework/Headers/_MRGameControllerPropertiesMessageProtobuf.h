// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRGAMECONTROLLERPROPERTIESMESSAGEPROTOBUF_H
#define _MRGAMECONTROLLERPROPERTIESMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRGameControllerPropertiesProtobuf.h"

@interface _MRGameControllerPropertiesMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSUInteger controllerID; // ivar: _controllerID
@property (nonatomic) BOOL hasControllerID;
@property (readonly, nonatomic) BOOL hasProperties;
@property (retain, nonatomic) _MRGameControllerPropertiesProtobuf *properties; // ivar: _properties


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