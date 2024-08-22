// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSANALYTICSEVENTSERVICEREQUEST_H
#define TPSANALYTICSEVENTSERVICEREQUEST_H

@class NSString, NSURL;


#import "TPSAnalyticsEvent.h"

@interface TPSAnalyticsEventServiceRequest : TPSAnalyticsEvent {
    NSString *_type;
    NSURL *_url;
    NSInteger _statusCode;
    NSString *_etag;
    NSUInteger _requestTime;
    NSUInteger _requestTtfb;
    NSInteger _responseHeadersSize;
    NSInteger _responseSize;
    NSUInteger _responseTime;
    NSUInteger _timeToDownloadResponse;
}




+(BOOL)supportsSecureCoding;
+(id)serviceRequestEventWithType:(id)arg0 metrics:(id)arg1 ;
-(id)_initWithType:(id)arg0 metrics:(id)arg1 ;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif