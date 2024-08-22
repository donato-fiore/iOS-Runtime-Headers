// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSCOREANALYTICSLOGGER_H
#define IDSCOREANALYTICSLOGGER_H

@class NSString;
@protocol CUTMetricLogger;

#import <Foundation/Foundation.h>


@interface IDSCoreAnalyticsLogger : NSObject <CUTMetricLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultLogger;
-(id)initWithDomain:(id)arg0 ;
-(void)logMetric:(id)arg0 ;


@end


#endif