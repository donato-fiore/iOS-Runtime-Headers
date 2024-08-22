// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMETRICSFIGAROBAGCONFGURATION_H
#define AMSMETRICSFIGAROBAGCONFGURATION_H

@class NSDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AMSMetricsFigaroEventModifier.h"

@interface AMSMetricsFigaroBagConfguration : NSObject

@property (readonly, nonatomic) AMSMetricsFigaroEventModifier *defaultModifier; // ivar: _defaultModifier
@property (readonly, nonatomic) NSDictionary *metricsDictionary; // ivar: _metricsDictionary
@property (readonly, nonatomic) NSArray *overrides; // ivar: _overrides
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)configurationWithBag:(id)arg0 error:(*id)arg1 ;
-(id)_generateModifiersIfNeeded;
-(id)initWithMetricsDictionary:(id)arg0 ;
-(id)modifierForEvent:(id)arg0 ;
-(void)prepareForFlush;


@end


#endif