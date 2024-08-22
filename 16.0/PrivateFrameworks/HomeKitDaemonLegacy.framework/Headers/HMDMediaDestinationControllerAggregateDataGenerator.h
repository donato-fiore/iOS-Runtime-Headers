// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIADESTINATIONCONTROLLERAGGREGATEDATAGENERATOR_H
#define HMDMEDIADESTINATIONCONTROLLERAGGREGATEDATAGENERATOR_H

@protocol HMDMediaGroupsAggregateDataGenerator;

#import <Foundation/Foundation.h>


@interface HMDMediaDestinationControllerAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator>





-(id)aggregateDataWithDestinations:(id)arg0 controllers:(id)arg1 groups:(id)arg2 ;
-(id)validDestinationForDestinationControllerData:(id)arg0 inDestinations:(id)arg1 ;


@end


#endif