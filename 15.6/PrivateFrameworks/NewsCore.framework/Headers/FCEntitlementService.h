// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCENTITLEMENTSERVICE_H
#define FCENTITLEMENTSERVICE_H

@class NFMutexLock, NSMutableArray, NSTimer;
@protocol FCCoreConfigurationManager;

#import <Foundation/Foundation.h>


@interface FCEntitlementService : NSObject

@property (retain, nonatomic) NFMutexLock *accessLock; // ivar: _accessLock
@property (retain, nonatomic) NSMutableArray *blocks; // ivar: _blocks
@property (readonly, nonatomic) NSObject<FCCoreConfigurationManager> *configurationManager; // ivar: _configurationManager
@property (nonatomic) NSInteger entitlementRequestTimeoutDuration; // ivar: _entitlementRequestTimeoutDuration
@property (retain, nonatomic) NSTimer *entitlementRequestTimer; // ivar: _entitlementRequestTimer
@property (nonatomic) BOOL requestInProgress; // ivar: _requestInProgress


-(id)initWithConfigurationManager:(id)arg0 ;
-(void)_performEntitlementWithIgnoreCache:(BOOL)arg0 requestTimeoutDuration:(NSInteger)arg1 completion:(id)arg2 ;
-(void)clearTimer;
-(void)performEntitlementWithIgnoreCache:(BOOL)arg0 completion:(id)arg1 ;
-(void)startTimerWithTimeoutDuration:(CGFloat)arg0 ;


@end


#endif