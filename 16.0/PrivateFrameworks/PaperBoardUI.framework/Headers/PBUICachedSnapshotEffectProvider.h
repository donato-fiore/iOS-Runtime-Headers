// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBUICACHEDSNAPSHOTEFFECTPROVIDER_H
#define PBUICACHEDSNAPSHOTEFFECTPROVIDER_H

@class BSUIMappedImageCache, NSString;
@protocol PBUIPosterReplicaSourceObserver, PBUIPosterReplicaSnapshotProviding, BSInvalidatable, PBUIWallpaperEffectCompositor;

#import <Foundation/Foundation.h>

#import "PBUIReplicaSourceObserverBox.h"
#import "PBUIBakedEffectSnapshotSource.h"

@interface PBUICachedSnapshotEffectProvider : NSObject <PBUIPosterReplicaSourceObserver, PBUIPosterReplicaSnapshotProviding, BSInvalidatable>

 {
    id<BSInvalidatable> *_snapshotSubscription;
    id<PBUIPosterReplicaSnapshotProviding> *_snapshotProvider;
    PBUIReplicaSourceObserverBox *_observers;
    id<PBUIWallpaperEffectCompositor> *_backdropCompositor;
    id<PBUIWallpaperEffectCompositor> *_materialCompositor;
    PBUIBakedEffectSnapshotSource *_currentSource;
    BSUIMappedImageCache *_cache;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger effectiveStyle;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initForSnapshotProvider:(id)arg0 cache:(id)arg1 ;
-(id)initForSnapshotProvider:(id)arg0 cacheIdentifier:(id)arg1 ;
-(id)registerSnapshotSourceObserver:(id)arg0 ;
-(id)snapshotSourceForObserver:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)setNeedsSourceUpdate;


@end


#endif