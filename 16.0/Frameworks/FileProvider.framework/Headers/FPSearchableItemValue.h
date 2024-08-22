// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSEARCHABLEITEMVALUE_H
#define FPSEARCHABLEITEMVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface FPSearchableItemValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasIntegerValue;
@property (readonly, nonatomic) BOOL hasNameComponents;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasTimeIntervalSinceReferenceDateValue;
@property (nonatomic) NSInteger integerValue; // ivar: _integerValue
@property (retain, nonatomic) NSData *nameComponents; // ivar: _nameComponents
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (nonatomic) CGFloat timeIntervalSinceReferenceDateValue; // ivar: _timeIntervalSinceReferenceDateValue


+(id)objectFromString:(id)arg0 ;
+(id)stringFromObject:(id)arg0 ;
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