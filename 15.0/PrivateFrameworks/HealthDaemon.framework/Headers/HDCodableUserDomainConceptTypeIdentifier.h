// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDCODABLEUSERDOMAINCONCEPTTYPEIDENTIFIER_H
#define HDCODABLEUSERDOMAINCONCEPTTYPEIDENTIFIER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface HDCodableUserDomainConceptTypeIdentifier : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger code; // ivar: _code
@property (nonatomic) BOOL hasCode;
@property (readonly, nonatomic) BOOL hasSchema;
@property (retain, nonatomic) NSString *schema; // ivar: _schema


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