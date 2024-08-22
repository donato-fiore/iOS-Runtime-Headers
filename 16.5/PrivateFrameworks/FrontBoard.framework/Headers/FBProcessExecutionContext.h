// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBPROCESSEXECUTIONCONTEXT_H
#define FBPROCESSEXECUTIONCONTEXT_H

@class NSArray, NSDictionary, RBSProcessIdentity, NSURL;
@protocol NSCopying, NSMutableCopying, FBProcessWatchdogProviding;

#import <Foundation/Foundation.h>


@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying>



@property (copy, nonatomic) NSArray *arguments; // ivar: _arguments
@property (nonatomic) BOOL checkForLeaks; // ivar: _checkForLeaks
@property (nonatomic) BOOL disableASLR; // ivar: _disableASLR
@property (copy, nonatomic) NSDictionary *environment; // ivar: _environment
@property (nonatomic) BOOL forSceneActivation; // ivar: _forSceneActivation
@property (copy, nonatomic) RBSProcessIdentity *identity; // ivar: _identity
@property (nonatomic) NSInteger launchIntent; // ivar: _launchIntent
@property (retain, nonatomic) NSURL *standardErrorURL; // ivar: _standardErrorURL
@property (retain, nonatomic) NSURL *standardOutputURL; // ivar: _standardOutputURL
@property (nonatomic) BOOL waitForDebugger; // ivar: _waitForDebugger
@property (nonatomic) CGFloat watchdogExtension; // ivar: _watchdogExtension
@property (retain, nonatomic) NSObject<FBProcessWatchdogProviding> *watchdogProvider; // ivar: _watchdogProvider


-(id)_initWithExecutionContext:(id)arg0 ;
-(id)copyOrUpdateForSceneActivationWithSettings:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentity:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif