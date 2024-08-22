// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDEVENTTRIGGERDEPENDENCYFACTORY_H
#define HMDEVENTTRIGGERDEPENDENCYFACTORY_H

@protocol HMDEventTriggerDependencyFactory;

#import <Foundation/Foundation.h>

#import "HMDLaunchHandler.h"

@interface HMDEventTriggerDependencyFactory : NSObject <HMDEventTriggerDependencyFactory>



@property (readonly, nonatomic) HMDLaunchHandler *launchHandler;


-(id)createTimerWithTimeInterval:(CGFloat)arg0 options:(NSUInteger)arg1 ;


@end


#endif