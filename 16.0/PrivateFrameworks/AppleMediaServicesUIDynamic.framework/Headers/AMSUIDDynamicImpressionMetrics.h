// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIDDYNAMICIMPRESSIONMETRICS_H
#define AMSUIDDYNAMICIMPRESSIONMETRICS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "AMSUIDDynamicImpressionMetricsIdentifier.h"

@interface AMSUIDDynamicImpressionMetrics : NSObject {
    ? custom;
    ? fields;
}


@property (nonatomic, copy) NSDictionary *custom;
@property (nonatomic, copy) NSDictionary *fields;
@property (nonatomic, retain) AMSUIDDynamicImpressionMetricsIdentifier *identifier; // ivar: identifier


-(id)init;
-(id)initWithIdentifier:(id)arg0 fields:(id)arg1 custom:(id)arg2 ;


@end


#endif