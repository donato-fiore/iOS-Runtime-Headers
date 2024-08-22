// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSDISPLAYSOURCE_H
#define FBSDISPLAYSOURCE_H

@class CADisplay, BSAtomicSignal, NSString;
@protocol BSInvalidatable, BSDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSDisplayMonitor.h"
#import "FBSDisplayConfiguration.h"

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding>

 {
    CADisplay *_display;
    BOOL _isMain;
    unsigned int _instanceID;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    BOOL _observing;
    BOOL _initialized;
    BSAtomicSignal *_invalidated;
    os_unfair_lock_s _lock;
    FBSDisplayMonitor *_lock_monitor;
    FBSDisplayConfiguration *_lock_configuration;
    BOOL _lock_allowsUnknown;
    int _lock_attachment;
    unsigned int _lock_debounceToken;
    FBSDisplayConfiguration *_lock_reportedConfiguration;
    os_unfair_lock_s _externallyVisibleLock;
    int _evlock_attachment;
    FBSDisplayConfiguration *_evlock_configuration;
    FBSDisplayConfiguration *_evlock_reportedConfiguration;
}


@property (nonatomic) BOOL allowsUnknown;
@property (readonly, copy, nonatomic) FBSDisplayConfiguration *connectedConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned int displayID; // ivar: _displayID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_initWithDisplay:(id)arg0 monitor:(id)arg1 isMain:(BOOL)arg2 ;
-(id)_lock_setReportedConfiguration:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithMainDisplay:(id)arg0 monitor:(id)arg1 ;
-(id)initWithNonMainDisplay:(id)arg0 monitor:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_lock_noteConnected;
-(void)_lock_noteDisconnecting;
-(void)_lock_noteUpdated;
-(void)_lock_setAttachment:(int)arg0 ;
-(void)_lock_setConfiguration:(id)arg0 ;
-(void)_lock_update;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif