// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIDYNAMICIMPRESSIONMETRICS_H
#define AMSUIDYNAMICIMPRESSIONMETRICS_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "AMSUIDynamicImpressionMetricsIdentifier.h"

@interface AMSUIDynamicImpressionMetrics : NSObject

@property (retain, nonatomic) NSDictionary *custom; // ivar: _custom
@property (retain, nonatomic) NSDictionary *fields; // ivar: _fields
@property (retain, nonatomic) AMSUIDynamicImpressionMetricsIdentifier *identifier; // ivar: _identifier


-(id)initWithIdentifier:(id)arg0 fields:(id)arg1 custom:(id)arg2 ;


@end


#endif