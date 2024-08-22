// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCODABLESUMMARYVISIONPRESCRIPTIONVALUE_H
#define HKCODABLESUMMARYVISIONPRESCRIPTIONVALUE_H

@class PBCodable;
@protocol NSCopying;


#import "HKCodableQuantity.h"
#import "HKCodablePrescriptionType.h"

@interface HKCodableSummaryVisionPrescriptionValue : PBCodable <NSCopying>

 {
    APPLE_128 _has;
}


@property (nonatomic) BOOL hasHasImage;
@property (nonatomic) BOOL hasImage; // ivar: _hasImage
@property (readonly, nonatomic) BOOL hasLeftEyeSphere;
@property (readonly, nonatomic) BOOL hasPrescriptionType;
@property (readonly, nonatomic) BOOL hasRightEyeSphere;
@property (nonatomic) BOOL hasTimestampData;
@property (retain, nonatomic) HKCodableQuantity *leftEyeSphere; // ivar: _leftEyeSphere
@property (retain, nonatomic) HKCodablePrescriptionType *prescriptionType; // ivar: _prescriptionType
@property (retain, nonatomic) HKCodableQuantity *rightEyeSphere; // ivar: _rightEyeSphere
@property (nonatomic) CGFloat timestampData; // ivar: _timestampData


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