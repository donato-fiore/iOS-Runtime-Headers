// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RBLAUNCHTRACKER_H
#define RBLAUNCHTRACKER_H

@class NSMutableDictionary;
@protocol RBTimeProviding;

#import <Foundation/Foundation.h>


@interface RBLaunchTracker : NSObject {
    NSMutableDictionary *_lastLaunch;
    NSMutableDictionary *_launchBeforeLast;
    id<RBTimeProviding> *_timeProvider;
}




-(CGFloat)nextAllowedLaunchOfIdentity:(id)arg0 ;
-(id)initWithTimeProvider:(id)arg0 ;
-(void)trackLaunchOfIdentity:(id)arg0 ;


@end


#endif