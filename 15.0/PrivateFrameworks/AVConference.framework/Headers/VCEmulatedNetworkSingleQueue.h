// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCEMULATEDNETWORKSINGLEQUEUE_H
#define VCEMULATEDNETWORKSINGLEQUEUE_H



#import "VCEmulatedNetwork.h"
#import "VCEmulatedNetworkQueue.h"

@interface VCEmulatedNetworkSingleQueue : VCEmulatedNetwork {
    VCEmulatedNetworkQueue *_networkQueue;
}




-(id)initWithPolicies:(id)arg0 ;
-(void)dealloc;
-(void)push:(id)arg0 ;
-(void)runUntilTime:(CGFloat)arg0 ;


@end


#endif