// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AWSAMPLELOGDATA_H
#define AWSAMPLELOGDATA_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AWSampleLogData : NSObject

@property (nonatomic) NSUInteger cumulativeSamplingTime; // ivar: _cumulativeSamplingTime
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) BOOL pollingClient; // ivar: _pollingClient
@property (nonatomic) NSUInteger samplingInterval; // ivar: _samplingInterval
@property (nonatomic) NSUInteger samplingStartTime; // ivar: _samplingStartTime




@end


#endif