// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOTHROTTLERANALYTICSFORMATTER_H
#define GEOTHROTTLERANALYTICSFORMATTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface GEOThrottlerAnalyticsFormatter : NSObject {
    NSMutableDictionary *_throttlerAggregatedInfo;
}




+(id)sharedThrottlerFormatter;
-(BOOL)hasInitialInfoForKeyPath:(id)arg0 ;
-(BOOL)hasThrottledInfoForKeyPath:(id)arg0 ;
-(id)init;
-(int)networkServiceForRequestKind:(struct ? )arg0 ;
-(int)throttleModeForString:(id)arg0 ;
-(int)throttleTypeForString:(id)arg0 ;
-(void)addThrottledReqForKeyPath:(id)arg0 at:(id)arg1 ;
-(void)captureThrottledReqsForKeyPath:(id)arg0 maxReqCount:(id)arg1 policyTimeWindow:(CGFloat)arg2 ;
-(void)setRequestInfoForKeyPath:(id)arg0 at:(id)arg1 kind:(struct ? )arg2 appId:(id)arg3 ;


@end


#endif