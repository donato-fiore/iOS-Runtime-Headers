// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLSYNCSESSIONMETRICS_H
#define CPLSYNCSESSIONMETRICS_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface CPLSyncSessionMetrics : NSObject

@property (copy, nonatomic) NSDictionary *metricsDict; // ivar: _metricsDict


-(id)init;
-(id)initWithMetricsDict:(id)arg0 ;
-(void)incrementCountForKey:(id)arg0 ;


@end


#endif