// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEQUANTITYVALUEWITHRANGE_H
#define HKCODABLEQUANTITYVALUEWITHRANGE_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableQuantityValueWithRange : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *codes; // ivar: _codes
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (readonly, nonatomic) BOOL hasReferenceRangeMax;
@property (readonly, nonatomic) BOOL hasReferenceRangeMin;
@property (readonly, nonatomic) BOOL hasTextualValue;
@property (readonly, nonatomic) BOOL hasValueTitle;
@property (retain, nonatomic) HKCodableQuantity *quantityValue; // ivar: _quantityValue
@property (retain, nonatomic) HKCodableQuantity *referenceRangeMax; // ivar: _referenceRangeMax
@property (retain, nonatomic) HKCodableQuantity *referenceRangeMin; // ivar: _referenceRangeMin
@property (retain, nonatomic) NSString *textualValue; // ivar: _textualValue
@property (retain, nonatomic) NSString *valueTitle; // ivar: _valueTitle


+(Class)codeType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)codeAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addCode:(id)arg0 ;
-(void)clearCodes;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif