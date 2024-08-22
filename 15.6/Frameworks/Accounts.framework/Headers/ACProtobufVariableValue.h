// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACPROTOBUFVARIABLEVALUE_H
#define ACPROTOBUFVARIABLEVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;


#import "ACProtobufVariableValueList.h"
#import "ACProtobufDate.h"
#import "ACProtobufVariableValueDictionary.h"
#import "ACProtobufURL.h"
#import "ACProtobufUUID.h"

@interface ACProtobufVariableValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ACProtobufVariableValueList *arrayValue; // ivar: _arrayValue
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (retain, nonatomic) ACProtobufDate *dateValue; // ivar: _dateValue
@property (retain, nonatomic) ACProtobufVariableValueDictionary *dictionaryValue; // ivar: _dictionaryValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (readonly, nonatomic) BOOL hasArrayValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (readonly, nonatomic) BOOL hasDictionaryValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (readonly, nonatomic) BOOL hasSetValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasUnsignedIntegerValue;
@property (readonly, nonatomic) BOOL hasUrlValue;
@property (readonly, nonatomic) BOOL hasUuidValue;
@property (nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (retain, nonatomic) id *object;
@property (retain, nonatomic) ACProtobufVariableValueList *setValue; // ivar: _setValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) NSUInteger unsignedIntegerValue; // ivar: _unsignedIntegerValue
@property (retain, nonatomic) ACProtobufURL *urlValue; // ivar: _urlValue
@property (retain, nonatomic) ACProtobufUUID *uuidValue; // ivar: _uuidValue


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithObjectValue:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif