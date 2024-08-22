// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEALTHSERVICEDISCOVERY_H
#define HKHEALTHSERVICEDISCOVERY_H


#import <Foundation/Foundation.h>


@interface HKHealthServiceDiscovery : NSObject

@property (copy, nonatomic) id *discoveryHandler; // ivar: _discoveryHandler
@property (nonatomic) NSUInteger discoveryIdentifier; // ivar: _discoveryIdentifier
@property (readonly, nonatomic) NSInteger serviceType; // ivar: _serviceType


-(id)initForAllTypes;
-(id)initWithType:(NSInteger)arg0 ;


@end


#endif