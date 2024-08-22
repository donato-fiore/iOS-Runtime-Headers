// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ADFEATURE_H
#define ADFEATURE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ADFeature : PBCodable <NSCopying>

 {
    ? _doubleValues;
}


@property (readonly, nonatomic) *CGFloat doubleValues;
@property (readonly, nonatomic) NSUInteger doubleValuesCount;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSMutableArray *stringValues; // ivar: _stringValues
@property (retain, nonatomic) NSString *version; // ivar: _version


+(Class)stringValueType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(CGFloat)doubleValueAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)stringValueAtIndex:(NSUInteger)arg0 ;
-(void)addDoubleValue:(CGFloat)arg0 ;
-(void)addStringValue:(id)arg0 ;
-(void)clearDoubleValues;
-(void)clearStringValues;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif