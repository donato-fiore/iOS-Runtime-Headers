// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIVALUESATCAPTURE_H
#define PIVALUESATCAPTURE_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface PIValuesAtCapture : NSObject

@property (nonatomic) NSUInteger SDOFRenderingVersion; // ivar: _SDOFRenderingVersion
@property (nonatomic) float aperture; // ivar: _aperture
@property (nonatomic) ? depthVersionInfo; // ivar: _depthVersionInfo
@property (retain, nonatomic) NSNumber *maximumAperture; // ivar: _maximumAperture
@property (retain, nonatomic) NSNumber *minimumAperture; // ivar: _minimumAperture
@property (nonatomic) NSUInteger portraitMajorVersion; // ivar: _portraitMajorVersion
@property (nonatomic) NSUInteger portraitMinorVersion; // ivar: _portraitMinorVersion
@property (nonatomic) float portraitStrength; // ivar: _portraitStrength


+(id)valuesAtCaptureFromImageProperties:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initFromMinAperture:(float)arg0 maxAperture:(float)arg1 aperture:(float)arg2 portraitStrength:(float)arg3 SDOFRenderingVersion:(NSUInteger)arg4 depthVersionInfo:(struct ? )arg5 ;


@end


#endif