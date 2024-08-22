// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBAPPLICATIONPROCESSWATCHDOGPOLICY_H
#define FBAPPLICATIONPROCESSWATCHDOGPOLICY_H

@class NSDictionary, NSString;
@protocol FBProcessWatchdogProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FBApplicationProcessWatchdogPolicy : NSObject <FBProcessWatchdogProviding>

 {
    CGFloat _deviceLaunchScale;
    CGFloat _deviceResumeScale;
    CGFloat _additionalFirstPartyScale;
    BOOL _enableThirdPartyPre9;
    int _daNotificationToken;
    NSDictionary *_watchdogPolicyExceptions;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)_defaultFirstPartyAdditionalScale;
+(CGFloat)_defaultLaunchScale;
+(CGFloat)_defaultResumeScale;
+(CGFloat)_scaleForGestaltKey:(struct __CFString *)arg0 ;
+(id)defaultPolicy;
-(CGFloat)_queue_watchdogScalingFactorForAppInfo:(id)arg0 isResume:(BOOL)arg1 ;
-(id)init;
-(id)watchdogPolicyForProcess:(id)arg0 eventContext:(id)arg1 ;
-(void)_queue_reloadDefaultSettings;
-(void)dealloc;


@end


#endif