// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCMEDIASTREAMSENDGROUPCONFIG_H
#define VCMEDIASTREAMSENDGROUPCONFIG_H

@protocol VCRedundancyControllerProtocol;


#import "VCMediaStreamGroupConfig.h"
#import "AVCStatisticsCollector.h"

@interface VCMediaStreamSendGroupConfig : VCMediaStreamGroupConfig

@property (retain, nonatomic) NSObject<VCRedundancyControllerProtocol> *redundancyController; // ivar: _redundancyController
@property (nonatomic) unsigned int redundancyMode; // ivar: _redundancyMode
@property (nonatomic) unsigned int redundancyPercentage; // ivar: _redundancyPercentage
@property (nonatomic) BOOL shouldSynchronizeWithSourceRTPTimestamps; // ivar: _shouldSynchronizeWithSourceRTPTimestamps
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // ivar: _statisticsCollector
@property (nonatomic) unsigned int streamGroupMode; // ivar: _streamGroupMode


-(void)dealloc;


@end


#endif