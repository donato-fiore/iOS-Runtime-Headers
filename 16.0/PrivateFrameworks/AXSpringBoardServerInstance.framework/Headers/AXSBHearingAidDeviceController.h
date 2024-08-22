// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSBHEARINGAIDDEVICECONTROLLER_H
#define AXSBHEARINGAIDDEVICECONTROLLER_H

@class NSString, NSDictionary, NSTimer;
@protocol AXUIClientDelegate, AXHAServerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate>

 {
    CGFloat _routeChangedTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hearingAidIsConnected; // ivar: _hearingAidIsConnected
@property (nonatomic) BOOL holdingMediaForConnection; // ivar: _holdingMediaForConnection
@property (nonatomic) BOOL holdingPhoneForConnection; // ivar: _holdingPhoneForConnection
@property (nonatomic) BOOL isShowingHearingAidControl; // ivar: isShowingHearingAidControl
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mediaUpdateQueue; // ivar: _mediaUpdateQueue
@property (retain, nonatomic) NSDictionary *preferredRoute; // ivar: _preferredRoute
@property (retain, nonatomic) NSTimer *preferredRouteTimer; // ivar: _preferredRouteTimer
@property (nonatomic) BOOL shouldIgnoreRouteChanges; // ivar: _shouldIgnoreRouteChanges
@property (readonly) Class superclass;


+(id)sharedController;
-(BOOL)isScreenLocked;
-(id)hearingUIClient;
-(id)init;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)_lockStateChanged;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dealloc;
-(void)hearingServerDidDie:(id)arg0 ;
-(void)liveListenStatusBarActivated:(id)arg0 ;
-(void)showHearingAidControl:(BOOL)arg0 ;
-(void)startServer;


@end


#endif