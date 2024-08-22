// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMPBCHARACTERISTICREFERENCE_H
#define HMPBCHARACTERISTICREFERENCE_H

@class PBCodable, NSData;
@protocol NSCopying;


#import "HMPBServiceReference.h"

@interface HMPBCharacteristicReference : PBCodable <NSCopying>



@property (readonly, nonatomic) BOOL hasServiceReference;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (retain, nonatomic) HMPBServiceReference *serviceReference; // ivar: _serviceReference
@property (retain, nonatomic) NSData *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)characteristicReferenceWithCharacteristic:(id)arg0 ;
+(id)characteristicReferenceWithData:(id)arg0 ;
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