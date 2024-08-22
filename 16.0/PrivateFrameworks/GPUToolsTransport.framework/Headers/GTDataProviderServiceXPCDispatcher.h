// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTDATAPROVIDERSERVICEXPCDISPATCHER_H
#define GTDATAPROVIDERSERVICEXPCDISPATCHER_H

@protocol GTDataProviderServiceXPCDispatcher, OS_os_log, GTDataProviderService;


#import "GTXPCDispatcher.h"

@interface GTDataProviderServiceXPCDispatcher : GTXPCDispatcher <GTDataProviderServiceXPCDispatcher>

 {
    NSObject<OS_os_log> *_log;
    id<GTDataProviderService> *_implInstance;
}




-(id)initWithService:(id)arg0 ;
-(void)getData_:(id)arg0 replyConnection:(id)arg1 ;
-(void)uploadFragment_forHandle_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif