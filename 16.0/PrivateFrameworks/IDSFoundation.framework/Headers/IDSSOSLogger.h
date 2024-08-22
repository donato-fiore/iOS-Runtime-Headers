// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSOSLOGGER_H
#define IDSSOSLOGGER_H

@class NSString;
@protocol CUTMetricLogger;

#import <Foundation/Foundation.h>

#import "IDSRateLimiter.h"

@interface IDSSOSLogger : NSObject <CUTMetricLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSRateLimiter *rateLimiter; // ivar: _rateLimiter
@property (retain, nonatomic) NSString *sosURLString; // ivar: _sosURLString
@property (readonly) Class superclass;


+(id)logger;
+(id)loggerWithURLString:(id)arg0 ;
-(id)initWithSOSURLString:(id)arg0 ;
-(void)logMetric:(id)arg0 ;


@end


#endif