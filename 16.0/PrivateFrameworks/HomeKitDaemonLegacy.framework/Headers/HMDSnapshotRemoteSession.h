// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSNAPSHOTREMOTESESSION_H
#define HMDSNAPSHOTREMOTESESSION_H



#import "HMDSnapshotSession.h"

@interface HMDSnapshotRemoteSession : HMDSnapshotSession



-(id)description;
-(id)initWithSessionID:(id)arg0 accessory:(id)arg1 snapshotGetter:(id)arg2 message:(id)arg3 waitPeriod:(CGFloat)arg4 streamingTierType:(NSUInteger)arg5 cameraLocallyReachable:(BOOL)arg6 ;


@end


#endif