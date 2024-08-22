// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HEALTHAPPLINKBUILDER_H
#define HEALTHAPPLINKBUILDER_H

@class HKHealthStore;

#import <Foundation/Foundation.h>


@interface HealthAppLinkBuilder : NSObject

@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore


-(id)init;
-(id)initWithHealthStore:(id)arg0 ;


@end


#endif