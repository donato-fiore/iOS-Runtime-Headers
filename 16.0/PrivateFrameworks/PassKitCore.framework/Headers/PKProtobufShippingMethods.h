// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROTOBUFSHIPPINGMETHODS_H
#define PKPROTOBUFSHIPPINGMETHODS_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "PKProtobufShippingMethod.h"

@interface PKProtobufShippingMethods : PBCodable <NSCopying>



@property (retain, nonatomic) PKProtobufShippingMethod *defaultMethod; // ivar: _defaultMethod
@property (readonly, nonatomic) BOOL hasDefaultMethod;
@property (retain, nonatomic) NSMutableArray *methods; // ivar: _methods


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)methodsAtIndex:(NSUInteger)arg0 ;
-(void)addMethods:(id)arg0 ;
-(void)clearMethods;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif