// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCDPERRORUSERINFOVALUE_H
#define CKCDPERRORUSERINFOVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface CKCDPErrorUserInfoValue : PBCodable <NSCopying>

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
@property (nonatomic) NSInteger int64Value; // ivar: _int64Value
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