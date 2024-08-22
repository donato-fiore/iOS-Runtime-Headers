// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMATTRIBUTE_H
#define PMATTRIBUTE_H

@class PBCodable, NSData, NSString, NSMutableArray;
@protocol NSCopying;


#import "PMPerson.h"

@interface PMAttribute : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolValue; // ivar: _boolValue
@property (retain, nonatomic) NSData *bytesValue; // ivar: _bytesValue
@property (retain, nonatomic) NSString *customKey; // ivar: _customKey
@property (nonatomic) CGFloat doubleValue; // ivar: _doubleValue
@property (nonatomic) float floatValue; // ivar: _floatValue
@property (nonatomic) BOOL hasBoolValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (readonly, nonatomic) BOOL hasCustomKey;
@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) BOOL hasFloatValue;
@property (nonatomic) BOOL hasIntValue;
@property (nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasPersonValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) NSInteger intValue; // ivar: _intValue
@property (nonatomic) int key; // ivar: _key
@property (retain, nonatomic) PMPerson *personValue; // ivar: _personValue
@property (retain, nonatomic) NSMutableArray *personValues; // ivar: _personValues
@property (retain, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (retain, nonatomic) NSMutableArray *stringValues; // ivar: _stringValues


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)keyAsString:(int)arg0 ;
-(id)personValuesAtIndex:(NSUInteger)arg0 ;
-(id)stringValuesAtIndex:(NSUInteger)arg0 ;
-(int)StringAsKey:(id)arg0 ;
-(void)addPersonValues:(id)arg0 ;
-(void)addStringValues:(id)arg0 ;
-(void)clearPersonValues;
-(void)clearStringValues;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif