// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCODABLEMETADATAKEYVALUEPAIR_H
#define HKCODABLEMETADATAKEYVALUEPAIR_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "HKCodableQuantity.h"

@interface HKCodableMetadataKeyValuePair : PBCodable <NSCopying>

 {
    APPLE_174 _has;
}


@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberIntValue;
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) NSInteger numberIntValue; // ivar: _numberIntValue
@property (retain, nonatomic) HKCodableQuantity *quantityValue; // ivar: _quantityValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue


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