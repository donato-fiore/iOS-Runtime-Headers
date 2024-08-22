// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCINTENTDEFINITIONSYNCDATAHANDLER_H
#define VCINTENTDEFINITIONSYNCDATAHANDLER_H



#import "VCSyncDataHandler.h"
#import "VCDaemonXPCEventHandler.h"

@interface VCIntentDefinitionSyncDataHandler : VCSyncDataHandler

@property (readonly, nonatomic) VCDaemonXPCEventHandler *eventHandler; // ivar: _eventHandler


+(int)messageType;
-(BOOL)applyChanges:(id)arg0 fromSyncService:(id)arg1 error:(*id)arg2 ;
-(BOOL)deleteSyncedData:(*id)arg0 ;
-(BOOL)markChangesAsSynced:(id)arg0 withSyncService:(id)arg1 metadata:(id)arg2 error:(*id)arg3 ;
-(BOOL)resetSyncStateForService:(id)arg0 error:(*id)arg1 ;
-(id)initWithEventHandler:(id)arg0 ;
-(id)unsyncedChangesForSyncService:(id)arg0 metadata:(*id)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)installedApplicationsDidChange:(id)arg0 ;


@end


#endif