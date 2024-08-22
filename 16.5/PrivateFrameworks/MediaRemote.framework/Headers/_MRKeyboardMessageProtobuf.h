// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRKEYBOARDMESSAGEPROTOBUF_H
#define _MRKEYBOARDMESSAGEPROTOBUF_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "_MRTextEditingAttributesProtobuf.h"

@interface _MRKeyboardMessageProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRTextEditingAttributesProtobuf *attributes; // ivar: _attributes
@property (retain, nonatomic) NSData *encryptedTextCyphertext; // ivar: _encryptedTextCyphertext
@property (readonly, nonatomic) BOOL hasAttributes;
@property (readonly, nonatomic) BOOL hasEncryptedTextCyphertext;
@property (nonatomic) BOOL hasState;
@property (nonatomic) int state; // ivar: _state


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stateAsString:(int)arg0 ;
-(int)StringAsState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif