// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIVEFSVOLUME_H
#define LIVEFSVOLUME_H

@class NSMapTable;
@protocol LiveFSConnectionCoordination, LiveFSVolumeImplementation;

#import <Foundation/Foundation.h>


@interface LiveFSVolume : NSObject <LiveFSConnectionCoordination, LiveFSVolumeImplementation>

 {
    NSUInteger validConnections;
    int connectionCount;
    NSMapTable *_currentConnections;
}


@property (readonly) BOOL hasPersistentFileIDs; // ivar: _hasPersistentFileIDs
@property (readonly) BOOL renameChangesFileID; // ivar: _renameChangesFileID
@property NSUInteger workingSetInterest; // ivar: _workingSetInterest


-(NSUInteger)newConnectionIDOrError:(*id)arg0 ;
-(id)init;
-(void)LISMPUpdateItem:(id)arg0 nameOrPath:(id)arg1 interestedItem:(id)arg2 interestedClients:(NSUInteger)arg3 op:(int)arg4 ;
-(void)abortAllClientSearchesFor:(NSUInteger)arg0 ;
-(void)abortSearch:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)blockmapFile:(id)arg0 range:(struct _NSRange )arg1 startIO:(int)arg2 flags:(unsigned int)arg3 bufFlags:(unsigned int)arg4 forPID:(int)arg5 requestID:(NSUInteger)arg6 reply:(id)arg7 ;
-(void)checkAccessTo:(id)arg0 requestedAccess:(unsigned int)arg1 requestID:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)close:(id)arg0 keepingMode:(int)arg1 forPID:(int)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)createIn:(id)arg0 named:(id)arg1 attributes:(id)arg2 forPID:(int)arg3 andClient:(NSUInteger)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)deletedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 how:(int)arg3 interestedClients:(NSUInteger)arg4 ;
-(void)deletedName:(id)arg0 item:(id)arg1 interestedItem:(id)arg2 how:(int)arg3 interestedClients:(NSUInteger)arg4 ;
-(void)endIO:(NSUInteger)arg0 range:(struct _NSRange )arg1 status:(int)arg2 flags:(unsigned int)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)fetchVolumeMachPortLabeled:(id)arg0 forClient:(NSUInteger)arg1 requestID:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)fileAttributes:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)historyResetItem:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)historyResetName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)invalidateAllConnections;
-(void)invalidateFileNodesForConnection:(NSUInteger)arg0 ;
-(void)itemRenamedIn:(id)arg0 named:(id)arg1 originalID:(id)arg2 intoDirectory:(id)arg3 newName:(id)arg4 atopItem:(id)arg5 interestedClients:(NSUInteger)arg6 ;
-(void)itemUpdatesDone:(id)arg0 interestedClients:(NSUInteger)arg1 ;
-(void)listXattrsOf:(id)arg0 forPID:(int)arg1 requestID:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)lookupin:(id)arg0 name:(id)arg1 forClient:(NSUInteger)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)makeCloneOf:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 attributes:(id)arg3 usingFlags:(unsigned int)arg4 forPID:(int)arg5 andClient:(NSUInteger)arg6 requestID:(NSUInteger)arg7 reply:(id)arg8 ;
-(void)makeDirectoryIn:(id)arg0 named:(id)arg1 attributes:(id)arg2 forPID:(int)arg3 andClient:(NSUInteger)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)makeLinkOf:(id)arg0 named:(id)arg1 inDirectory:(id)arg2 forPID:(int)arg3 andClient:(NSUInteger)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)makeSymLinkIn:(id)arg0 named:(id)arg1 contents:(id)arg2 attributes:(id)arg3 forPID:(int)arg4 andClient:(NSUInteger)arg5 requestID:(NSUInteger)arg6 reply:(id)arg7 ;
-(void)open:(id)arg0 withMode:(int)arg1 forPID:(int)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)otherAttributeOf:(id)arg0 named:(id)arg1 requestID:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)parentsAndAttributesForItemsByID:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)pathConfiguration:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)readDirectory:(id)arg0 amount:(NSUInteger)arg1 cookie:(NSUInteger)arg2 verifier:(NSUInteger)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)readDirectory:(id)arg0 intoBuffer:(id)arg1 cookie:(NSUInteger)arg2 verifier:(NSUInteger)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)readDirectoryAndAttributes:(id)arg0 amount:(NSUInteger)arg1 cookie:(NSUInteger)arg2 verifier:(NSUInteger)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)readDirectoryAndAttributes:(id)arg0 intoBuffer:(id)arg1 cookie:(NSUInteger)arg2 verifier:(NSUInteger)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)readFrom:(id)arg0 atOffset:(NSUInteger)arg1 intoBuffer:(id)arg2 forPID:(int)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)readFrom:(id)arg0 length:(NSUInteger)arg1 atOffset:(NSUInteger)arg2 forPID:(int)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)readLinkOf:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)reclaim:(id)arg0 forClient:(NSUInteger)arg1 requestID:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)releaseConnectionAllocation:(NSUInteger)arg0 ;
-(void)rememberConnection:(id)arg0 forID:(NSUInteger)arg1 ;
-(void)removeDirectory:(id)arg0 from:(id)arg1 named:(id)arg2 usingFlags:(int)arg3 forPID:(int)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)removeItem:(id)arg0 from:(id)arg1 named:(id)arg2 usingFlags:(int)arg3 forPID:(int)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)renameItemIn:(id)arg0 named:(id)arg1 toDirectory:(id)arg2 newName:(id)arg3 usingFlags:(unsigned int)arg4 forPID:(int)arg5 requestID:(NSUInteger)arg6 reply:(id)arg7 ;
-(void)replenishSearchCreditsFor:(id)arg0 credits:(unsigned int)arg1 requestID:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)rootFileHandleForClient:(NSUInteger)arg0 reply:(id)arg1 ;
-(void)search:(id)arg0 token:(id)arg1 criteria:(id)arg2 returnProxy:(id)arg3 forClient:(NSUInteger)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)setFileAttributesOf:(id)arg0 to:(id)arg1 forPID:(int)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)setOtherAttributeOf:(id)arg0 named:(id)arg1 value:(id)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)setUpdateInterest:(id)arg0 interest:(BOOL)arg1 forClient:(NSUInteger)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)setXattrOf:(id)arg0 named:(id)arg1 value:(id)arg2 how:(int)arg3 forPID:(int)arg4 requestID:(NSUInteger)arg5 reply:(id)arg6 ;
-(void)updatedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 interestedClients:(NSUInteger)arg3 ;
-(void)updatedName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)verifyItemExistenceByIDs:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)volumeStatistics:(id)arg0 requestID:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)volumeWideDeletedName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)volumeWideUpdatedName:(id)arg0 interestedItem:(id)arg1 interestedClients:(NSUInteger)arg2 ;
-(void)writeTo:(id)arg0 atOffset:(NSUInteger)arg1 fromBuffer:(id)arg2 forPID:(int)arg3 requestID:(NSUInteger)arg4 reply:(id)arg5 ;
-(void)xattrOf:(id)arg0 named:(id)arg1 forPID:(int)arg2 requestID:(NSUInteger)arg3 reply:(id)arg4 ;


@end


#endif