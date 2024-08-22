// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABCMAINTENANCEACTIVITY_H
#define ABCMAINTENANCEACTIVITY_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ABCMaintenanceActivity : NSObject

@property (copy, nonatomic) id *activityBlock; // ivar: _activityBlock
@property (retain, nonatomic) NSString *activityIdentifier; // ivar: _activityIdentifier
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *activityQueue; // ivar: _activityQueue




@end


#endif