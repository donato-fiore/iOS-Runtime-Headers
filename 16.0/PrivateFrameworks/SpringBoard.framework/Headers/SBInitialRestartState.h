// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINITIALRESTARTSTATE_H
#define SBINITIALRESTARTSTATE_H

@class SBBootDefaults, NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBInitialRestartState : NSObject <BSDescriptionProviding>



@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // ivar: _isAuthenticated
@property (nonatomic, getter=isBlocked) BOOL blocked; // ivar: _isBlocked
@property (retain, nonatomic) SBBootDefaults *bootDefaults; // ivar: _bootDefaults
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isForSimulator) BOOL forSimulator; // ivar: _forSimulator
@property (nonatomic) BOOL hasPasscodeSet; // ivar: _hasPasscodeSet
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger homeButtonType; // ivar: _homeButtonType
@property (nonatomic, getter=isInLostMode) BOOL inLostMode; // ivar: _isInLostMode
@property (nonatomic, getter=isLoginSession) BOOL loginSession; // ivar: _isLoginSession
@property (nonatomic) BOOL requiresSetup; // ivar: _requiresSetup
@property (nonatomic) BOOL shouldNeverLock; // ivar: _shouldNeverLock
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif