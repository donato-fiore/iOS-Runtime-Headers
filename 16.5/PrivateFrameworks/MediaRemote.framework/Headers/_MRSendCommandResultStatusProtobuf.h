// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRSENDCOMMANDRESULTSTATUSPROTOBUF_H
#define _MRSENDCOMMANDRESULTSTATUSPROTOBUF_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "_MRSendCommandResultHandlerDialogProtobuf.h"
#import "_MRErrorProtobuf.h"

@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *customData; // ivar: _customData
@property (retain, nonatomic) NSString *customDataType; // ivar: _customDataType
@property (retain, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *dialog; // ivar: _dialog
@property (retain, nonatomic) _MRErrorProtobuf *error; // ivar: _error
@property (readonly, nonatomic) BOOL hasCustomData;
@property (readonly, nonatomic) BOOL hasCustomDataType;
@property (readonly, nonatomic) BOOL hasDialog;
@property (readonly, nonatomic) BOOL hasError;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int statusCode; // ivar: _statusCode
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)statusCodeAsString:(int)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsStatusCode:(id)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif