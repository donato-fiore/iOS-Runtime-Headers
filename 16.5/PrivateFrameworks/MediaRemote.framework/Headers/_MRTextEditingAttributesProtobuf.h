// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRTEXTEDITINGATTRIBUTESPROTOBUF_H
#define _MRTEXTEDITINGATTRIBUTESPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRTextInputTraitsProtobuf.h"

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasInputTraits;
@property (readonly, nonatomic) BOOL hasPrompt;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) _MRTextInputTraitsProtobuf *inputTraits; // ivar: _inputTraits
@property (retain, nonatomic) NSString *prompt; // ivar: _prompt
@property (retain, nonatomic) NSString *title; // ivar: _title


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