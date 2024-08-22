// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WIFIUSAGELQMKERNELSAMPLEPERACTXSTATSMCAST_H
#define WIFIUSAGELQMKERNELSAMPLEPERACTXSTATSMCAST_H



#import "WiFiUsageLQMKernelSamplePerACTxStats.h"

@interface WiFiUsageLQMKernelSamplePerACTxStatsMcast : WiFiUsageLQMKernelSamplePerACTxStats

@property (readonly, nonatomic) NSUInteger txMcast; // ivar: _txMcast
@property (readonly, nonatomic) NSUInteger txMcastAllFailPerc; // ivar: _txMcastAllFailPerc
@property (readonly, nonatomic) NSUInteger txMcastChipModeErrPerc; // ivar: _txMcastChipModeErrPerc
@property (readonly, nonatomic) NSUInteger txMcastDroppedPerc; // ivar: _txMcastDroppedPerc
@property (readonly, nonatomic) NSUInteger txMcastExpiredPerc; // ivar: _txMcastExpiredPerc
@property (readonly, nonatomic) NSUInteger txMcastFailPerc; // ivar: _txMcastFailPerc
@property (readonly, nonatomic) NSUInteger txMcastForceExpirePerc; // ivar: _txMcastForceExpirePerc
@property (readonly, nonatomic) NSUInteger txMcastFwFreePerc; // ivar: _txMcastFwFreePerc
@property (readonly, nonatomic) NSUInteger txMcastMaxRetriesPerc; // ivar: _txMcastMaxRetriesPerc
@property (readonly, nonatomic) NSUInteger txMcastNoAckPerc; // ivar: _txMcastNoAckPerc
@property (readonly, nonatomic) NSUInteger txMcastNoBuffPerc; // ivar: _txMcastNoBuffPerc
@property (readonly, nonatomic) NSUInteger txMcastNoResPerc; // ivar: _txMcastNoResPerc
@property (readonly, nonatomic) NSUInteger txMcastSuccessPerc; // ivar: _txMcastSuccessPerc


-(void)transformTXStats;


@end


#endif