// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLSESSIONRESPONSECONSUMERDATACOMPLETIONHANDLER_H
#define NWURLSESSIONRESPONSECONSUMERDATACOMPLETIONHANDLER_H

@class NSURLResponse, NSString;
@protocol NWURLSessionResponseConsumer, OS_dispatch_data;

#import <Foundation/Foundation.h>


@interface NWURLSessionResponseConsumerDataCompletionHandler : NSObject <NWURLSessionResponseConsumer>

 {
    id *_completionHandler;
    NSURLResponse *_currentResponse;
    NSObject<OS_dispatch_data> *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSURLResponse *response;
@property (readonly) Class superclass;


-(void)task:(id)arg0 deliverData:(id)arg1 complete:(BOOL)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)task:(id)arg0 deliverResponse:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif