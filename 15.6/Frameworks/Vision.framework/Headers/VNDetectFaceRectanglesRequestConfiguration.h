// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNDETECTFACERECTANGLESREQUESTCONFIGURATION_H
#define VNDETECTFACERECTANGLESREQUESTCONFIGURATION_H

@class NSNumber;


#import "VNImageBasedRequestConfiguration.h"

@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration

@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization; // ivar: _faceCoreEnhanceEyesAndMouthLocalization
@property (nonatomic) BOOL faceCoreExtractBlink; // ivar: _faceCoreExtractBlink
@property (nonatomic) BOOL faceCoreExtractSmile; // ivar: _faceCoreExtractSmile
@property (retain, nonatomic) NSNumber *faceCoreMinFaceSize; // ivar: _faceCoreMinFaceSize
@property (retain, nonatomic) NSNumber *faceCoreNumberOfDetectionAngles; // ivar: _faceCoreNumberOfDetectionAngles
@property (nonatomic) NSUInteger faceCoreType; // ivar: _faceCoreType
@property (nonatomic) float precisionRecallThreshold; // ivar: _precisionRecallThreshold


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif