// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ICLLPROTOCOLMESSAGE_H
#define _ICLLPROTOCOLMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_ICLLActionMessage.h"
#import "_ICLLCommandMessage.h"
#import "_ICLLErrorMessage.h"
#import "_ICLLQueryMessage.h"

@interface _ICLLProtocolMessage : PBCodable <NSCopying>

 {
    _ICLLActionMessage *_action;
    _ICLLCommandMessage *_command;
    _ICLLErrorMessage *_error;
    _ICLLQueryMessage *_query;
    NSString *_traceId;
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