// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABCPBSIGCONFIG_H
#define ABCPBSIGCONFIG_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ABCPbSigConfig : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly, nonatomic) BOOL hasSubtype;
@property (readonly, nonatomic) BOOL hasSubtypeContext;
@property (readonly, nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *subtype; // ivar: _subtype
@property (retain, nonatomic) NSString *subtypeContext; // ivar: _subtypeContext
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