// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMCRFRESTOREFLOW_H
#define DMCRFRESTOREFLOW_H

@protocol DMCRFDeviceEnvironment, DMCRFInteractionClient, DMCRFSnapshotSource;

#import <Foundation/Foundation.h>


@interface DMCRFRestoreFlow : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSObject<DMCRFDeviceEnvironment> *deviceEnvironment; // ivar: _deviceEnvironment
@property (retain, nonatomic) NSObject<DMCRFInteractionClient> *interactionClient; // ivar: _interactionClient
@property (retain, nonatomic) NSObject<DMCRFSnapshotSource> *snapshotSource; // ivar: _snapshotSource


+(id)_intersectionOfSet:(id)arg0 set:(id)arg1 ;
-(id)_appBundleIdentifiersSetDebugDescription:(id)arg0 ;
-(id)initWithSnapshotSource:(id)arg0 interactionClient:(id)arg1 deviceEnvironment:(id)arg2 completion:(id)arg3 ;
-(void)_checkSnapshotForConflictingApps:(id)arg0 ;
-(void)_compareAppsOnDeviceToAppBundleIdentifiers:(id)arg0 fromSnapshot:(id)arg1 ;
-(void)_handleSnapshots:(id)arg0 ;
-(void)_restoreSnapshot:(id)arg0 skippingApps:(id)arg1 ;
-(void)_restoreSnapshotNoConflicts:(id)arg0 ;
-(void)startManagedRestoreWorkflow;


@end


#endif