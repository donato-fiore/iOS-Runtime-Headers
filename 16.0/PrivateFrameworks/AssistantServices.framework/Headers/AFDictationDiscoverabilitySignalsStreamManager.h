// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFDICTATIONDISCOVERABILITYSIGNALSSTREAMMANAGER_H
#define AFDICTATIONDISCOVERABILITYSIGNALSSTREAMMANAGER_H


#import <Foundation/Foundation.h>


@interface AFDictationDiscoverabilitySignalsStreamManager : NSObject



+(void)sendDictationRequestStartedEventWithBundleIdentifier:(id)arg0 context:(id)arg1 userInfo:(id)arg2 ;
+(void)sendSendMessageSentEventWithBundleIdentifier:(id)arg0 context:(id)arg1 userInfo:(id)arg2 ;
+(void)sendSiriRequestStartedEventWithBundleIdentifier:(id)arg0 context:(id)arg1 userInfo:(id)arg2 ;


@end


#endif