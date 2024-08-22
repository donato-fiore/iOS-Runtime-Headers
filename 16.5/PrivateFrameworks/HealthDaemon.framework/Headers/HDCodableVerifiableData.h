// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEVERIFIABLEDATA_H
#define HDCODABLEVERIFIABLEDATA_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCodableVerifiableData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasIssuerIdentifier;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSString *issuerIdentifier; // ivar: _issuerIdentifier
@property (nonatomic) NSInteger type; // ivar: _type


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