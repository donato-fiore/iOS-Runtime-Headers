// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCREMOTEACTIVITYCLIENT_H
#define PCREMOTEACTIVITYCLIENT_H

@protocol NSSecureCoding, PCActivatable, OS_dispatch_queue, NSXPCProxyCreating;

#import <Foundation/Foundation.h>


@interface PCRemoteActivityClient : NSObject <NSSecureCoding, PCActivatable>

 {
    *LogCategory _ucat;
}


@property (copy, nonatomic) id *activityDataUpdateHandler; // ivar: _activityDataUpdateHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *homeKitUpdateHandler; // ivar: _homeKitUpdateHandler
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *mediaRemoteUpdateHandler; // ivar: _mediaRemoteUpdateHandler
@property (copy, nonatomic) id *uiWillDismissHandler; // ivar: _uiWillDismissHandler
@property (copy, nonatomic) id *updateHandler; // ivar: _updateHandler
@property (retain, nonatomic) NSObject<NSXPCProxyCreating> *xpcCnx; // ivar: _xpcCnx


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)userActivitySetFromData:(id)arg0 ;
-(void)_activateWithCompletion:(id)arg0 ;
-(void)_interrupted;
-(void)_invalidate;
-(void)_invalidated;
-(void)_xpcEnsureStarted;
-(void)_xpcEnsureStopped;
-(void)activateWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)interrupted;
-(void)invalidate;
-(void)startObservingDeviceWithIdentifier:(id)arg0 ;
-(void)startObservingHomeKitIdentifier:(id)arg0 ;
-(void)startObservingMediaRemoteIdentifier:(id)arg0 ;
-(void)stopObservingAllDevices;
-(void)stopObservingDeviceWithIdentifier:(id)arg0 ;
-(void)stopObservingHomeKitIdentifier:(id)arg0 ;
-(void)stopObservingMediaRemoteIdentifier:(id)arg0 ;
-(void)updateHomeKitID:(id)arg0 mediaRemoteID:(id)arg1 withActivities:(id)arg2 disambiguationContext:(id)arg3 ;
-(void)updateHomeKitID:(id)arg0 withActivities:(id)arg1 disambiguationContext:(id)arg2 ;
-(void)updateMediaRemoteID:(id)arg0 withActivities:(id)arg1 disambiguationContext:(id)arg2 ;
-(void)userTappedCloseButton;
-(void)userTappedDisambiguationButton:(id)arg0 ;


@end


#endif