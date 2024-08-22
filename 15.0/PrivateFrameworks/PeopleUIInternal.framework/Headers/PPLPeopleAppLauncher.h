// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPLPEOPLEAPPLAUNCHER_H
#define PPLPEOPLEAPPLAUNCHER_H

@class RBSAssertion, RBSProcessHandle;
@protocol PPLPeopleAppLauncherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPLPeopleAppLauncher : NSObject

@property (weak, nonatomic) NSObject<PPLPeopleAppLauncherDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) RBSAssertion *initializationAssertion; // ivar: _initializationAssertion
@property (retain, nonatomic) RBSProcessHandle *peopleAppProcessHandle; // ivar: _peopleAppProcessHandle
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)sharedLauncher;
-(id)init;
-(void)launchPeopleAppIfNeededWithForegroundPriority:(BOOL)arg0 ;


@end


#endif