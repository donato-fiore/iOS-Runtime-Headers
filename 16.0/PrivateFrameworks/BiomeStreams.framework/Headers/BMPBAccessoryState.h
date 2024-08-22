// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBACCESSORYSTATE_H
#define BMPBACCESSORYSTATE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface BMPBAccessoryState : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *dataValue; // ivar: _dataValue
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasMediaPropertyType;
@property (nonatomic) BOOL hasNumValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasValueType;
@property (retain, nonatomic) NSString *mediaPropertyType; // ivar: _mediaPropertyType
@property (nonatomic) CGFloat numValue; // ivar: _numValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) int valueType; // ivar: _valueType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)valueTypeAsString:(int)arg0 ;
-(int)StringAsValueType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif