// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASSISTANTSIRIANALYTICSMESSAGETAILING_H
#define ASSISTANTSIRIANALYTICSMESSAGETAILING_H

@protocol SiriAnalyticsMessageObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SiriAnalyticsPreferences.h"

@interface AssistantSiriAnalyticsMessageTailing : NSObject <SiriAnalyticsMessageObserverDelegate>

 {
    SiriAnalyticsPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_messageTailingQueue;
}




-(id)init;
-(id)initWithPreferences:(id)arg0 observable:(id)arg1 ;
-(void)_tailMessages:(id)arg0 ;
-(void)analyticsMessageObserver:(id)arg0 producedMessages:(id)arg1 ;
-(void)tailAnyEvents:(id)arg0 ;


@end


#endif