// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBGETSETTINGRESPONSEDATA_H
#define _INPBGETSETTINGRESPONSEDATA_H

@class PBCodable, NSString;
@protocol _INPBGetSettingResponseData, NSSecureCoding, NSCopying;


#import "_INPBNumericSettingValue.h"
#import "_INPBSettingMetadata.h"

@interface _INPBGetSettingResponseData : PBCodable <_INPBGetSettingResponseData, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) int binaryValue; // ivar: _binaryValue
@property (nonatomic) int boundedValue; // ivar: _boundedValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasBinaryValue;
@property (nonatomic) BOOL hasBoundedValue;
@property (readonly, nonatomic) BOOL hasLabeledValue;
@property (readonly, nonatomic) BOOL hasNumericValue;
@property (readonly, nonatomic) BOOL hasSettingMetadata;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *labeledValue; // ivar: _labeledValue
@property (retain, nonatomic) _INPBNumericSettingValue *numericValue; // ivar: _numericValue
@property (retain, nonatomic) _INPBSettingMetadata *settingMetadata; // ivar: _settingMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)binaryValueAsString:(int)arg0 ;
-(id)boundedValueAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsBinaryValue:(id)arg0 ;
-(int)StringAsBoundedValue:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif