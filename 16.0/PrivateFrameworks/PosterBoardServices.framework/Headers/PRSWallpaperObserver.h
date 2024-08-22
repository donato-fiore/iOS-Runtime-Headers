// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSWALLPAPEROBSERVER_H
#define PRSWALLPAPEROBSERVER_H

@class NSString, BSServiceConnection<BSServiceConnectionClient>, RBSAssertion, NSMutableDictionary;
@protocol PRSWallpaperObserving, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface PRSWallpaperObserver : NSObject <PRSWallpaperObserving, BSInvalidatable>

 {
    NSString *_explanation;
    BSServiceConnection<BSServiceConnectionClient> *_lock_connection;
    id *_lock_handler;
    NSUInteger _observed;
    NSString *_active_observedDescription;
    RBSAssertion *_lock_initialUpdateAssertion;
    PRSServerPosterIdentity" _conn_identityLocations;
    NSMutableDictionary *_conn_configurationByIdentity;
    os_unfair_lock_s _lock;
    BOOL _lock_clientInvalidated;
    BOOL _lock_clientActivated;
    BOOL _lock_invalidated;
    BOOL _lock_initialUpdateWasSent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithExplanation:(id)arg0 ;
-(void)_lock_invalidate;
-(void)activateWithConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)notifyWallpaperUpdates:(id)arg0 ;


@end


#endif