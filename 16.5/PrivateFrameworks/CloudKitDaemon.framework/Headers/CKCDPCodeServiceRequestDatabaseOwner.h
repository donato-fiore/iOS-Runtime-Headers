// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKCDPCODESERVICEREQUESTDATABASEOWNER_H
#define CKCDPCODESERVICEREQUESTDATABASEOWNER_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasNumericValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) int identifier; // ivar: _identifier
@property (nonatomic) NSUInteger numericValue; // ivar: _numericValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)identifierAsString:(int)arg0 ;
-(int)StringAsIdentifier:(id)arg0 ;
-(void)clearOneofValuesForIdentifier;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif