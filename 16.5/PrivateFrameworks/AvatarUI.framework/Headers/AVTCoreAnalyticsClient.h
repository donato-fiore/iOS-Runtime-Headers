// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTCOREANALYTICSCLIENT_H
#define AVTCOREANALYTICSCLIENT_H

@protocol AVTCoreAnalyticsClient;

#import <Foundation/Foundation.h>


@interface AVTCoreAnalyticsClient : NSObject <AVTCoreAnalyticsClient>





-(void)ADClientAddValueForScalarKey:(id)arg0 ;
-(void)ADClientPushValueForDistributionKey:(id)arg0 ;
-(void)ADClientSetValueForScalarKey:(id)arg0 ;
-(void)sendEventForKey:(id)arg0 payload:(id)arg1 ;


@end


#endif