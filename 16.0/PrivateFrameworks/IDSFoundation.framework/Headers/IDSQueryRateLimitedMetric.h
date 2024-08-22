// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSQUERYRATELIMITEDMETRIC_H
#define IDSQUERYRATELIMITEDMETRIC_H

@class NSNumber, NSString, NSDictionary;
@protocol CUTCoreAnalyticsMetric;

#import <Foundation/Foundation.h>


@interface IDSQueryRateLimitedMetric : NSObject <CUTCoreAnalyticsMetric>



@property (readonly, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *timeSinceStart; // ivar: _timeSinceStart
@property (readonly, nonatomic) NSString *topLevelService; // ivar: _topLevelService


-(id)initWithTopLevelService:(id)arg0 count:(id)arg1 timeSinceStart:(id)arg2 ;


@end


#endif