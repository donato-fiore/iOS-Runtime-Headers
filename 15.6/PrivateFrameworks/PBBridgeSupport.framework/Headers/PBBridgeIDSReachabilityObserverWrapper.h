// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBBRIDGEIDSREACHABILITYOBSERVERWRAPPER_H
#define PBBRIDGEIDSREACHABILITYOBSERVERWRAPPER_H

@protocol PBBridgeIDSReachabilityObserver;

#import <Foundation/Foundation.h>


@interface PBBridgeIDSReachabilityObserverWrapper : NSObject

@property (weak, nonatomic) NSObject<PBBridgeIDSReachabilityObserver> *observer; // ivar: _observer


-(void)fireReachability:(id)arg0 deviceStatus:(id)arg1 devices:(id)arg2 ;


@end


#endif