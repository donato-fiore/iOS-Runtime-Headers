// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FMDAEMON_H
#define FMDAEMON_H


#import <Foundation/Foundation.h>


@interface FMDaemon : NSObject



-(id)verifyLaunchEventsConfiguration:(id)arg0 withExclusions:(id)arg1 ;
-(id)xpcDarwinEventHandlers;
-(id)xpcDistributedEventHandlers;
-(void)initialize;
-(void)registerXPCEventHandlers;
-(void)run;
-(void)startup;
-(void)startupWithCompletion:(id)arg0 ;


@end


#endif