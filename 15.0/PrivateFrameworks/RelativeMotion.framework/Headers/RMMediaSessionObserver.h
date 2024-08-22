// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMEDIASESSIONOBSERVER_H
#define RMMEDIASESSIONOBSERVER_H


#import <Foundation/Foundation.h>

#import "RMRelativeMotionManager.h"

@interface RMMediaSessionObserver : NSObject

@property (retain, nonatomic) RMRelativeMotionManager *manager; // ivar: _manager


-(void)startSessionStatusUpdatesForClientMode:(NSInteger)arg0 toQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)stopSessionStatusUpdates;


@end


#endif