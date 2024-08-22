// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPACTIONOPERATION_H
#define FPACTIONOPERATION_H

@class NSDictionary, NSString, NSSet, NSProgress, FPService<FPXOperationService>, NSArray;
@protocol NSProgressReporting, FPXOperationService;


#import "FPOperation.h"
#import "FPStitchingSession.h"
#import "FPItem.h"
#import "FPItemManager.h"

@interface FPActionOperation : FPOperation <NSProgressReporting>

 {
    NSDictionary *_itemsByDomainID;
    NSString *_providerIdentifier;
    BOOL _multiProviders;
    NSUInteger _logSection;
    FPStitchingSession *_stitcher;
    NSUInteger _attemptedRecoveryCount;
}


@property (copy, nonatomic) NSString *action; // ivar: _action
@property (copy, nonatomic) id *actionCompletionBlock; // ivar: _actionCompletionBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *destinationItemKeysAllowList; // ivar: _destinationItemKeysAllowList
@property (copy, nonatomic) FPItem *destinationItemToPreflight; // ivar: _destinationItemToPreflight
@property (copy, nonatomic) id *errorRecoveryHandler; // ivar: _errorRecoveryHandler
@property (nonatomic) BOOL finishAfterPreflight; // ivar: _finishAfterPreflight
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL haveErrorRecovery; // ivar: _haveErrorRecovery
@property (nonatomic) BOOL havePreflight; // ivar: _havePreflight
@property (nonatomic) BOOL haveStitching; // ivar: _haveStitching
@property (retain, nonatomic) FPItemManager *itemManager; // ivar: _itemManager
@property (copy, nonatomic) id *placeholdersCreationBlock; // ivar: _placeholdersCreationBlock
@property (retain, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) FPService<FPXOperationService> *remoteService; // ivar: _remoteService
@property (readonly, nonatomic) NSObject<FPXOperationService> *remoteServiceProxy;
@property (nonatomic) BOOL setupRemoteOperationService; // ivar: _setupRemoteOperationService
@property (nonatomic) BOOL skipPreflight; // ivar: _skipPreflight
@property (copy, nonatomic) NSSet *sourceItemKeysAllowList; // ivar: _sourceItemKeysAllowList
@property (copy, nonatomic) NSArray *sourceItemsToPreflight; // ivar: _sourceItemsToPreflight
@property (readonly, nonatomic) FPStitchingSession *stitcher;
@property (readonly) Class superclass;


+(id)newArrayRemovingFirstElement:(id)arg0 ;
-(id)initWithItemsOfDifferentProviders:(id)arg0 action:(id)arg1 ;
-(id)initWithProvider:(id)arg0 action:(id)arg1 ;
-(id)operationDescription;
-(id)replicateForItems:(id)arg0 ;
-(void)_dispatchToSubOperations;
-(void)_preflightAndRun;
-(void)_runUserInteractionsPreflight:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)preflightWithCompletion:(id)arg0 ;
-(void)presendNotifications;
-(void)runUserInteractionsPreflight:(id)arg0 ;
-(void)subclassPreflightWithCompletion:(id)arg0 ;
-(void)tryRecoveringFromError:(id)arg0 completion:(id)arg1 ;
// -(void)tryRecoveringFromPreflightErrors:(id)arg0 recoveryHandler:(id)arg1 completion:(unk)arg2  ;


@end


#endif