// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FBSDISPLAYSOURCE_H
#define FBSDISPLAYSOURCE_H

@class CADisplay, NSString;
@protocol BSInvalidatable, BSDescriptionProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FBSDisplayMonitor.h"
#import "FBSDisplayConfiguration.h"

@interface FBSDisplaySource : NSObject <BSInvalidatable, BSDescriptionProviding>

 {
    CADisplay *_display;
    FBSDisplayMonitor *_lock_monitor;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    FBSDisplayConfiguration *_lock_configuration;
    FBSDisplayConfiguration *_lock_reportedConfiguration;
    FBSDisplayConfiguration *_evlock_configuration;
    FBSDisplayConfiguration *_evlock_reportedConfiguration;
    os_unfair_lock_s _lock;
    os_unfair_lock_s _externallyVisibleLock;
    unsigned int _instanceID;
    int _lock_attachment;
    int _evlock_attachment;
    unsigned int _lock_debounceToken;
    BOOL _isMain;
    BOOL _observing;
    BOOL _lock_initialized;
    BOOL _lock_allowsUnknown;
    BOOL _lock_invalidated;
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
-(void)_updateForInitialization:(BOOL)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif