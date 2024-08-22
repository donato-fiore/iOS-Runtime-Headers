// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSTINKERCONNECTIONTRACKER_H
#define BPSTINKERCONNECTIONTRACKER_H

@class PBBridgeIDSReachability, NSString, NRDevice;
@protocol PBBridgeIDSReachabilityObserver, BPSTinkerConnectionTrackerDelegate;

#import <Foundation/Foundation.h>


@interface BPSTinkerConnectionTracker : NSObject <PBBridgeIDSReachabilityObserver>

 {
    PBBridgeIDSReachability *_reachability;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BPSTinkerConnectionTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NRDevice *selectedDevice; // ivar: _selectedDevice
@property (readonly) Class superclass;


-(id)initWithDevice:(id)arg0 ;
-(void)dealloc;
-(void)reachability:(id)arg0 device:(id)arg1 connectionStatus:(NSUInteger)arg2 ;


@end


#endif