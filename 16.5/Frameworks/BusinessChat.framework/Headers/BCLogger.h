// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCLOGGER_H
#define BCLOGGER_H


#import <Foundation/Foundation.h>


@interface BCLogger : NSObject



+(void)logEventWithName:(id)arg0 businessURI:(id)arg1 callToActionText:(id)arg2 bizItemReturnedAfterAction:(BOOL)arg3 latency:(NSInteger)arg4 ;
+(void)logEventWithName:(id)arg0 version:(NSInteger)arg1 status:(id)arg2 ;
-(void)mt_log_icloud_messages_apps_businessframework:(id)arg0 version:(NSInteger)arg1 ;


@end


#endif