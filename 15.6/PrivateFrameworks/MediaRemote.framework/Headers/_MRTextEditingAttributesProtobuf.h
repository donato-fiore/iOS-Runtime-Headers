// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRTEXTEDITINGATTRIBUTESPROTOBUF_H
#define _MRTEXTEDITINGATTRIBUTESPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRTextInputTraitsProtobuf.h"

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying>

 {
    _MRTextInputTraitsProtobuf *_inputTraits;
    NSString *_prompt;
    NSString *_title;
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