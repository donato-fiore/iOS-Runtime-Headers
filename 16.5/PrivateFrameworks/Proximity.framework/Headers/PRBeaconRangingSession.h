// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRBEACONRANGINGSESSION_H
#define PRBEACONRANGINGSESSION_H

@class NSString;
@protocol PRBeaconListenerDelegate, OS_os_log, OS_dispatch_queue, PRBeaconRangingSessionDelegate;

#import <Foundation/Foundation.h>

#import "PRBeaconListener.h"
#import "PRBeaconDescriptor.h"

@interface PRBeaconRangingSession : NSObject <PRBeaconListenerDelegate>

 {
    NSObject<OS_os_log> *_logger;
    NSObject<OS_dispatch_queue> *_queue;
    PRBeaconListener *_beaconListener;
    NSUInteger _beaconListenerState;
    PRBeaconDescriptor *_activeDescriptor;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PRBeaconRangingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)beaconListener:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)beaconListener:(id)arg0 didFailWithError:(id)arg1 ;
-(void)beaconListener:(id)arg0 didOutputRangeResults:(id)arg1 ;
-(void)didFailWithError:(id)arg0 ;
-(void)startRangingInternal;
-(void)startRangingWithBeaconsMatchingDescriptor:(id)arg0 ;
-(void)stopRangingInternal;
-(void)stopRangingWithBeaconsMatchingDescriptor:(id)arg0 ;


@end


#endif