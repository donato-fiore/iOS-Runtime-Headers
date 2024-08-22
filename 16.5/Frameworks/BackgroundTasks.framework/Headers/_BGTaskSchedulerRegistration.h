// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _BGTASKSCHEDULERREGISTRATION_H
#define _BGTASKSCHEDULERREGISTRATION_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _BGTaskSchedulerRegistration : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) id *launchHandler; // ivar: _launchHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithIdentifier:(id)arg0 queue:(id)arg1 launchHandler:(id)arg2 ;


@end


#endif