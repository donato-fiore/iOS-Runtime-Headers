// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLETIMESTAMPEDKEYVALUEPAIR_H
#define HDCODABLETIMESTAMPEDKEYVALUEPAIR_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface HDCodableTimestampedKeyValuePair : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSData *bytesValue; // ivar: _bytesValue
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) BOOL hasNumberIntValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) NSString *key; // ivar: _key
@property (nonatomic) CGFloat numberDoubleValue; // ivar: _numberDoubleValue
@property (nonatomic) NSInteger numberIntValue; // ivar: _numberIntValue
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decodedTimestamp;
-(id)decodedValue;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithKey:(id)arg0 value:(id)arg1 timestamp:(id)arg2 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)setValue:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif