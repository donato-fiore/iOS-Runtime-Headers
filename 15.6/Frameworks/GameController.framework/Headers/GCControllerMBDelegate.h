// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GCCONTROLLERMBDELEGATE_H
#define GCCONTROLLERMBDELEGATE_H

@class NSTimer;

#import <Foundation/Foundation.h>


@interface GCControllerMBDelegate : NSObject {
    *BTSessionImpl _session;
    *BTPairingAgentImpl _pairingAgent;
    *BTDiscoveryAgentImpl _discoveryAgent;
    NSTimer *_timer;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


-(void)dealloc;
-(void)fireCompletionHandler;
-(void)scanTimeout:(id)arg0 ;
-(void)startScan;
-(void)stopScan;


@end


#endif