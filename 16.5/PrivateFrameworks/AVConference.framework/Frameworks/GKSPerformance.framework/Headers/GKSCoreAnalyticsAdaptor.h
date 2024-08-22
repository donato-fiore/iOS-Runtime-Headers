// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSCOREANALYTICSADAPTOR_H
#define GKSCOREANALYTICSADAPTOR_H


#import <Foundation/Foundation.h>


@interface GKSCoreAnalyticsAdaptor : NSObject



+(BOOL)analyticsSendEventWrapper:(id)arg0 withPayload:(id)arg1 hasHistogram:(BOOL)arg2 ;
+(id)fullEventName:(id)arg0 ;


@end


#endif