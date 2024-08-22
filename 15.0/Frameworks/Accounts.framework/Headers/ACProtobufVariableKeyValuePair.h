// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACPROTOBUFVARIABLEKEYVALUEPAIR_H
#define ACPROTOBUFVARIABLEKEYVALUEPAIR_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ACProtobufVariableValue.h"

@interface ACProtobufVariableKeyValuePair : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) ACProtobufVariableValue *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithObjectValue:(id)arg0 forKey:(id)arg1 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif