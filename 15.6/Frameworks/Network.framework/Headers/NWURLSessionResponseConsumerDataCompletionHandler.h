// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWURLSESSIONRESPONSECONSUMERDATACOMPLETIONHANDLER_H
#define NWURLSESSIONRESPONSECONSUMERDATACOMPLETIONHANDLER_H

@class NSURLResponse, NSString;
@protocol NWURLSessionResponseConsumer, OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "NWURLSessionDataTask.h"
#import "NWURLSessionDelegateWrapper.h"

@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject <NWURLSessionResponseConsumer>

 {
    NWURLSessionDataTask *_task;
    NWURLSessionDelegateWrapper *_delegateWrapper;
    id *_completionHandler;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSURLResponse *response;
@property (readonly) Class superclass;


-(void)deliverData:(id)arg0 complete:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)deliverResponse:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif