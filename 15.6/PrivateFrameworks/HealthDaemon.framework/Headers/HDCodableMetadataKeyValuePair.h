// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEMETADATAKEYVALUEPAIR_H
#define HDCODABLEMETADATAKEYVALUEPAIR_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "HDCodableQuantity.h"

@interface HDCodableMetadataKeyValuePair : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (nonatomic) CGFloat dateValue; // ivar: _dateValue
@property (readonly, nonatomic) BOOL hasDataValue;
@property (nonatomic) BOOL hasDateValue;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) BOOL hasNumberIntValue;
@property (readonly, nonatomic) BOOL hasQuantityValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) CGFloat numberDoubleValue; // ivar: _numberDoubleValue
@property (nonatomic) NSInteger numberIntValue; // ivar: _numberIntValue
@property (retain, nonatomic) HDCodableQuantity *quantityValue; // ivar: _quantityValue
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