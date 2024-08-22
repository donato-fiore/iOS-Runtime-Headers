// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKCDPERRORUSERINFOENTRY_H
#define CKCDPERRORUSERINFOENTRY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CKCDPErrorUserInfoValue.h"

@interface CKCDPErrorUserInfoEntry : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) CKCDPErrorUserInfoValue *value; // ivar: _value


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