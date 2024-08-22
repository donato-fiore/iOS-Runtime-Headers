// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUURLTRACKERFILEPRESENTER_H
#define TSUURLTRACKERFILEPRESENTER_H

@class NSError, NSData, NSURL, NSString, NSSet, NSOperationQueue;
@protocol NSFilePresenter, TSULogContext, OS_dispatch_queue, TSUURLTrackerDelegate;

#import <Foundation/Foundation.h>

#import "TSUURLTracker.h"
#import "TSUSandboxedURL.h"

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter>

 {
    TSUURLTracker *_urlTracker;
    id<TSULogContext> *_logContext;
    NSObject<OS_dispatch_queue> *_accessQueue;
    uint8_t _forceEncodingBookmarkData;
    uint8_t _didFailToForceEncodingBookmarkData;
    NSError *_latestBookmarkError;
    id<TSUURLTrackerDelegate> *_delegate;
    uint8_t _hasStarted;
    uint8_t _deleted;
    uint8_t _volumeIsEjectable;
    uint8_t _volumeIsRemovable;
    uint8_t _volumeIsLocal;
    uint8_t _isLikelyOnRemovedMedia;
    os_unfair_lock_s _propertiesLock;
    TSUSandboxedURL *_sandboxedURL;
    TSUSandboxedURL *_latestSandboxedURLWithAccess;
    NSData *_bookmarkDataIfAvailable;
    NSURL *_volumeURL;
}


@property (readonly) NSData *bookmarkDataIfAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL deleted;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFilePresenter;
@property (readonly) BOOL isLikelyOnExternalStorage;
@property (readonly) BOOL isLikelyOnRemovedMedia;
@property (readonly, nonatomic) BOOL isValid; // ivar: _isValid
@property (readonly) BOOL isVolumeKnownToBeEjectable;
@property (readonly) BOOL isVolumeKnownToBeLocal;
@property (readonly) BOOL isVolumeKnownToBeRemovable;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue; // ivar: _presentedItemOperationQueue
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) TSUSandboxedURL *sandboxedURLIfAvailable;
@property (readonly) Class superclass;
@property (readonly) NSURL *volumeURL;


-(id)bookmarkDataWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithSandboxedURL:(id)arg0 bookmarkData:(id)arg1 urlTracker:(id)arg2 logContext:(id)arg3 delegate:(id)arg4 ;
-(id)p_bookmarkDataWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)p_lastKnownURLFromBookmark:(id)arg0 ;
-(id)p_latestSandboxedURLWithAccess;
-(id)p_sandboxedURLIfAvailableLoadingLastKnownURLFromBookmark:(BOOL)arg0 ;
-(id)p_sandboxedURLWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)sandboxedURLWithOptions:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)p_notifyURLTrackerPresentedItemContentsDidChange;
-(void)p_notifyURLTrackerPresentedItemDidMoveToURL:(id)arg0 ;
-(void)p_notifyURLTrackerPresentedItemWasDeleted;
-(void)p_presentedItemDidMoveToSandboxedURL:(id)arg0 ;
-(void)p_setSandboxedURL:(id)arg0 ;
-(void)p_updateVolumeInfo;
-(void)pauseForEnteringBackground:(BOOL)arg0 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)relinquishPresentedItemToWriter:(id)arg0 ;
-(void)startOrResumeForEnteringForeground:(BOOL)arg0 ;
-(void)stop;


@end


#endif