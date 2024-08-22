// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACPROTOBUFUUID_H
#define ACPROTOBUFUUID_H

@class PBCodable, NSUUID, NSString;
@protocol NSCopying;



@interface ACProtobufUUID : PBCodable <NSCopying>



@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithUUID:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif