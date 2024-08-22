// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRUICONTROLLER_H
#define MRUICONTROLLER_H

@class NSString, NSXPCConnection;
@protocol MRLockScreenUIControllable, MRQuickControlsUIControllable, MRScreenMirroringQuickControlsUIControllable, MRUIContextProviding, MRUIServerXPCProtocol;

#import <Foundation/Foundation.h>


@interface MRUIController : NSObject <MRLockScreenUIControllable, MRQuickControlsUIControllable, MRScreenMirroringQuickControlsUIControllable, MRUIContextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasLockScreenControlsAssertion; // ivar: _hasLockScreenControlsAssertion
@property (nonatomic) BOOL hasQuickControlsAssertion; // ivar: _hasQuickControlsAssertion
@property (nonatomic) BOOL hasScreenMirroringQuickControlsAssertion; // ivar: _hasScreenMirroringQuickControlsAssertion
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSObject<MRUIServerXPCProtocol> *server;
@property (nonatomic) BOOL shouldRestoreState; // ivar: _shouldRestoreState
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(BOOL)hasUIAssertions;
-(id)acquireQuickControlsAssertion;
-(id)contextForSessionIdentifier:(id)arg0 ;
-(id)init;
-(void)_restoreState;
-(void)acquireLockScreenControlsAssertion;
-(void)acquireScreenMirroringQuickControlsAssertion;
-(void)dealloc;
-(void)releaseLockScreenControlsAssertion;
-(void)releaseQuickControlsAssertion;
-(void)releaseScreenMirroringQuickControlsAssertion;


@end


#endif