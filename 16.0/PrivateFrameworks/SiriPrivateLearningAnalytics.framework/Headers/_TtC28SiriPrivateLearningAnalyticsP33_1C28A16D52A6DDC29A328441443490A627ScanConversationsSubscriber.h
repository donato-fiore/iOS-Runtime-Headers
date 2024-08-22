// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC28SIRIPRIVATELEARNINGANALYTICSP33_1C28A16D52A6DDC29A328441443490A627SCANCONVERSATIONSSUBSCRIBER_H
#define _TTC28SIRIPRIVATELEARNINGANALYTICSP33_1C28A16D52A6DDC29A328441443490A627SCANCONVERSATIONSSUBSCRIBER_H

@protocol BPSSubscriber;

#import <Foundation/Foundation.h>


@interface _TtC28SiriPrivateLearningAnalyticsP33_1C28A16D52A6DDC29A328441443490A627ScanConversationsSubscriber : NSObject <BPSSubscriber>

 {
    ? downstream;
    ? currentConversation;
}




-(NSInteger)receiveInput:(id)arg0 ;
-(id)init;
-(void)cancel;
-(void)receiveCompletion:(id)arg0 ;
-(void)receiveSubscription:(id)arg0 ;


@end


#endif