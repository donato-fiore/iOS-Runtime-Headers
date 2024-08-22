// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSLUIPBPROPERTYVALUE_H
#define CSLUIPBPROPERTYVALUE_H

@class PBCodable, NSMutableArray, NSData, NSString;
@protocol NSCopying;


#import "CSLUIPBPropertyValue.h"
#import "CSLUIPBNumber.h"
#import "CSLUIPBSize.h"

@interface CSLUIPBPropertyValue : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *arrayValues; // ivar: _arrayValues
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (retain, nonatomic) CSLUIPBPropertyValue *dictionaryKey; // ivar: _dictionaryKey
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasDictionaryKey;
@property (readonly, nonatomic) BOOL hasNumberValue;
@property (readonly, nonatomic) BOOL hasSizeValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (readonly, nonatomic) BOOL hasUUIDValue;
@property (retain, nonatomic) CSLUIPBNumber *numberValue; // ivar: _numberValue
@property (retain, nonatomic) CSLUIPBSize *sizeValue; // ivar: _sizeValue
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