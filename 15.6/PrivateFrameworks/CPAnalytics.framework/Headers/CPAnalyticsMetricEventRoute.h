// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANALYTICSMETRICEVENTROUTE_H
#define CPANALYTICSMETRICEVENTROUTE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface CPAnalyticsMetricEventRoute : NSObject

@property (readonly, nonatomic) NSString *destination; // ivar: _destination
@property (readonly, nonatomic) NSString *destinationEventKey; // ivar: _destinationEventKey
@property (readonly, nonatomic) NSArray *propertiesToInclude; // ivar: _propertiesToInclude


-(id)initWithConfig:(id)arg0 ;


@end


#endif