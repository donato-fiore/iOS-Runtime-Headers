// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDSNAPSHOTLOCALSESSION_H
#define HMDSNAPSHOTLOCALSESSION_H



#import "HMDSnapshotSession.h"

@interface HMDSnapshotLocalSession : HMDSnapshotSession



-(id)description;
-(id)initWithSessionID:(id)arg0 accessory:(id)arg1 snapshotGetter:(id)arg2 message:(id)arg3 waitPeriod:(CGFloat)arg4 reachabilityPath:(NSUInteger)arg5 cameraLocallyReachable:(BOOL)arg6 snapshotForNotification:(BOOL)arg7 ;
-(void)addMessage:(id)arg0 ;


@end


#endif