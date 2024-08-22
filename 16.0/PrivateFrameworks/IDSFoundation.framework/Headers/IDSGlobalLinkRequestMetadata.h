// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSGLOBALLINKREQUESTMETADATA_H
#define IDSGLOBALLINKREQUESTMETADATA_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IDSGFTMetricsRequest.h"

@interface IDSGlobalLinkRequestMetadata : NSObject

@property (readonly) IDSGFTMetricsRequest *metricsRequest; // ivar: _metricsRequest
@property (readonly) CGFloat startTime; // ivar: _startTime
@property (readonly) NSString *token; // ivar: _token


-(id)initWithStartTime:(CGFloat)arg0 token:(id)arg1 metricsRequest:(id)arg2 ;


@end


#endif