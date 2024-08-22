// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSGFTMETRICSJOINCYCLE_H
#define IDSGFTMETRICSJOINCYCLE_H



#import "IDSGFTMetricsReferencePoint.h"

@interface IDSGFTMetricsJoinCycle : IDSGFTMetricsReferencePoint {
    CGFloat _remoteActiveTime;
}




-(CGFloat)referenceTimeForTimeBase:(CGFloat)arg0 ;
-(id)initWithFromType:(id)arg0 fromUniqueID:(id)arg1 anonymizer:(id)arg2 template:(id)arg3 ;
-(void)decryptedBlobOverQUIC:(id)arg0 ;
-(void)localDidJoin;
-(void)localDidJoinAtTime:(CGFloat)arg0 ;
-(void)receivedAllocateResponseAtTime:(CGFloat)arg0 ;
-(void)receivedKMOverPush;
-(void)receivedKMOverPushViaCache;
-(void)receivedKMOverPushViaCacheAtTime:(CGFloat)arg0 ;
-(void)receivedKMOverQR;
-(void)receivedKMOverQUIC;
-(void)receivedPreKeyOverPush;
-(void)receivedPreKeyOverQUIC;
-(void)receivedUnverifiedKMOverQUIC;
-(void)remoteDidBecomeActive;
-(void)remoteDidJoin;
-(void)requestedKM;


@end


#endif