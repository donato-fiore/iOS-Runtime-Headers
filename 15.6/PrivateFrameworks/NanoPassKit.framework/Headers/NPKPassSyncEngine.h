// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSSYNCENGINE_H
#define NPKPASSSYNCENGINE_H

@class NSString;
@protocol NSSecureCoding, NPKPassSyncEngineDataSource, NPKPassSyncEngineDelegate;

#import <Foundation/Foundation.h>

#import "NPKPassSyncState.h"
#import "NPKPassSyncChange.h"

@interface NPKPassSyncEngine : NSObject <NSSecureCoding>



@property (retain, nonatomic) NPKPassSyncState *backupState; // ivar: _backupState
@property (retain, nonatomic) NPKPassSyncChange *candidateChange; // ivar: _candidateChange
@property (retain, nonatomic) NPKPassSyncState *candidateState; // ivar: _candidateState
@property (weak, nonatomic) NSObject<NPKPassSyncEngineDataSource> *dataSource; // ivar: _dataSource
@property (weak, nonatomic) NSObject<NPKPassSyncEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *engineName;
@property (readonly, nonatomic) NSUInteger engineRole; // ivar: _engineRole
@property (retain, nonatomic) NPKPassSyncState *libraryState; // ivar: _libraryState
@property (retain, nonatomic) NPKPassSyncChange *processingChange; // ivar: _processingChange
@property (retain, nonatomic) NPKPassSyncState *reconciledState; // ivar: _reconciledState
@property (nonatomic) BOOL requireAppleAccountForPaymentPasses; // ivar: _requireAppleAccountForPaymentPasses


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRole:(NSUInteger)arg0 ;
-(void)_engineStateChanged;
-(void)_finishedProcessingChange:(id)arg0 ;
-(void)_receivedStateChangeProcessed:(id)arg0 changeAccepted:(BOOL)arg1 ;
-(void)_requestAddPassData:(id)arg0 forSyncStateItem:(id)arg1 completion:(id)arg2 ;
-(void)_requestRemovePassWithUniqueID:(id)arg0 completion:(id)arg1 ;
-(void)_requestUpdatePassData:(id)arg0 forSyncStateItem:(id)arg1 baseManifestHashForPartialUpdate:(id)arg2 remoteAssetsForPartialUpdate:(id)arg3 completion:(id)arg4 ;
-(void)_sendNextStateChange;
-(void)_sendProposedReconciledState:(id)arg0 ;
-(void)_sendReconciledStateAcceptedWithHash:(id)arg0 ;
-(void)_sendReconciledStateUnrecognizedWithHash:(id)arg0 version:(NSUInteger)arg1 currentPassSyncState:(id)arg2 ;
-(void)_sendStateChange:(id)arg0 ;
-(void)_sendStateChangeProcessedWithUUID:(id)arg0 changeAccepted:(BOOL)arg1 fullPassRequired:(BOOL)arg2 ;
-(void)_shouldProcessAddOrUpdateChangeOfType:(NSUInteger)arg0 changeSyncStateItem:(id)arg1 librarySyncStateItem:(id)arg2 reconciledSyncStateItem:(id)arg3 candidateChange:(id)arg4 shouldApplyToPassLibrary:(*BOOL)arg5 shouldApplyToReconciledState:(*BOOL)arg6 ;
-(void)_unexpectedEventOccurred;
-(void)encodeWithCoder:(id)arg0 ;
-(void)handleProposedReconciledState:(id)arg0 ;
-(void)handleReconciledStateAcceptedWithHash:(id)arg0 ;
-(void)handleReconciledStateUnrecognizedWithHash:(id)arg0 version:(NSUInteger)arg1 passSyncState:(id)arg2 ;
-(void)handleStateChange:(id)arg0 ;
-(void)handleStateChangeProcessedWithUUID:(id)arg0 changeAccepted:(BOOL)arg1 fullPassRequired:(BOOL)arg2 ;
-(void)syncIfNecessary;


@end


#endif