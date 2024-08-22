// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGMETADATAOBJECTCAPTURECONNECTIONCONFIGURATION_H
#define FIGMETADATAOBJECTCAPTURECONNECTIONCONFIGURATION_H

@class NSArray;


#import "FigCaptureConnectionConfiguration.h"

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration

@property (nonatomic) int faceTrackingMaxFaces; // ivar: _faceTrackingMaxFaces
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier; // ivar: _faceTrackingNetworkFailureThresholdMultiplier
@property (nonatomic) BOOL faceTrackingPlusEnabled; // ivar: _faceTrackingPlusEnabled
@property (nonatomic) BOOL faceTrackingUsesFaceRecognition; // ivar: _faceTrackingUsesFaceRecognition
@property (copy, nonatomic) NSArray *metadataIdentifiers; // ivar: _metadataIdentifiers
@property (nonatomic) CGRect metadataRectOfInterest; // ivar: _metadataRectOfInterest


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)description;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif