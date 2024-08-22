// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLECODEDQUANTITY_H
#define HDCODABLECODEDQUANTITY_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HDCodableMedicalCoding.h"

@interface HDCodableCodedQuantity : PBCodable <NSCopying>



@property (retain, nonatomic) HDCodableMedicalCoding *comparatorCoding; // ivar: _comparatorCoding
@property (readonly, nonatomic) BOOL hasComparatorCoding;
@property (readonly, nonatomic) BOOL hasRawValue;
@property (readonly, nonatomic) BOOL hasUnitCoding;
@property (retain, nonatomic) NSString *rawValue; // ivar: _rawValue
@property (retain, nonatomic) HDCodableMedicalCoding *unitCoding; // ivar: _unitCoding


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