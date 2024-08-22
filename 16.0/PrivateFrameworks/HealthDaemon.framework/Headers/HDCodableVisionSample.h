// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCODABLEVISIONSAMPLE_H
#define HDCODABLEVISIONSAMPLE_H

@class PBCodable, NSString;
@protocol HDDecoding, NSCopying;


#import "HDCodableSample.h"

@interface HDCodableVisionSample : PBCodable <HDDecoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *brand; // ivar: _brand
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *glassesDescription; // ivar: _glassesDescription
@property (readonly, nonatomic) BOOL hasBrand;
@property (readonly, nonatomic) BOOL hasGlassesDescription;
@property (nonatomic) BOOL hasLeftAddPower;
@property (nonatomic) BOOL hasLeftAxis;
@property (nonatomic) BOOL hasLeftBaseCurve;
@property (nonatomic) BOOL hasLeftContactDiameter;
@property (nonatomic) BOOL hasLeftCylinder;
@property (nonatomic) BOOL hasLeftFarPupillaryDistance;
@property (nonatomic) BOOL hasLeftNearPupillaryDistance;
@property (nonatomic) BOOL hasLeftPrismAmount;
@property (nonatomic) BOOL hasLeftPrismAngle;
@property (nonatomic) BOOL hasLeftSphere;
@property (nonatomic) BOOL hasLeftVertexDistance;
@property (nonatomic) BOOL hasPrescriptionType;
@property (nonatomic) BOOL hasRightAddPower;
@property (nonatomic) BOOL hasRightAxis;
@property (nonatomic) BOOL hasRightBaseCurve;
@property (nonatomic) BOOL hasRightContactDiameter;
@property (nonatomic) BOOL hasRightCylinder;
@property (nonatomic) BOOL hasRightFarPupillaryDistance;
@property (nonatomic) BOOL hasRightNearPupillaryDistance;
@property (nonatomic) BOOL hasRightPrismAmount;
@property (nonatomic) BOOL hasRightPrismAngle;
@property (nonatomic) BOOL hasRightSphere;
@property (nonatomic) BOOL hasRightVertexDistance;
@property (readonly, nonatomic) BOOL hasSample;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat leftAddPower; // ivar: _leftAddPower
@property (nonatomic) CGFloat leftAxis; // ivar: _leftAxis
@property (nonatomic) CGFloat leftBaseCurve; // ivar: _leftBaseCurve
@property (nonatomic) CGFloat leftContactDiameter; // ivar: _leftContactDiameter
@property (nonatomic) CGFloat leftCylinder; // ivar: _leftCylinder
@property (nonatomic) CGFloat leftFarPupillaryDistance; // ivar: _leftFarPupillaryDistance
@property (nonatomic) CGFloat leftNearPupillaryDistance; // ivar: _leftNearPupillaryDistance
@property (nonatomic) CGFloat leftPrismAmount; // ivar: _leftPrismAmount
@property (nonatomic) CGFloat leftPrismAngle; // ivar: _leftPrismAngle
@property (nonatomic) CGFloat leftSphere; // ivar: _leftSphere
@property (nonatomic) CGFloat leftVertexDistance; // ivar: _leftVertexDistance
@property (nonatomic) NSInteger prescriptionType; // ivar: _prescriptionType
@property (nonatomic) CGFloat rightAddPower; // ivar: _rightAddPower
@property (nonatomic) CGFloat rightAxis; // ivar: _rightAxis
@property (nonatomic) CGFloat rightBaseCurve; // ivar: _rightBaseCurve
@property (nonatomic) CGFloat rightContactDiameter; // ivar: _rightContactDiameter
@property (nonatomic) CGFloat rightCylinder; // ivar: _rightCylinder
@property (nonatomic) CGFloat rightFarPupillaryDistance; // ivar: _rightFarPupillaryDistance
@property (nonatomic) CGFloat rightNearPupillaryDistance; // ivar: _rightNearPupillaryDistance
@property (nonatomic) CGFloat rightPrismAmount; // ivar: _rightPrismAmount
@property (nonatomic) CGFloat rightPrismAngle; // ivar: _rightPrismAngle
@property (nonatomic) CGFloat rightSphere; // ivar: _rightSphere
@property (nonatomic) CGFloat rightVertexDistance; // ivar: _rightVertexDistance
@property (retain, nonatomic) HDCodableSample *sample; // ivar: _sample
@property (readonly) Class superclass;


-(BOOL)applyToObject:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif