// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTOBJECT_H
#define MTOBJECT_H


#import <Foundation/Foundation.h>

#import "MTMetricsKitTemplate.h"

@interface MTObject : NSObject

@property (weak, nonatomic) MTMetricsKitTemplate *metricsKit; // ivar: _metricsKit


-(id)initWithMetricsKit:(id)arg0 ;


@end


#endif