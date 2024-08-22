// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATDEVICESYNCSESSIONTASK_H
#define ATDEVICESYNCSESSIONTASK_H

@class ATSessionTask, NSString, ATConcreteMessageLink;
@protocol ATMessageLinkRequestHandler, OS_dispatch_queue;



@interface ATDeviceSyncSessionTask : ATSessionTask <ATMessageLinkRequestHandler>



@property (readonly, copy, nonatomic) NSString *dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *linkIdentifier; // ivar: _linkIdentifier
@property (readonly, nonatomic) ATConcreteMessageLink *messageLink; // ivar: _messageLink
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithDataClass:(id)arg0 onMessageLink:(id)arg1 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)sendRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateProgressWithCount:(NSUInteger)arg0 totalItemCount:(NSUInteger)arg1 ;


@end


#endif