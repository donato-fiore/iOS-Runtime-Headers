// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11ACTIVITYKITP33_D074D31B035C9B27F4F7807A7D21110D9SINGLETON_H
#define _TTC11ACTIVITYKITP33_D074D31B035C9B27F4F7807A7D21110D9SINGLETON_H

@protocol ACActivityFrequentUpdatesObservationXPCClient;

#import <Foundation/Foundation.h>


@interface _TtC11ActivityKitP33_D074D31B035C9B27F4F7807A7D21110D9Singleton : NSObject <ACActivityFrequentUpdatesObservationXPCClient>

 {
    ? queue;
    ? connection;
    ? serverStartupToken;
    ? activities;
    ? activityDiffPublisher;
}




-(id)init;
-(void)activityDidExceedReducedPushBudgetForIdentifier:(id)arg0 ;
-(void)activityDidUnsubscribeForIdentifier:(id)arg0 ;


@end


#endif