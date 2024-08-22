// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSSERVICEMOUNTPOINT_H
#define LIVEFSSERVICEMOUNTPOINT_H

@class NSMapTable;
@protocol NSFileProviderLiveItemConnectionCoordination;

#import <Foundation/Foundation.h>


@interface LiveFSServiceMountPoint : NSObject <NSFileProviderLiveItemConnectionCoordination>

 {
    NSUInteger validConnections;
    int connectionCount;
    NSMapTable *_currentConnections;
}


@property (readonly) BOOL hasPersistentFileIDs; // ivar: _hasPersistentFileIDs
@property (readonly) BOOL renameChangesFileID; // ivar: _renameChangesFileID
@property NSUInteger workingSetInterest; // ivar: _workingSetInterest


-(NSUInteger)LICCnewConnectionIDOrError:(*id)arg0 ;
-(id)init;
-(void)LICCinvalidateFileNodesForConnection:(NSUInteger)arg0 ;
-(void)LICCreleaseConnectionAllocation:(NSUInteger)arg0 ;
-(void)LISMPUpdateDeletedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 how:(int)arg3 interestedClients:(NSUInteger)arg4 ;
-(void)LISMPUpdateDeletedName:(id)arg0 item:(id)arg1 interestedItem:(id)arg2 how:(int)arg3 interestedClients:(NSUInteger)arg4 ;
-(void)LISMPUpdateDone:(id)arg0 interestedClients:(NSUInteger)arg1 ;
-(void)LISMPUpdateHistoryResetItem:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)LISMPUpdateHistoryResetName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)LISMPUpdateItem:(id)arg0 nameOrPath:(id)arg1 interestedItem:(id)arg2 interestedClients:(NSUInteger)arg3 op:(int)arg4 ;
-(void)LISMPUpdateRenameFrom:(id)arg0 fromName:(id)arg1 fromID:(id)arg2 intoItem:(id)arg3 toName:(id)arg4 overID:(id)arg5 interestedClients:(NSUInteger)arg6 ;
-(void)LISMPUpdateUpdatedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 interestedClients:(NSUInteger)arg3 ;
-(void)LISMPUpdateUpdatedName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)LISMPUpdateVolumeWideDeletedName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)LISMPUpdateVolumeWideUpdatedName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)LISMPinvalidateAllConnections;
-(void)rememberConnection:(id)arg0 forID:(NSUInteger)arg1 ;


@end


#endif