// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSOFTWAREUPDATEMANAGER_H
#define HFSOFTWAREUPDATEMANAGER_H

@class NSMapTable, NSString, NSMutableSet;
@protocol HFAccessoryObserver, HFHomeObserver, HFExecutionEnvironmentObserver, HFSoftwareUpdateObserver;

#import <Foundation/Foundation.h>

#import "HFHomeKitDispatcher.h"

@interface HFSoftwareUpdateManager : NSObject <HFAccessoryObserver, HFHomeObserver, HFExecutionEnvironmentObserver, HFSoftwareUpdateObserver>



@property (readonly, nonatomic) NSMapTable *accessoryUniqueIDToFetchPromisesMapTable; // ivar: _accessoryUniqueIDToFetchPromisesMapTable
@property (readonly, nonatomic) NSMapTable *accessoryUniqueIDToSoftwareUpdateMapTable; // ivar: _accessoryUniqueIDToSoftwareUpdateMapTable
@property (readonly, nonatomic) NSMapTable *accessoryUniqueIDToSoftwareUpdateProgressMapTable; // ivar: _accessoryUniqueIDToSoftwareUpdateProgressMapTable
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) HFHomeKitDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly, nonatomic) NSMapTable *documentationMetadataToDocumentationFutureMapTable; // ivar: _documentationMetadataToDocumentationFutureMapTable
@property (readonly, nonatomic) NSMapTable *documentationMetadataToDocumentationMapTable; // ivar: _documentationMetadataToDocumentationMapTable
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *observedAccessoryUniqueIDToAccessoryMapTable; // ivar: _observedAccessoryUniqueIDToAccessoryMapTable
@property (readonly, nonatomic) NSMutableSet *requestedSoftwareUpdateInstalls; // ivar: _requestedSoftwareUpdateInstalls
@property (readonly) Class superclass;


-(BOOL)hasNewValidSoftwareUpdate:(id)arg0 ;
-(BOOL)hasRequestedSoftwareUpdate:(id)arg0 ;
-(BOOL)hasSoftwareUpdate:(id)arg0 ;
-(BOOL)hasValidSoftwareUpdate:(id)arg0 ;
-(BOOL)isDownloadingSoftwareUpdate:(id)arg0 ;
-(BOOL)isInstallingSoftwareUpdate:(id)arg0 ;
-(BOOL)isReadyToInstallSoftwareUpdate:(id)arg0 ;
-(BOOL)isSoftwareUpdateInProgress:(id)arg0 ;
-(BOOL)isSoftwareUpdateInstalled:(id)arg0 ;
-(BOOL)softwareUpdatePossessesNecessaryDocumentation:(id)arg0 ;
-(NSInteger)_softwareUpdateStateForAccessory:(id)arg0 ;
-(NSUInteger)softwareUpdateDownloadSize:(id)arg0 ;
-(id)_fetchNeedsAttentionReasons:(id)arg0 ;
-(id)_fetchSoftwareUpdateDocumentationWithAccessory:(id)arg0 ;
-(id)fetchAvailableSoftwareUpdate:(id)arg0 options:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithDispatcher:(id)arg0 ;
-(id)softwareUpdateDocumentation:(id)arg0 ;
-(id)softwareUpdateForAccessory:(id)arg0 ;
-(id)softwareUpdatePortionComplete:(id)arg0 ;
-(id)softwareUpdateProgressForAccessory:(id)arg0 ;
-(id)softwareUpdateReleaseDate:(id)arg0 ;
-(id)softwareUpdateVersion:(id)arg0 ;
-(id)startSoftwareUpdate:(id)arg0 ;
-(void)_finishFetchPromisesWithAccessory:(id)arg0 ;
-(void)_markSoftwareUpdate:(id)arg0 asRequested:(BOOL)arg1 ;
-(void)_updateRequestedSoftwareUpdateInstallsWithAccessory:(id)arg0 softwareUpdateState:(NSInteger)arg1 softwareUpdateVersion:(id)arg2 ;
-(void)_waitToFinishPromise:(id)arg0 untilSoftwareUpdateDocumentationFetchCompletes:(id)arg1 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)dealloc;
-(void)executionEnvironmentDidBecomeActive:(id)arg0 ;
-(void)home:(id)arg0 didRemoveAccessory:(id)arg1 ;
-(void)resetCaches;
-(void)softwareUpdate:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)softwareUpdateController:(id)arg0 accessory:(id)arg1 didFailUpdate:(id)arg2 withError:(id)arg3 timestamp:(id)arg4 ;
-(void)softwareUpdateController:(id)arg0 accessory:(id)arg1 didReceiveUpdate:(id)arg2 ;
-(void)softwareUpdateController:(id)arg0 accessory:(id)arg1 didUpdateProgress:(id)arg2 ;
-(void)startObservingSoftwareUpdatesForAccessories:(id)arg0 ;
-(void)stopObservingSoftwareUpdatesForAccessories:(id)arg0 ;


@end


#endif