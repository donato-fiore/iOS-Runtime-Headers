// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSTOREREVIEWCONTROLLER_H
#define SKSTOREREVIEWCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SKStoreReviewController : NSObject



+(NSUInteger)convertInterfaceOrientation:(NSInteger)arg0 ;
+(void)requestReview;
+(void)requestReviewInScene:(id)arg0 ;
+(void)requestReviewViaDirectInjectionFlowInScene:(id)arg0 requestToken:(id)arg1 ;


@end


#endif