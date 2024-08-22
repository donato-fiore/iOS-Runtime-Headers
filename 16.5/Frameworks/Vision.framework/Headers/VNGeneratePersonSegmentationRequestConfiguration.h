// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNGENERATEPERSONSEGMENTATIONREQUESTCONFIGURATION_H
#define VNGENERATEPERSONSEGMENTATIONREQUESTCONFIGURATION_H



#import "VNStatefulRequestConfiguration.h"

@interface VNGeneratePersonSegmentationRequestConfiguration : VNStatefulRequestConfiguration

@property (nonatomic) BOOL keepRawOutputMask; // ivar: _keepRawOutputMask
@property (nonatomic) float minimumConfidence; // ivar: _minimumConfidence
@property (nonatomic) unsigned int outputPixelFormat; // ivar: _outputPixelFormat
@property (nonatomic) NSUInteger qualityLevel; // ivar: _qualityLevel
@property (nonatomic) BOOL useTiling; // ivar: _useTiling


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif