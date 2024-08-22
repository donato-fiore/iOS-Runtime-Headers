// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VKANALYTICSPROCESSOR_H
#define VKANALYTICSPROCESSOR_H


#import <Foundation/Foundation.h>

#import "VKAnalyticsSessionAccumulator.h"

@interface VKAnalyticsProcessor : NSObject

@property (nonatomic) BOOL isPublicAPI; // ivar: _isPublicAPI
@property (retain, nonatomic) VKAnalyticsSessionAccumulator *sessionAccumulator; // ivar: _sessionAccumulator


-(void)processAndSendEvent:(id)arg0 ;
-(void)processAndSendSession:(id)arg0 ;
-(void)sendCoreAnalyticsEvent:(id)arg0 block:(id)arg1 ;


@end


#endif