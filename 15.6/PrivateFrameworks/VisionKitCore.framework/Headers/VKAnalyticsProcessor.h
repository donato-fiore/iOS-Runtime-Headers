// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VKANALYTICSPROCESSOR_H
#define VKANALYTICSPROCESSOR_H


#import <Foundation/Foundation.h>

#import "VKAnalyticsSessionAccumulator.h"

@interface VKAnalyticsProcessor : NSObject

@property (retain, nonatomic) VKAnalyticsSessionAccumulator *sessionAccumulator; // ivar: _sessionAccumulator


-(void)processAndSendEvent:(id)arg0 ;
-(void)processAndSendSession:(id)arg0 ;
-(void)sendCoreAnalyticsEvent:(id)arg0 block:(id)arg1 ;


@end


#endif