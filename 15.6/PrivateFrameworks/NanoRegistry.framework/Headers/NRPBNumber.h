// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NRPBNUMBER_H
#define NRPBNUMBER_H

@class PBCodable;
@protocol NSCopying;



@interface NRPBNumber : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) float floatValue; // ivar: _floatValue
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) BOOL hasInt32Value;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) BOOL hasIsShortOrChar;
@property (nonatomic) BOOL hasIsUnsigned;
@property (nonatomic) int int32Value; // ivar: _int32Value
@property (nonatomic) NSInteger int64Value; // ivar: _int64Value
@property (nonatomic) BOOL isShortOrChar; // ivar: _isShortOrChar
@property (nonatomic) BOOL isUnsigned; // ivar: _isUnsigned


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