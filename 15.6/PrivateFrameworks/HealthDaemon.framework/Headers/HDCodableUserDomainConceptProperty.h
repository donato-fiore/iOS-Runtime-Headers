// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDCODABLEUSERDOMAINCONCEPTPROPERTY_H
#define HDCODABLEUSERDOMAINCONCEPTPROPERTY_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCodableUserDomainConceptProperty : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasValueType;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) NSInteger valueType; // ivar: _valueType
@property (nonatomic) NSInteger version; // ivar: _version


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