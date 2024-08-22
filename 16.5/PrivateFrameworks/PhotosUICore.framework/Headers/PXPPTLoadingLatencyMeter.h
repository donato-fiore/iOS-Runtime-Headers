// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPPTLOADINGLATENCYMETER_H
#define PXPPTLOADINGLATENCYMETER_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PXPPTLoadingLatencyMeter : NSObject {
    ? _lowQualityResults;
    ? _mediumQualityResults;
    ? _highQualityResults;
    NSString *_outputType;
}


@property (readonly, nonatomic) NSDictionary *measurementsDictionaryRepresentation;
@property (retain, nonatomic) NSString *measurementsUnit; // ivar: _measurementsUnit


+(id)sharedInstance;
+(void)startMeasurementsForOutputType:(id)arg0 ;
+(void)stopMeasurements;
-(id)_measurementsDictionaryForOutputQuality:(NSInteger)arg0 ;
-(id)initWithOutputType:(id)arg0 ;
-(struct ? )measurementsForOutputQuality:(NSInteger)arg0 ;
-(void)reportLatency:(CGFloat)arg0 forOutputQuality:(NSInteger)arg1 ;


@end


#endif