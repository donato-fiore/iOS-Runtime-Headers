// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHBACKLIGHTINACTIVEENVIRONMENTSESSION_H
#define BLSHBACKLIGHTINACTIVEENVIRONMENTSESSION_H

@class NSHashTable, NSString;
@protocol BLSHBacklightSceneHostEnvironmentObserver, BLSHBacklightInactiveEnvironmentSessionUpdating;

#import <Foundation/Foundation.h>

#import "BLSHBacklightEnvironmentPresentation.h"

@interface BLSHBacklightInactiveEnvironmentSession : NSObject <BLSHBacklightSceneHostEnvironmentObserver>

 {
    NSHashTable *_observers;
    NSHashTable *_environmentObservers;
    id<BLSHBacklightInactiveEnvironmentSessionUpdating> *_updater;
    os_unfair_lock_s _lock;
    BOOL _ended;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLSHBacklightEnvironmentPresentation *presentation; // ivar: _presentation
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<BLSHBacklightInactiveEnvironmentSessionUpdating> *updater;


+(id)sessionWithPresentation:(id)arg0 ;
-(id)initWithPresentation:(id)arg0 ;
-(void)addEnvironmentsObserver:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)hostEnvironment:(id)arg0 clientDidUpdateEnabled:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 clientDidUpdateSupportsAlwaysOn:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 hostDidSetAlwaysOnEnabledForEnvironment:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 hostDidSetLiveUpdating:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 hostDidSetUnrestrictedFramerateUpdates:(BOOL)arg1 ;
-(void)hostEnvironment:(id)arg0 invalidateContentForReason:(id)arg1 ;
-(void)removeEnvironmentsObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)sessionDidEnd;
-(void)updaterDidUpdateToPresentation:(id)arg0 ;


@end


#endif