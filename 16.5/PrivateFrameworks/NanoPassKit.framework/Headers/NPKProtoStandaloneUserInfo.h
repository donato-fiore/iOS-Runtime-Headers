// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPKPROTOSTANDALONEUSERINFO_H
#define NPKPROTOSTANDALONEUSERINFO_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NPKProtoStandaloneUserInfo : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (retain, nonatomic) NSString *value; // ivar: _value


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