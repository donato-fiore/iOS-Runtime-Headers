// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCRATECONTROLBANDWIDTHESTIMATORMAP_H
#define VCRATECONTROLBANDWIDTHESTIMATORMAP_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "VCRateControlBandwidthEstimator.h"
#import "VCRateControlServerBag.h"

@interface VCRateControlBandwidthEstimatorMap : NSObject {
    NSMutableDictionary *_estimatorMap;
    unsigned int _currentActiveEstimatorID;
    int _state;
    VCRateControlBandwidthEstimator *_defaultEstimator;
    int _bandwidthEstimationState;
    *void _logBWEDump;
}


@property (readonly, nonatomic) int bandwidthEstimationState;
@property (nonatomic) CGFloat estimatedBandwidth; // ivar: _estimatedBandwidth
@property (nonatomic) CGFloat estimatedBandwidthUncapped; // ivar: _estimatedBandwidthUncapped
@property (nonatomic) BOOL fastSuddenBandwidthDetectionEnabled; // ivar: _fastSuddenBandwidthDetectionEnabled
@property (nonatomic) unsigned int mode; // ivar: _mode
@property (nonatomic) unsigned int radioAccessTechnology; // ivar: _radioAccessTechnology
@property (retain, nonatomic) VCRateControlServerBag *serverBag; // ivar: _serverBag


-(CGFloat)estimatedBandwidthUncappedWithArrivalTime:(CGFloat)arg0 ;
-(CGFloat)estimatedBandwidthWithArrivalTime:(CGFloat)arg0 ;
-(id)bandwidthEstimatorWithID:(unsigned int)arg0 isProbingSequence:(BOOL)arg1 isEndOfProbingSequence:(BOOL)arg2 ;
-(id)init;
-(void)dealloc;
-(void)deregisterBandwidthEstimatorWithID:(unsigned int)arg0 ;
-(void)enableBWELogDump:(*void)arg0 ;


@end


#endif