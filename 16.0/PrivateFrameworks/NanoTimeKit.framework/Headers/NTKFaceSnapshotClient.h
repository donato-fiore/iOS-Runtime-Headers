// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACESNAPSHOTCLIENT_H
#define NTKFACESNAPSHOTCLIENT_H

@class NSXPCConnection, NSString;
@protocol NTKFaceSnapshotClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKFaceSnapshotClient : NSObject <NTKFaceSnapshotClient>

 {
    NSXPCConnection *_daemonConnection;
    BOOL _registrationNeeded;
    NSObject<OS_dispatch_queue> *_snapshotFileQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_askDaemonForSnapshotOfDescriptor:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_askXPCServiceForSnapshotOfDescriptor:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)_handleActiveDeviceChangedNotification;
-(void)_handleConnectionInterrupted;
-(void)_handleCustomMonogramChangedNotification;
-(void)_handleSignificantLocationChangeNotification;
-(void)_register;
-(void)_registerIfNeeded;
-(void)_setupDaemonConnection;
-(void)_updateAllSnapshots;
-(void)dealloc;
-(void)faceSnapshotChangedForKey:(id)arg0 ;
-(void)performAfterCompletingCurrentlyPendingSnapshots:(id)arg0 ;
-(void)requestSnapshotOfFace:(id)arg0 ;
-(void)snapshotFace:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)snapshotLibrarySelectedFaceForDeviceUUID:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)synchronouslyUpdateAllSnapshots;


@end


#endif