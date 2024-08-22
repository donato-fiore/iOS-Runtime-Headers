// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIASTREAMSENDGROUPCONFIG_H
#define VCMEDIASTREAMSENDGROUPCONFIG_H



#import "VCMediaStreamGroupConfig.h"
#import "VCSessionUplinkBandwidthAllocator.h"

@interface VCMediaStreamSendGroupConfig : VCMediaStreamGroupConfig

@property (nonatomic) BOOL shouldSynchronizeWithSourceRTPTimestamps; // ivar: _shouldSynchronizeWithSourceRTPTimestamps
@property (retain, nonatomic) VCSessionUplinkBandwidthAllocator *uplinkBandwidthAllocator; // ivar: _uplinkBandwidthAllocator


-(void)dealloc;


@end


#endif