// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCEMULATEDNETWORKDOUBLEQUEUE_H
#define VCEMULATEDNETWORKDOUBLEQUEUE_H



#import "VCEmulatedNetwork.h"
#import "VCEmulatedNetworkQueue.h"

@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueueA;
    VCEmulatedNetworkQueue *_networkQueueB;
}




-(id)initWithPolicies:(id)arg0 ;
-(void)dealloc;
-(void)push:(id)arg0 ;
-(void)runUntilTime:(CGFloat)arg0 ;


@end


#endif