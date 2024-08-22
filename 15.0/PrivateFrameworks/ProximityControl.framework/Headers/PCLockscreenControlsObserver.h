// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCLOCKSCREENCONTROLSOBSERVER_H
#define PCLOCKSCREENCONTROLSOBSERVER_H

@class NSMutableDictionary, NSXPCConnection, NSString;
@protocol NSSecureCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCLockscreenControlsObserver : NSObject <NSSecureCoding>

 {
    BOOL _activateCalled;
    NSMutableDictionary *_devices;
    BOOL _invalidated;
    *LogCategory _ucat;
    NSXPCConnection *_xpcCnx;
}


@property (copy, nonatomic) id *deviceLost; // ivar: _deviceLost
@property (copy, nonatomic) id *deviceUpdated; // ivar: _deviceUpdated
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *processName; // ivar: _processName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)knownDevices;
-(void)_interrupted;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_xpcEnsureStarted;
-(void)_xpcEnsureStopped;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)deviceLost:(id)arg0 ;
-(void)deviceUpdated:(id)arg0 ;
-(void)didSwitchRouteToDevice:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif