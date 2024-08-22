// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUTTELEPHONYMANAGER_H
#define CUTTELEPHONYMANAGER_H

@class NSMutableSet, NSRecursiveLock;

#import <Foundation/Foundation.h>


@interface CUTTelephonyManager : NSObject

@property (nonatomic) *__CTServerConnection _serverConnection; // ivar: _serverConnection
@property (nonatomic) *void _suspendDormancyAssertion; // ivar: _suspendDormancyAssertion
@property (readonly, nonatomic) BOOL disableFastDormancy;
@property (retain, nonatomic) NSMutableSet *disableFastDormancyTokens; // ivar: _disableFastDormancyTokens
@property (retain, nonatomic) NSRecursiveLock *lock; // ivar: _lock
@property (nonatomic) BOOL registered; // ivar: _registered


+(id)sharedInstance;
-(id)init;
-(void)__adjustFastDormancyTokens;
-(void)_adjustFastDormancyTokens;
-(void)_setFastDormancySuspended:(BOOL)arg0 ;
-(void)addFastDormancyDisableToken:(id)arg0 ;
-(void)dealloc;
-(void)removeFastDormancyDisableToken:(id)arg0 ;


@end


#endif