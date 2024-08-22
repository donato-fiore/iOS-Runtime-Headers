// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRKEYBOARDMESSAGEPROTOBUF_H
#define _MRKEYBOARDMESSAGEPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "_MRTextEditingAttributesProtobuf.h"

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying>

 {
    _MRTextEditingAttributesProtobuf *_attributes;
    NSData *_encryptedTextCyphertext;
    int _state;
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