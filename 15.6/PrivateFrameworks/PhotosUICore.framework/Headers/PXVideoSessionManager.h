// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXVIDEOSESSIONMANAGER_H
#define PXVIDEOSESSIONMANAGER_H

@class NSMutableDictionary, NSCountedSet, NSArray, NSString;
@protocol PXChangeObserver, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXReusableObjectPool.h"

@interface PXVideoSessionManager : PXObservable <PXChangeObserver>

 {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    PXReusableObjectPool *_ivarQueue_playerPool;
    NSMutableDictionary *_ivarQueue_sessionsByIdentifier;
    NSCountedSet *_ivarQueue_sessionCounts;
    BOOL _ivarQueue_canStoreReusablePlayers;
}


@property (readonly, nonatomic) NSArray *activeSessions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isLivePhotoStabilizationEnabled;
+(id)sharedInstance;
+(struct ? )livePhotoCrossfadeDuration;
-(id)checkOutSessionWithContentProvider:(id)arg0 ;
-(id)contentProviderForAsset:(id)arg0 withOptions:(id)arg1 mediaProvider:(id)arg2 requestURLOnly:(BOOL)arg3 ;
-(id)init;
-(id)mutableChangeObject;
-(id)videoSessionForAsset:(id)arg0 mediaProvider:(id)arg1 ;
-(id)videoSessionForAsset:(id)arg0 withOptions:(id)arg1 mediaProvider:(id)arg2 ;
-(void)_handleMediaServicesWereResetNotification:(id)arg0 ;
-(void)_ivarQueue_flushReusablePlayerPool;
-(void)_updateCanStoreReusablePlayers;
-(void)checkInVideoSession:(id)arg0 ;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif