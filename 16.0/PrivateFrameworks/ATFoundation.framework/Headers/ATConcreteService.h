// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATCONCRETESERVICE_H
#define ATCONCRETESERVICE_H

@class ATService, NSString;
@protocol ATMessageLinkObserver, ATMessageLinkRequestHandler, OS_dispatch_queue, OS_dispatch_source;



@interface ATConcreteService : ATService <ATMessageLinkObserver, ATMessageLinkRequestHandler>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_signalSource;
    CGFloat _startTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)run;
-(BOOL)stop;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)messageLinkWasInitialized:(id)arg0 ;
-(void)messageLinkWasOpened:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif