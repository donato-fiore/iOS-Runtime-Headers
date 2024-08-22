// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARDEPTHPOINTCLOUDCOALESCER_H
#define ARDEPTHPOINTCLOUDCOALESCER_H

@class ADPointCloudAggregator, ADAggregationParameters;

#import <Foundation/Foundation.h>


@interface ARDepthPointCloudCoalescer : NSObject {
    ADPointCloudAggregator *_aggregator;
}


@property (readonly, nonatomic) ADAggregationParameters *aggregationParameters; // ivar: _aggregationParameters


-(id)depthPointCloudWithPose:(id)arg0 imageData:(id)arg1 ;
-(id)init;
-(id)initWithAggregationParameters:(id)arg0 ;
-(void)_commonInit:(id)arg0 calibration:(id)arg1 ;
-(void)addDepthPointCloudData:(id)arg0 ;
-(void)flush;


@end


#endif