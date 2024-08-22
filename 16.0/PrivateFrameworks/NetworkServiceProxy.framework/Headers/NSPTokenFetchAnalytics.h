// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPTOKENFETCHANALYTICS_H
#define NSPTOKENFETCHANALYTICS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPTokenFetchAnalytics : NSPProxyAnalytics

@property (nonatomic) NSUInteger activatedCount; // ivar: _activatedCount
@property (retain, nonatomic) NSString *authenticationType; // ivar: _authenticationType
@property (nonatomic) NSInteger httpCode; // ivar: _httpCode
@property (nonatomic) CGFloat latency; // ivar: _latency
@property (nonatomic) NSInteger nsurlErrorCode; // ivar: _nsurlErrorCode
@property (retain, nonatomic) NSString *proxyURL; // ivar: _proxyURL
@property (retain, nonatomic) NSString *proxyVendor; // ivar: _proxyVendor
@property (nonatomic) NSString *requestedServerUUID; // ivar: _requestedServerUUID
@property (nonatomic) NSUInteger requestedTokenCount; // ivar: _requestedTokenCount
@property (retain, nonatomic) NSString *tierType; // ivar: _tierType


-(id)analyticsDict;
-(id)eventName;


@end


#endif