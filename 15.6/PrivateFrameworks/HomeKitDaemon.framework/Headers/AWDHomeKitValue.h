// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWDHOMEKITVALUE_H
#define AWDHOMEKITVALUE_H

@class PBCodable, NSData, NSString;
@protocol NSCopying;



@interface AWDHomeKitValue : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL boolVal; // ivar: _boolVal
@property (retain, nonatomic) NSData *dataVal; // ivar: _dataVal
@property (nonatomic) CGFloat doubleVal; // ivar: _doubleVal
@property (nonatomic) float floatVal; // ivar: _floatVal
@property (nonatomic) BOOL hasBoolVal;
@property (readonly, nonatomic) BOOL hasDataVal;
@property (nonatomic) BOOL hasDoubleVal;
@property (nonatomic) BOOL hasFloatVal;
@property (nonatomic) BOOL hasIntVal;
@property (readonly, nonatomic) BOOL hasStringVal;
@property (nonatomic) NSInteger intVal; // ivar: _intVal
@property (retain, nonatomic) NSString *stringVal; // ivar: _stringVal


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