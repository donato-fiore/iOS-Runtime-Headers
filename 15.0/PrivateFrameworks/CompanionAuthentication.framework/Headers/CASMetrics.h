// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASMETRICS_H
#define CASMETRICS_H


#import <Foundation/Foundation.h>


@interface CASMetrics : NSObject



+(void)_sendEvent:(id)arg0 withPayloadBuilder:(id)arg1 ;
+(void)sendAppSignInSessionActivatedEvent:(struct ? )arg0 ;
+(void)sendAppSignInSessionCompletedEvent:(struct ? )arg0 ;
+(void)sendLearnMorePressedEvent;
+(void)sendStorePurchaseSessionCompletedEvent:(struct ? )arg0 ;
+(void)sendSystemSessionCompletedEvent:(struct ? )arg0 ;


@end


#endif