// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBOOTDEFAULTS_H
#define SBBOOTDEFAULTS_H

@class NSDictionary, NSString;


#import "SBAbstractSpringBoardDefaultDomain.h"

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) NSDictionary *bootTransitionContext;
@property (readonly, nonatomic) BOOL dontLockAfterCrash;
@property (nonatomic) BOOL hasCompletedSynchronizingCloudCriticalData;
@property (retain, nonatomic) NSString *lastRestoreIdentifier;
@property (retain, nonatomic) NSString *lastSystemBuildVersion;
@property (readonly, nonatomic) BOOL recordBootTimeTillDidFinishLaunching;


-(void)_bindAndRegisterDefaults;


@end


#endif