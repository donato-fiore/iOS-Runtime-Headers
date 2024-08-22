// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDPRESPONSEOPERATIONRESULTERRORAUXILIARYERRORERRORUSERINFOVALUE_H
#define CKDPRESPONSEOPERATIONRESULTERRORAUXILIARYERRORERRORUSERINFOVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (retain, nonatomic) NSData *bytesValue; // ivar: _bytesValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasInt64Value;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) NSInteger int64Value; // ivar: _int64Value
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) int value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)valueAsString:(int)arg0 ;
-(int)StringAsValue:(id)arg0 ;
-(void)clearOneofValuesForValue;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif