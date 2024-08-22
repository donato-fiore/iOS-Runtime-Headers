// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRPBPROPERTYVALUE_H
#define NRPBPROPERTYVALUE_H

@class PBCodable, NSMutableArray, NSData, NSString;
@protocol NSCopying;


#import "NRPBPropertyValue.h"
#import "NRPBNumber.h"
#import "NRPBSize.h"

@interface NRPBPropertyValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSMutableArray *arrayValues; // ivar: _arrayValues
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (retain, nonatomic) NRPBPropertyValue *dictionaryKey; // ivar: _dictionaryKey
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasDictionaryKey;
@property (nonatomic) BOOL hasIsDate;
@property (nonatomic) BOOL hasIsError;
@property (nonatomic) BOOL hasIsMiniUUIDSet;
@property (nonatomic) BOOL hasIsSecurePropertyValue;
@property (nonatomic) BOOL hasIsSet;
@property (readonly, nonatomic) BOOL hasNumberValue;
@property (readonly, nonatomic) BOOL hasSizeValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (readonly, nonatomic) BOOL hasUUIDValue;
@property (nonatomic) BOOL isDate; // ivar: _isDate
@property (nonatomic) BOOL isError; // ivar: _isError
@property (nonatomic) BOOL isMiniUUIDSet; // ivar: _isMiniUUIDSet
@property (nonatomic) BOOL isSecurePropertyValue; // ivar: _isSecurePropertyValue
@property (nonatomic) BOOL isSet; // ivar: _isSet
@property (retain, nonatomic) NRPBNumber *numberValue; // ivar: _numberValue
@property (retain, nonatomic) NRPBSize *sizeValue; // ivar: _sizeValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (retain, nonatomic) NSData *uUIDValue; // ivar: _uUIDValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)arrayValuesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addArrayValues:(id)arg0 ;
-(void)clearArrayValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif