// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTLOOPBACKSERVICE_H
#define GTLOOPBACKSERVICE_H

@protocol GTLoopbackService, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GTLoopbackService : NSObject <GTLoopbackService>

 {
    NSObject<OS_os_log> *_log;
    NSObject<OS_dispatch_queue> *_serialQueue;
}




-(id)echo:(id)arg0 ;
-(id)init;
-(void)echo:(id)arg0 completionHandler:(id)arg1 ;
-(void)echo:(id)arg0 repeat:(NSUInteger)arg1 callback:(id)arg2 ;
// -(void)echo:(id)arg0 repeat:(NSUInteger)arg1 callback:(id)arg2 complete:(unk)arg3  ;


@end


#endif