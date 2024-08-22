// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEPRESENTERXPCMESSENGER_H
#define NSFILEPRESENTERXPCMESSENGER_H

@protocol NSFilePresenterXPCInterface, NSFilePresenter, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSFilePresenterProxy.h"
#import "NSString.h"

@interface NSFilePresenterXPCMessenger : NSObject <NSFilePresenterXPCInterface>

 {
    id<NSFilePresenter> *_filePresenter;
    NSObject<OS_dispatch_queue> *_queue;
    NSFilePresenterProxy *_filePresenterProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_readRelinquishment;
-(id)_writeRelinquishment;
-(id)initWithFilePresenter:(id)arg0 queue:(id)arg1 ;
-(id)initWithFilePresenterProxy:(id)arg0 ;
-(void)_makePresenter:(id)arg0 accommodateDeletionWithSubitemURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_makePresenter:(id)arg0 accommodateDisconnectionWithCompletionHandler:(id)arg1 ;
-(void)_makePresenter:(id)arg0 observeChangeOfUbiquityAttributes:(id)arg1 ;
-(void)_makePresenter:(id)arg0 observeChangeWithSubitemURL:(id)arg1 ;
-(void)_makePresenter:(id)arg0 observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 ;
-(void)_makePresenter:(id)arg0 observeSharingChangeWithSubitemURL:(id)arg1 ;
-(void)_makePresenter:(id)arg0 observeUbiquityChangeWithSubitemURL:(id)arg1 ;
-(void)_makePresenter:(id)arg0 observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemURL:(id)arg4 ;
-(void)_makePresenter:(id)arg0 relinquishToAccessClaimWithID:(id)arg1 purposeID:(id)arg2 ifNecessaryUsingSelector:(SEL)arg3 recordingRelinquishment:(id)arg4 continuer:(id)arg5 ;
-(void)_makePresenter:(id)arg0 relinquishToReadingClaimWithID:(id)arg1 purposeID:(id)arg2 options:(NSUInteger)arg3 completionHandler:(id)arg4 ;
-(void)_makePresenter:(id)arg0 relinquishToWritingClaimWithID:(id)arg1 options:(NSUInteger)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(id)arg5 ;
-(void)_makePresenter:(id)arg0 reportUnsavedChangesWithCompletionHandler:(id)arg1 ;
-(void)_makePresenter:(id)arg0 saveChangesWithCompletionHandler:(id)arg1 ;
-(void)_makePresenter:(id)arg0 setLastPresentedItemEventIdentifier:(NSUInteger)arg1 ;
-(void)_makePresenter:(id)arg0 setProviderPurposeIdentifier:(id)arg1 ;
-(void)_makePresenter:(id)arg0 validateRelinquishmentToSubitemAtURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)_makePresenter:(id)arg0 validateRemoteDeletionRecordingRelinquishment:(id)arg1 completionHandler:(id)arg2 ;
-(void)_makePresenterObserveDisconnection:(id)arg0 ;
-(void)_makePresenterObserveReconnection:(id)arg0 ;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)logSuspensionWarning;
-(void)observeChangeOfUbiquityAttributes:(id)arg0 ;
-(void)observeChangeWithSubitemURL:(id)arg0 ;
-(void)observeDisconnection;
-(void)observeMoveToURL:(id)arg0 withSubitemURL:(id)arg1 byWriterWithPurposeID:(id)arg2 ;
-(void)observePresenterChange:(BOOL)arg0 forSubitemAtURL:(id)arg1 ;
-(void)observeReconnection;
-(void)observeSharingChangeWithSubitemURL:(id)arg0 ;
-(void)observeUbiquityChangeWithSubitemURL:(id)arg0 ;
-(void)observeVersionChangeOfKind:(id)arg0 toItemAtURL:(id)arg1 withClientID:(id)arg2 name:(id)arg3 ;
-(void)reacquireFromReadingClaimForID:(id)arg0 ;
-(void)reacquireFromWritingClaimForID:(id)arg0 completionHandler:(id)arg1 ;
-(void)relinquishToReadingClaimWithID:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 completionHandler:(id)arg3 ;
-(void)relinquishToWritingClaimWithID:(id)arg0 options:(NSUInteger)arg1 purposeID:(id)arg2 subitemURL:(id)arg3 completionHandler:(id)arg4 ;
-(void)saveChangesWithCompletionHandler:(id)arg0 ;
-(void)setProviderPurposeIdentifier:(id)arg0 ;
-(void)updateLastEventID:(NSUInteger)arg0 ;


@end


#endif