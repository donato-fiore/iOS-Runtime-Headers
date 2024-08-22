// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPCONFIGURATIONFIELDVALUE_H
#define CKDPCONFIGURATIONFIELDVALUE_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;



@interface CKDPConfigurationFieldValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (retain, nonatomic) NSData *bytesValue; // ivar: _bytesValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (retain, nonatomic) NSMutableArray *fieldValues; // ivar: _fieldValues
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasLongValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) NSMutableArray *listValues; // ivar: _listValues
@property (nonatomic) NSInteger longValue; // ivar: _longValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)fieldValuesAtIndex:(NSUInteger)arg0 ;
-(id)listValuesAtIndex:(NSUInteger)arg0 ;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)addFieldValues:(id)arg0 ;
-(void)addListValues:(id)arg0 ;
-(void)clearFieldValues;
-(void)clearListValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif