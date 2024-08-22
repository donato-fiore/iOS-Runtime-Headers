// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWPBAGENTCLASS_H
#define NWPBAGENTCLASS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface NWPBAgentClass : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *type; // ivar: _type


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