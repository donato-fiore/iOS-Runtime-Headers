// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FEATURESDAEMON_H
#define FEATURESDAEMON_H


#import <Foundation/Foundation.h>

#import "DaemonController.h"

@interface FeaturesDaemon : NSObject

@property (retain, nonatomic) DaemonController *controller; // ivar: _controller


+(id)sharedInstance;
-(id)init;
-(void)start;


@end


#endif