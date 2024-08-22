// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSURESOURCEREQUESTANALYTICSSENDER_H
#define TSURESOURCEREQUESTANALYTICSSENDER_H


#import <Foundation/Foundation.h>


@interface TSUResourceRequestAnalyticsSender : NSObject



+(id)sharedInstanceQueue;
+(void)sendAnalyticsForResourceRequest:(id)arg0 error:(id)arg1 ;
+(void)setSharedAnalyticsSender:(id)arg0 ;
-(void)sendAnalyticsForResourceRequest:(id)arg0 error:(id)arg1 ;


@end


#endif