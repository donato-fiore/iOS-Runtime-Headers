// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ANEANALYTICSTASK_H
#define _ANEANALYTICSTASK_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface _ANEAnalyticsTask : NSObject

@property (readonly, nonatomic) NSDictionary *metrics; // ivar: _metrics


+(id)objectWithMetrics:(id)arg0 ;
-(id)initWithMetrics:(id)arg0 ;
-(id)serialize;


@end


#endif