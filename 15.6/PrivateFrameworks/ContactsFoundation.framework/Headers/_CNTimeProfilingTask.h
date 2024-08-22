// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNTIMEPROFILINGTASK_H
#define _CNTIMEPROFILINGTASK_H

@protocol CNTaskTimeProfileLogging, CNTimeProvider;


#import "CNTask.h"

@interface _CNTimeProfilingTask : CNTask

@property (readonly) NSObject<CNTaskTimeProfileLogging> *logger; // ivar: _logger
@property (readonly) CNTask *task; // ivar: _task
@property (readonly) NSObject<CNTimeProvider> *timeProvider; // ivar: _timeProvider


-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithTask:(id)arg0 timeProvider:(id)arg1 logger:(id)arg2 ;
-(id)initWithTask:(id)arg0 timeProvider:(id)arg1 os_log:(id)arg2 ;
-(id)run;


@end


#endif