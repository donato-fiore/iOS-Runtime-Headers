// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXREMOTERECEIVER_H
#define AXREMOTERECEIVER_H

@class RPCompanionLinkClient;
@protocol OS_dispatch_queue, AXRemoteReceiverDelegate;

#import <Foundation/Foundation.h>


@interface AXRemoteReceiver : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) RPCompanionLinkClient *companionLinkClient; // ivar: _companionLinkClient
@property (weak, nonatomic) NSObject<AXRemoteReceiverDelegate> *delegate; // ivar: _delegate


-(id)initWithEventID:(id)arg0 delegate:(id)arg1 ;


@end


#endif