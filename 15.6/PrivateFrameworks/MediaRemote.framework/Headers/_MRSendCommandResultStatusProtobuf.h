// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRSENDCOMMANDRESULTSTATUSPROTOBUF_H
#define _MRSENDCOMMANDRESULTSTATUSPROTOBUF_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "_MRSendCommandResultHandlerDialogProtobuf.h"
#import "_MRErrorProtobuf.h"

@interface _MRSendCommandResultStatusProtobuf : PBCodable <NSCopying>

 {
    NSData *_customData;
    NSString *_customDataType;
    _MRSendCommandResultHandlerDialogProtobuf *_dialog;
    _MRErrorProtobuf *_error;
    int _statusCode;
    int _type;
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