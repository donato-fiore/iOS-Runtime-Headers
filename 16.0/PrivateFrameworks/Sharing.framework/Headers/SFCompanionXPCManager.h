// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCOMPANIONXPCMANAGER_H
#define SFCOMPANIONXPCMANAGER_H

@class NSXPCConnection, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SFCompanionXPCManager : NSObject

@property (retain) NSXPCConnection *connection; // ivar: _connection
@property BOOL interrupted; // ivar: _interrupted
@property (getter=isInvalid) BOOL invalid; // ivar: _invalid
@property int listenerResumedToken; // ivar: _listenerResumedToken
@property (retain) NSMutableArray *observers; // ivar: _observers
@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue; // ivar: _xpcSetupQueue


+(id)hotspotClientInterface;
+(id)hotspotInterface;
+(id)serviceManagerClientInterface;
+(id)serviceManagerInterface;
+(id)sharedManager;
+(id)unlockInterface;
+(id)xpcManagerInterface;
+(void)initialize;
-(id)init;
-(void)appleAccountSignedIn;
-(void)appleAccountSignedOut;
-(void)dealloc;
-(void)notifyOfInterruption;
-(void)notifyOfInvalidation;
-(void)notifyOfResume;
-(void)registerObserver:(id)arg0 ;
-(void)remoteHotspotSessionForClient:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)serviceManagerProxyForIdentifier:(id)arg0 client:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setupConnection;
-(void)streamsForMessage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)unlockManagerWithCompletionHandler:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;
-(void)updateLowLatencyFilter:(id)arg0 isAddFilter:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif