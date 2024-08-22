// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCRATECONTROLBANDWIDTHESTIMATORMAP_H
#define VCRATECONTROLBANDWIDTHESTIMATORMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VCRateControlBandwidthEstimator.h"
#import "VCRateControlServerBag.h"

@interface VCRateControlBandwidthEstimatorMap : NSObject {
    CGFloat _estimatedBandwidth;
    CGFloat _estimatedBandwidthUncapped;
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
    VCRateControlBandwidthEstimator *_defaultEstimator;
    int _bandwidthEstimationState;
    *void _logBWEDump;
}


@property (readonly, nonatomic) int bandwidthEstimationState;
@property (nonatomic) CGFloat estimatedBandwidth;
@property (nonatomic) CGFloat estimatedBandwidthUncapped;
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled; // ivar: _fastSuddenBandwidthDetectionEnabled
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (nonatomic) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (retain, nonatomic) VCRateControlServerBag *serverBag; // ivar: _serverBag


-(id)init;
-(void)dealloc;
-(void)enableBWELogDump:(*void)arg0 ;


@end


#endif