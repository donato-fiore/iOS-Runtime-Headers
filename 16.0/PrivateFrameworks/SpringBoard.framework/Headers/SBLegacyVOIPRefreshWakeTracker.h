// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBLEGACYVOIPREFRESHWAKETRACKER_H
#define SBLEGACYVOIPREFRESHWAKETRACKER_H

@class RBSAssertion, NSString;
@protocol SBApplicationWakeLifecycleHandling;

#import <Foundation/Foundation.h>


@interface SBLegacyVOIPRefreshWakeTracker : NSObject <SBApplicationWakeLifecycleHandling>



@property (retain, nonatomic) RBSAssertion *appKeepAliveAssertion; // ivar: _appKeepAliveAssertion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)beginWakeForApplication:(id)arg0 ;
-(CGFloat)wakeDuration;
-(id)_createAssertionForAppProcessIdentity:(id)arg0 ;
-(void)dealloc;
-(void)endWake;


@end


#endif