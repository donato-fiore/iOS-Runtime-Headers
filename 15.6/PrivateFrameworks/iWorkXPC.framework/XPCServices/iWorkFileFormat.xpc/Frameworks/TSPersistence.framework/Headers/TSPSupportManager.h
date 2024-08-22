// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPSUPPORTMANAGER_H
#define TSPSUPPORTMANAGER_H

@class NSOperationQueue, NSRecursiveLock, NSURL, NSString, NSSet;
@protocol NSFilePresenter, TSPFileCoordinatorDelegate, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "TSPObjectContext.h"
#import "TSPSupportSaveOperationState.h"

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate>

 {
    TSPObjectContext *_context;
    NSOperationQueue *_presentedItemQueue;
    NSRecursiveLock *_presentedSupportURLLock;
    NSURL *_presentedSupportURL;
    TSPSupportSaveOperationState *_saveOperationState;
    NSObject<OS_dispatch_group> *_pendingEndSaveGroup;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (copy) NSURL *presentedSupportURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


+(BOOL)isSupportAtURLValid:(id)arg0 documentUUID:(id)arg1 versionUUID:(id)arg2 documentProperties:(*id)arg3 ;
+(id)defaultSupportDirectoryURL;
+(id)supportBundleURLForDocumentUUID:(id)arg0 delegate:(id)arg1 ;
+(id)supportDirectoryURLWithDelegate:(id)arg0 isUnique:(*BOOL)arg1 ;
+(void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg0 delegate:(id)arg1 ;
-(BOOL)copyOrMoveSupportAtURL:(id)arg0 originalDocumentProperties:(id)arg1 toURL:(id)arg2 isCopying:(BOOL)arg3 newDocumentProperties:(id)arg4 error:(*id)arg5 ;
-(BOOL)didUpdateDocumentUUIDWithOriginalDocumentProperties:(id)arg0 newDocumentProperties:(id)arg1 preserveOriginalDocumentSupport:(BOOL)arg2 preserveShareUUID:(BOOL)arg3 originalURL:(id)arg4 newURL:(*id)arg5 error:(*id)arg6 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg0 packageWriter:(id)arg1 newURL:(*id)arg2 writtenPackage:(*id)arg3 ;
-(BOOL)writeSupportForDocumentUUID:(id)arg0 error:(*id)arg1 writer:(id)arg2 ;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)supportURLWithDocumentUUID:(id)arg0 ;
-(void)beginSaveWithDocumentUUID:(id)arg0 versionUUID:(id)arg1 originalURL:(id)arg2 updateType:(NSInteger)arg3 ;
-(void)performReadUsingAccessor:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)removeFilePresenter;
-(void)updatePresentedItemURL:(id)arg0 ;


@end


#endif