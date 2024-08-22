// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIMETRICSCONTROLLER_H
#define SKUIMETRICSCONTROLLER_H

@class SSMetricsController, NSNumber, NSString, SSMetricsConfiguration;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "SKUIMetricsImpressionSession.h"

@interface SKUIMetricsController : NSObject {
    SKUIMetricsImpressionSession *_activeImpressionsSession;
    SSMetricsController *_controller;
    BOOL _flushesImmediately;
    BOOL _impressionsEnabled;
    NSObject<OS_dispatch_source> *_impressionsTimer;
    BOOL _loggingEnabled;
}


@property (readonly, nonatomic) NSNumber *accountIdentifier;
@property (readonly, nonatomic) SKUIMetricsImpressionSession *activeImpressionsSession;
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) CGFloat flushInterval;
@property (readonly, nonatomic) SSMetricsConfiguration *globalConfiguration; // ivar: _globalConfiguration
@property (copy, nonatomic) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property (retain, nonatomic) SSMetricsConfiguration *pageConfiguration; // ivar: _pageConfiguration
@property (copy, nonatomic) NSString *pageContext; // ivar: _pageContext
@property (copy, nonatomic) NSString *pageURL; // ivar: _pageURL
@property (copy, nonatomic) NSString *topic; // ivar: _topic
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (copy, nonatomic) NSString *windowOrientation; // ivar: _windowOrientation


+(void)flushImmediately;
-(BOOL)canRecordEventWithType:(id)arg0 ;
-(id)clickEventWithItem:(id)arg0 locationPosition:(NSInteger)arg1 ;
-(id)compoundStringWithElements:(id)arg0 ;
-(id)initWithGlobalConfiguration:(id)arg0 ;
-(id)itemOfferClickEventWithItem:(id)arg0 locationPosition:(NSInteger)arg1 ;
-(id)locationWithPageComponent:(id)arg0 ;
-(id)locationWithPosition:(NSInteger)arg0 type:(id)arg1 fieldData:(id)arg2 ;
-(id)performActionForItem:(id)arg0 ;
-(id)performActionForItem:(id)arg0 clientContext:(id)arg1 ;
-(id)performActionForItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 ;
-(id)performActionForItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(id)performActionForSoftwareItem:(id)arg0 offer:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3 ;
-(id)tokenStringWithElements:(id)arg0 ;
-(void)_insertEvent:(id)arg0 ;
-(void)_recordActiveImpressions;
-(void)_waitUntilRecordingComplete;
-(void)closeImpressionsSession;
-(void)dealloc;
-(void)flushImmediately;
-(void)pingURLs:(id)arg0 ;
-(void)pingURLs:(id)arg0 withClientContext:(id)arg1 ;
-(void)recordBuyConfirmedEventsForItems:(id)arg0 purchaseResponses:(id)arg1 ;
-(void)recordEvent:(id)arg0 ;


@end


#endif