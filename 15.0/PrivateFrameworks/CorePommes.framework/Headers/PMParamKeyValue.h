// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMPARAMKEYVALUE_H
#define PMPARAMKEYVALUE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface PMParamKeyValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) float floatValue; // ivar: _floatValue
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) BOOL hasIntValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) NSInteger intValue; // ivar: _intValue
@property (retain, nonatomic) NSString *key; // ivar: _key
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