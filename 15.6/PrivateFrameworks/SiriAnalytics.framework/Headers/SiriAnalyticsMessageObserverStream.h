// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIANALYTICSMESSAGEOBSERVERSTREAM_H
#define SIRIANALYTICSMESSAGEOBSERVERSTREAM_H

@class NSHashTable, NSString;
@protocol SiriAnalyticsMessageProducer, SiriAnalyticsObservableMessages, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsMessageObserverStream : NSObject <SiriAnalyticsMessageProducer, SiriAnalyticsObservableMessages>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_messageObservers;
    NSHashTable *_messageObserverDelegates;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(id)subscribeWithMessagesProduced:(id)arg0 ;
-(void)_publishMessagesToAllObservers:(id)arg0 ;
-(void)_removeObserverHandle:(id)arg0 ;
-(void)addObserverDelegate:(id)arg0 ;
-(void)produceMessages:(id)arg0 completion:(id)arg1 ;
-(void)removeObserverDelegate:(id)arg0 ;


@end


#endif