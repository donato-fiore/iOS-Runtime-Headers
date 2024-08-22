// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NVIDIRECTIONALITYSIGNALDATA_H
#define NVIDIRECTIONALITYSIGNALDATA_H

@class NSDictionary, NSArray;


#import "NviSignalData.h"

@interface NviDirectionalitySignalData : NviSignalData

@property (retain, nonatomic) NSDictionary *azDistribution; // ivar: _azDistribution
@property (nonatomic) float azimuth; // ivar: _azimuth
@property (nonatomic) float confidence; // ivar: _confidence
@property (nonatomic) NSUInteger endSample; // ivar: _endSample
@property (nonatomic) float estimatedAzimuth; // ivar: _estimatedAzimuth
@property (readonly, nonatomic) float mostSampledAzimuth;
@property (nonatomic) CGFloat processedAudioDurMs; // ivar: _processedAudioDurMs
@property (retain, nonatomic) NSArray *spatialSpectrumData; // ivar: _spatialSpectrumData
@property (nonatomic) NSUInteger startSample; // ivar: _startSample


+(id)headerString;
-(id)_spatialSpectrumLogStr;
-(id)description;
-(id)initWithStartSample:(NSUInteger)arg0 endSample:(NSUInteger)arg1 confidence:(float)arg2 azimuth:(float)arg3 estimatedAzimuth:(float)arg4 ;
-(id)stringForLogging;


@end


#endif