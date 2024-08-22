// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEPRESENTERPROXY_H
#define NSFILEPRESENTERPROXY_H

@class NSMutableArray, NSSet;
@protocol OS_dispatch_queue;


#import "NSFileReactorProxy.h"
#import "NSFilePresenterXPCMessenger.h"
#import "NSFileWatcher.h"
#import "NSFileAccessProcessManager.h"

@interface NSFilePresenterProxy : NSFileReactorProxy {
    id *_remotePresenter;
    NSFilePresenterXPCMessenger *_forwardedMessenger;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileWatcher *_watcher;
    NSUInteger _writingRelinquishmentCount;
    id *_currentWriterPurposeID;
    NSMutableArray *_previousWriterPurposeIDs;
    NSFileAccessProcessManager *_processManager;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
    BOOL _disconnected;
    BOOL _didObserveNonCoordinatedChanges;
}


@property (readonly) BOOL disconnected;
@property (nonatomic) NSUInteger filePresenterResponses; // ivar: _filePresenterResponses
@property BOOL inSubarbiter; // ivar: _inSubarbiter
@property (copy) NSSet *observedUbiquityAttributes; // ivar: _observedUbiquityAttributes
@property BOOL usesMainThreadDuringReliquishing; // ivar: _usesMainThreadDuringRelinquishing


+(id)urlWithItemURL:(id)arg0 subitemPath:(id)arg1 ;
-(BOOL)allowedForURL:(id)arg0 ;
-(BOOL)shouldSendObservationMessageWithPurposeID:(id)arg0 ;
-(id)_clientProxy;
-(id)initWithClient:(id)arg0 remotePresenter:(id)arg1 reactorID:(id)arg2 ;
-(void)_settleNonCoordinatedChanges;
-(void)accommodateDeletionWithSubitemPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(void)forwardRelinquishmentForWritingClaim:(BOOL)arg0 withID:(id)arg1 purposeID:(id)arg2 subitemURL:(id)arg3 options:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)forwardUsingProxy:(id)arg0 ;
-(void)invalidate;
-(void)localFileWasEvicted;
-(void)observeChangeAtSubitemPath:(id)arg0 ;
-(void)observeChangeOfUbiquityAttributes:(id)arg0 ;
-(void)observeDisappearanceAtSubitemPath:(id)arg0 ;
-(void)observeDisconnectionByWriterWithPurposeID:(id)arg0 ;
-(void)observeMoveByWriterWithPurposeID:(id)arg0 withPhysicalDestinationURL:(id)arg1 ;
-(void)observeMoveOfSubitemAtURL:(id)arg0 toURL:(id)arg1 byWriterWithPurposeID:(id)arg2 ;
-(void)observeNewProvider:(id)arg0 ;
-(void)observePresenterChange:(BOOL)arg0 atSubitemURL:(id)arg1 ;
-(void)observeReconnectionByWriterWithPurposeID:(id)arg0 ;
-(void)observeSharingChangeAtSubitemPath:(id)arg0 withPhysicalURL:(id)arg1 ;
-(void)observeUbiquityChangeAtSubitemPath:(id)arg0 withPhysicalURL:(id)arg1 ;
-(void)observeVersionChangeOfKind:(id)arg0 withClientID:(id)arg1 name:(id)arg2 subitemPath:(id)arg3 ;
-(void)promisedFileWasFulfilled;
-(void)relinquishToReadingClaimWithID:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 resultHandler:(id)arg3 ;
-(void)relinquishToWritingClaimWithID:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 subitemPath:(id)arg3 resultHandler:(id)arg4 ;
-(void)saveChangesWithCompletionHandler:(id)arg0 ;
-(void)setItemLocation:(id)arg0 ;
-(void)startObservingApplicationStateWithQueue:(id)arg0 ;
-(void)startWatchingWithQueue:(id)arg0 lastEventID:(id)arg1 unannouncedMoveHandler:(id)arg2 ;
-(void)stopObservingApplicationState;


@end


#endif