// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPUINOWPLAYINGMANAGER_H
#define CPUINOWPLAYINGMANAGER_H

@class NSString, MPRequestResponseController, CARObserverHashTable;
@protocol MPRequestResponseControllerDelegate;

#import <Foundation/Foundation.h>

#import "CPUIThrottle.h"
#import "CPUINowPlayingSnapshot.h"

@interface CPUINowPlayingManager : NSObject <MPRequestResponseControllerDelegate>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastContentItemIdentifier; // ivar: _lastContentItemIdentifier
@property (copy, nonatomic) NSString *lastContentItemTitle; // ivar: _lastContentItemTitle
@property (retain, nonatomic) CPUIThrottle *metadataThrottle; // ivar: _metadataThrottle
@property (retain, nonatomic) MPRequestResponseController *requestController; // ivar: _requestController
@property (readonly, nonatomic) CPUINowPlayingSnapshot *snapshot; // ivar: _snapshot
@property (retain, nonatomic) CARObserverHashTable *stateObservers; // ivar: _stateObservers
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger throttleBehavior; // ivar: _throttleBehavior


+(id)sharedManager;
-(BOOL)controller:(id)arg0 shouldRetryFailedRequestWithError:(id)arg1 ;
-(id)init;
-(id)initWithBundleIdentifier:(id)arg0 ;
-(void)_setupRequestController;
-(void)addNowPlayingObserver:(id)arg0 ;
-(void)controller:(id)arg0 defersResponseReplacement:(id)arg1 ;
-(void)dealloc;
-(void)performCommandRequest:(id)arg0 completion:(id)arg1 ;
-(void)removeNowPlayingObserver:(id)arg0 ;


@end


#endif