// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSMESSAGEPROCESSINGSTRATEGY_H
#define SIRIANALYTICSMESSAGEPROCESSINGSTRATEGY_H


#import <Foundation/Foundation.h>


@interface SiriAnalyticsMessageProcessingStrategy : NSObject {
    ? queue;
    ? localStorageDispatcher;
    ? debouncedFBF;
}




-(id)init;
-(id)initWithQueue:(id)arg0 localStorageDispatcher:(id)arg1 featureFlags:(id)arg2 fbf:(id)arg3 ;
-(void)processWithMessages:(id)arg0 ;


@end


#endif