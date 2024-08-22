// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANANALYTICSCONTEXT_H
#define ANANALYTICSCONTEXT_H

@class NSDictionary;
@protocol ANAnalyticsPayloadProvider;

#import <Foundation/Foundation.h>


@interface ANAnalyticsContext : NSObject <ANAnalyticsPayloadProvider>



@property (readonly) NSDictionary *analyticsPayload;
@property (nonatomic) BOOL isEndpoint; // ivar: _isEndpoint


+(id)contextWithAnnouncer:(id)arg0 ;
+(id)contextWithEndpointID:(id)arg0 ;


@end


#endif