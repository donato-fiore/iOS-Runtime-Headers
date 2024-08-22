// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSPCONFIGURATIONFETCHANALYTICS_H
#define NSPCONFIGURATIONFETCHANALYTICS_H

@class NSString;


#import "NSPProxyAnalytics.h"

@interface NSPConfigurationFetchAnalytics : NSPProxyAnalytics

@property (retain, nonatomic) NSString *configFetchURL; // ivar: _configFetchURL
@property (nonatomic) NSInteger httpCode; // ivar: _httpCode
@property (nonatomic) CGFloat latency; // ivar: _latency
@property (nonatomic) NSInteger nsurlErrorCode; // ivar: _nsurlErrorCode
@property (nonatomic) NSString *reason; // ivar: _reason
@property (retain, nonatomic) NSString *requestedServerUUID; // ivar: _requestedServerUUID


-(id)analyticsDict;
-(id)eventName;


@end


#endif