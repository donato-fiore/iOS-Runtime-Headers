// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDSNAPSHOTSESSION_H
#define HMDSNAPSHOTSESSION_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMFLogging, HMDCameraGetSnapshotProtocol;


#import "HMDCameraSnapshotSessionID.h"
#import "HMDSnapshotCompletionTimer.h"
#import "HMDCameraSnapshotMetrics.h"

@interface HMDSnapshotSession : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) NSMutableArray *sessionMessages; // ivar: _sessionMessages
@property (readonly, nonatomic) HMDSnapshotCompletionTimer *snapshotCompletionTimer; // ivar: _snapshotCompletionTimer
@property (readonly, nonatomic) NSObject<HMDCameraGetSnapshotProtocol> *snapshotGetter; // ivar: _snapshotGetter
@property (readonly, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics; // ivar: _snapshotMetrics
@property (readonly, nonatomic) NSUInteger streamingTierType; // ivar: _streamingTierType
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 accessory:(id)arg1 snapshotGetter:(id)arg2 message:(id)arg3 waitPeriod:(CGFloat)arg4 streamingTierType:(NSUInteger)arg5 cameraLocallyReachable:(BOOL)arg6 snapshotForNotification:(BOOL)arg7 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)respond:(id)arg0 payload:(id)arg1 ;


@end


#endif