// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCEMULATEDNETWORKDOUBLEQUEUEREORDER_H
#define VCEMULATEDNETWORKDOUBLEQUEUEREORDER_H



#import "VCEmulatedNetworkDoubleQueue.h"

@interface VCEmulatedNetworkDoubleQueueReorder : VCEmulatedNetworkDoubleQueue {
    CGFloat _probability;
    CGFloat _correlation;
    BOOL _useMarkovModel;
    int _reorderGap;
    int _gap;
    int _state;
}




-(BOOL)shouldSendPacketImmediatelyMM;
-(id)initWithPolicies:(id)arg0 ;
-(void)dealloc;
-(void)push:(id)arg0 ;


@end


#endif