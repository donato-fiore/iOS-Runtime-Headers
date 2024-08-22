// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ADBACKGROUNDTASKSCHEDULER_H
#define ADBACKGROUNDTASKSCHEDULER_H



#import "ADSingleton.h"

@interface ADBackgroundTaskScheduler : ADSingleton



+(id)sharedInstance;
+(void)registerTaskDelegate:(id)arg0 forRequestID:(id)arg1 ;
+(void)unregisterTaskDelegate:(id)arg0 ;
-(id)init;
-(void)addBackgroundTask:(id)arg0 ;
-(void)cancelBackgroundTask:(id)arg0 ;
-(void)checkOnTask:(id)arg0 ;
-(void)handleXPCActivity:(id)arg0 withID:(id)arg1 ;


@end


#endif