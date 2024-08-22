// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSERVICECOMMANDDELAYEDACTION_H
#define SVXSERVICECOMMANDDELAYEDACTION_H

@class SAUIDelayedActionCommand;
@protocol SVXTaskTracking;

#import <Foundation/Foundation.h>


@interface SVXServiceCommandDelayedAction : NSObject

@property (readonly, copy, nonatomic) SAUIDelayedActionCommand *command; // ivar: _command
@property (readonly, nonatomic) NSObject<SVXTaskTracking> *taskTracker; // ivar: _taskTracker


-(id)initWithCommand:(id)arg0 taskTracker:(id)arg1 ;


@end


#endif