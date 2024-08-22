// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDACTIONOPERATION_H
#define FPDACTIONOPERATION_H

@class FPOperation, NSMutableArray, NSMutableSet, NSMutableDictionary, NSError, FPActionOperationInfo, NSProgress;


#import "FPDExtensionManager.h"
#import "FPDRequest.h"

@interface FPDActionOperation : FPOperation

@property (retain, nonatomic) NSMutableArray *clientCompletions; // ivar: _clientCompletions
@property (retain, nonatomic) NSMutableArray *clients; // ivar: _clients
@property (retain, nonatomic) NSMutableSet *completedRoots; // ivar: _completedRoots
@property (retain, nonatomic) NSMutableDictionary *createdItemByRoot; // ivar: _createdItemByRoot
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableDictionary *errorsByRoot; // ivar: _errorsByRoot
@property (nonatomic) BOOL hasFinishedPreflight; // ivar: _hasFinishedPreflight
@property (readonly, nonatomic) FPActionOperationInfo *info; // ivar: _info
@property (nonatomic) NSUInteger logSection; // ivar: _logSection
@property (readonly, weak, nonatomic) FPDExtensionManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress
@property (retain, nonatomic) NSMutableDictionary *progressByRoot; // ivar: _progressByRoot
@property (retain, nonatomic) NSMutableDictionary *progressCompletionsByRoot; // ivar: _progressCompletionsByRoot
@property (readonly, nonatomic) FPDRequest *request; // ivar: _request


-(id)initWithActionInfo:(id)arg0 request:(id)arg1 server:(id)arg2 ;
-(id)progressForRoot:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)cancelRoot:(id)arg0 ;
-(void)dumpStateTo:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)forAllClients:(id)arg0 ;
-(void)registerFrameworkClient:(id)arg0 operationCompletion:(id)arg1 ;
-(void)sendPastUpdatesToClient:(id)arg0 ;
-(void)unregisterClientsAfterCompletion;


@end


#endif