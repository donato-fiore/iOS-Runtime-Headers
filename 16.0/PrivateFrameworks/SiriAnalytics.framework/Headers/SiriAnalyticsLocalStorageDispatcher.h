// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIANALYTICSLOCALSTORAGEDISPATCHER_H
#define SIRIANALYTICSLOCALSTORAGEDISPATCHER_H

@protocol SiriAnalyticsMessageStorage;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsLocalStorageDispatcher : NSObject <SiriAnalyticsMessageStorage>

 {
    ? queue;
    ? messageStore;
    ? legacyStorage;
}




-(id)init;
-(id)initWithQueue:(id)arg0 messageStore:(id)arg1 legacyStorage:(id)arg2 ;
-(void)storeMessages:(id)arg0 ;


@end


#endif