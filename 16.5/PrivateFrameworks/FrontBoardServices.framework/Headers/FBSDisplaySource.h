// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBSDISPLAYSOURCE_H
#define FBSDISPLAYSOURCE_H

@class CADisplay, NSSet, NSString;
@protocol BSInvalidatable, BSDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSDisplayMonitor.h"
#import "FBSDisplayConfiguration.h"

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding>

 {
    CADisplay *_display;
    FBSDisplayMonitor *_lock_monitor;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSDisplayConfiguration *_lock_rawConfiguration;
    NSSet *_lock_effectiveConfigurations;
    FBSDisplayConfiguration *_lock_reportedRawConfiguration;
    NSSet *_lock_reportedEffectiveConfigurations;
    FBSDisplayConfiguration *_evlock_rawConfiguration;
    NSSet *_evlock_effectiveConfigurations;
    FBSDisplayConfiguration *_evlock_reportedRawConfiguration;
    NSSet *_evlock_reportedEffectiveConfigurations;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _externallyVisibleLock;
    unsigned int _instanceID;
    int _lock_attachment;
    int _evlock_attachment;
    unsigned int _lock_debounceToken;
    BOOL _alwaysConnected;
    BOOL _updatable;
    BOOL _observing;
    BOOL _lock_initialized;
    BOOL _lock_allowsUnknown;
    BOOL _lock_invalidated;
}


@property (nonatomic) BOOL allowsUnknown;
@property (readonly, copy, nonatomic) NSSet *connectedConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int displayID; // ivar: _displayID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_lock_transformDisplaysIfNecessaryFromDisplayConfiguration:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithDisplay:(id)arg0 alwaysConnected:(BOOL)arg1 triggers:(NSUInteger)arg2 monitor:(id)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_callOutQueue_postToObservers:(id)arg0 includeBookendObserver:(BOOL)arg1 connected:(id)arg2 ;
-(void)_callOutQueue_postToObservers:(id)arg0 includeBookendObserver:(BOOL)arg1 disconnected:(id)arg2 ;
-(void)_callOutQueue_postToObservers:(id)arg0 includeBookendObserver:(BOOL)arg1 updated:(id)arg2 ;
-(void)_forceUpdateForMockCADisplayChange;
-(void)_lock_noteConnected;
-(void)_lock_noteDisconnecting;
-(void)_lock_noteUpdatedForTransformInvalidation:(BOOL)arg0 ;
-(void)_lock_setAttachment:(int)arg0 ;
-(void)_lock_setRawConfiguration:(id)arg0 effectiveConfigurations:(id)arg1 ;
-(void)_lock_setRawReportedConfiguration:(id)arg0 effectiveReportedConfigurations:(id)arg1 ;
-(void)_updateForInitialization:(BOOL)arg0 forTransformInvalidation:(BOOL)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)updateTransforms;


@end


#endif