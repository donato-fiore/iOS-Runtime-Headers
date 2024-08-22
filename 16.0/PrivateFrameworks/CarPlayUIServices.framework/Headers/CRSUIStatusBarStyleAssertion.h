// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRSUISTATUSBARSTYLEASSERTION_H
#define CRSUISTATUSBARSTYLEASSERTION_H

@class BKSAnimationFenceHandle, BSAnimationSettings, BSServiceConnection, NSString, NSUUID;
@protocol CRSUIStatusBarStyleServerToClientInterface, BSInvalidatable;

#import <Foundation/Foundation.h>


@interface CRSUIStatusBarStyleAssertion : NSObject <CRSUIStatusBarStyleServerToClientInterface, BSInvalidatable>

 {
    os_unfair_lock_s _lock;
    BOOL _lock_acquired;
    BOOL _lock_connectionActivated;
    BOOL _lock_invalidated;
    BOOL _lock_pendingAcquire;
    BKSAnimationFenceHandle *_lock_pendingAcquireFence;
    BSAnimationSettings *_lock_pendingAcquireAnimationSettings;
}


@property (retain, nonatomic) BSServiceConnection *connection; // ivar: _connection
@property (nonatomic) NSInteger contrast; // ivar: _contrast
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (nonatomic) NSInteger interfaceStyle; // ivar: _interfaceStyle
@property (nonatomic) BOOL siriPresentation; // ivar: _siriPresentation
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isValid) BOOL valid;


-(id)initForSiriPresentation;
-(id)initWithInterfaceStyle:(NSInteger)arg0 contrast:(NSInteger)arg1 ;
-(id)initWithInterfaceStyle:(NSInteger)arg0 contrast:(NSInteger)arg1 siriPresentation:(BOOL)arg2 ;
-(void)_handleConnectionActivated;
-(void)acquireWithAnimationSettings:(id)arg0 ;
-(void)invalidate;
-(void)reliquishWithAnimationSettings:(id)arg0 ;


@end


#endif