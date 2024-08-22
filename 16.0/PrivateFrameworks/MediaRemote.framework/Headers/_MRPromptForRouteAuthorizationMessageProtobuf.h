// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRPROMPTFORROUTEAUTHORIZATIONMESSAGEPROTOBUF_H
#define _MRPROMPTFORROUTEAUTHORIZATIONMESSAGEPROTOBUF_H

@class PBCodable;
@protocol NSCopying;


#import "_MRAVOutputDeviceDescriptorProtobuf.h"

@interface _MRPromptForRouteAuthorizationMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasInputType;
@property (readonly, nonatomic) BOOL hasRoute;
@property (nonatomic) int inputType; // ivar: _inputType
@property (retain, nonatomic) _MRAVOutputDeviceDescriptorProtobuf *route; // ivar: _route


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)inputTypeAsString:(int)arg0 ;
-(int)StringAsInputType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif