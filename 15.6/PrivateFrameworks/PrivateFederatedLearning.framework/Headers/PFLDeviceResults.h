// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PFLDEVICERESULTS_H
#define PFLDEVICERESULTS_H

@class NSArray, NSData, NSURL, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface PFLDeviceResults : NSObject

@property (nonatomic) CGFloat accuracy; // ivar: _accuracy
@property (readonly, nonatomic) NSArray *flattenedMetricsMap;
@property (nonatomic) NSInteger flattenedPrivatizedWeightCount; // ivar: _flattenedPrivatizedWeightCount
@property (retain, nonatomic) NSData *flattenedPrivatizedWeightData; // ivar: _flattenedPrivatizedWeightData
@property (retain, nonatomic) NSURL *flattenedPrivatizedWeightDataURL; // ivar: _flattenedPrivatizedWeightDataURL
@property (retain, nonatomic) NSString *flattenedPrivatizedWeightType; // ivar: _flattenedPrivatizedWeightType
@property (nonatomic) CGFloat loss; // ivar: _loss
@property (retain, nonatomic) NSDictionary *metricsMap; // ivar: _metricsMap
@property (nonatomic) NSInteger modelVersion; // ivar: _modelVersion
@property (retain, nonatomic) NSString *replayIdentifier; // ivar: _replayIdentifier
@property (nonatomic) NSInteger schemaVersion; // ivar: _schemaVersion
@property (nonatomic) NSInteger shuffleId; // ivar: _shuffleId
@property (retain, nonatomic) NSString *taskId; // ivar: _taskId




@end


#endif