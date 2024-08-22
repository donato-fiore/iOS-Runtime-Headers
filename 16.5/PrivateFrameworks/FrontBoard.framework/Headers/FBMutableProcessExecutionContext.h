// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FBMUTABLEPROCESSEXECUTIONCONTEXT_H
#define FBMUTABLEPROCESSEXECUTIONCONTEXT_H

@class NSArray, NSDictionary, RBSProcessIdentity, NSURL;
@protocol FBProcessWatchdogProviding;


#import "FBProcessExecutionContext.h"

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (copy, nonatomic) NSArray *arguments;
@property (nonatomic) BOOL checkForLeaks;
@property (nonatomic) BOOL disableASLR;
@property (copy, nonatomic) NSDictionary *environment;
@property (copy, nonatomic) RBSProcessIdentity *identity;
@property (nonatomic) NSInteger launchIntent;
@property (retain, nonatomic) NSURL *standardErrorURL;
@property (retain, nonatomic) NSURL *standardOutputURL;
@property (nonatomic) BOOL waitForDebugger;
@property (nonatomic) CGFloat watchdogExtension;
@property (retain, nonatomic) NSObject<FBProcessWatchdogProviding> *watchdogProvider;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif