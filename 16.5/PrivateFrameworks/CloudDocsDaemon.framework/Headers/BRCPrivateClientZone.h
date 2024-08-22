// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCPRIVATECLIENTZONE_H
#define BRCPRIVATECLIENTZONE_H

@class NSMutableArray, NSMapTable, NSSet;


#import "BRCClientZone.h"
#import "BRCProblemReport.h"
#import "BRCAppLibrary.h"
#import "BRCPrivateServerZone.h"
#import "BRCServerZoneHealthState.h"

@interface BRCPrivateClientZone : BRCClientZone {
    NSMutableArray *_syncBarriers;
    BRCProblemReport *_problemReport;
    NSMutableArray *_lastResets;
    NSMutableArray *_faultsLiveBarriers;
    NSMapTable *_pcsChainFolderOperations;
}


@property (readonly, nonatomic) NSSet *appLibraries; // ivar: _appLibraries
@property (readonly, nonatomic) NSSet *appLibraryIDs;
@property (readonly, nonatomic) BRCAppLibrary *defaultAppLibrary; // ivar: _defaultAppLibrary
@property (readonly, nonatomic) BOOL hasDefaultAppLibrary;
@property (readonly, nonatomic) BOOL isDocumentScopePublic;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) BRCPrivateServerZone *privateServerZone;
@property (readonly, nonatomic) BOOL resetFrequencyIsTooHigh;
@property (readonly, nonatomic) BOOL zoneHealthNeedsSyncUp;
@property (readonly, nonatomic) BRCServerZoneHealthState *zoneHealthState; // ivar: _zoneHealthState


-(BOOL)dumpActivityToContext:(id)arg0 includeExpensiveActivity:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)dumpTablesToContext:(id)arg0 includeAllItems:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)parentIDHasLiveUnchainedChildren:(id)arg0 ;
-(BOOL)recomputeAppSyncBlockState;
-(BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(id)asPrivateClientZone;
-(id)fetchZoneRootItemInDB:(id)arg0 ;
-(id)initWithMangledID:(id)arg0 dbRowID:(id)arg1 db:(id)arg2 plist:(id)arg3 session:(id)arg4 initialCreation:(BOOL)arg5 ;
-(id)pcsChainOperationForItemID:(id)arg0 ;
-(id)plist;
-(id)prepareProblemReportForSyncWithRequestID:(NSInteger)arg0 ;
-(id)resolveClashOfAlias:(id)arg0 atPath:(id)arg1 withAlias:(id)arg2 atPath:(id)arg3 ;
-(id)rootItemID;
-(id)serverAliasByUnsaltedBookmarkData:(id)arg0 ;
-(id)unchainedItemInfoInServerTruthEnumeratorParentedTo:(id)arg0 ;
-(unsigned int)pcsChainStateForItem:(id)arg0 ;
-(void)_checkResultSetIsEmpty:(id)arg0 logToFile:(struct __sFILE *)arg1 reason:(id)arg2 result:(*BOOL)arg3 ;
-(void)addAppLibrary:(id)arg0 ;
-(void)addAppLibrary:(id)arg0 offline:(BOOL)arg1 ;
-(void)clearProblemReport;
-(void)notifyClient:(id)arg0 whenFaultingIsDone:(id)arg1 ;
-(void)registerPCSChainingOperation:(id)arg0 ;
-(void)removeAppLibrary:(id)arg0 ;
-(void)reportProblemWithType:(int)arg0 recordName:(id)arg1 ;
-(void)resume;
-(void)setServerZone:(id)arg0 ;
-(void)signalFaultingWatchersWithError:(id)arg0 ;
-(void)syncedDownZoneHealthRequestID:(NSInteger)arg0 ;
-(void)syncedDownZoneHealthState:(id)arg0 ;
-(void)updateWithPlist:(id)arg0 ;
-(void)zoneHealthWasReset;


@end


#endif