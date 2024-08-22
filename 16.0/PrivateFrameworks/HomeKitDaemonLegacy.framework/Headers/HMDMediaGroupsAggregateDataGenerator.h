// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAGROUPSAGGREGATEDATAGENERATOR_H
#define HMDMEDIAGROUPSAGGREGATEDATAGENERATOR_H

@protocol HMDMediaGroupsAggregateDataGenerator;

#import <Foundation/Foundation.h>


@interface HMDMediaGroupsAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator>





-(BOOL)shouldIgnoreGroup:(id)arg0 ;
-(id)aggregateDataWithDestinations:(id)arg0 controllers:(id)arg1 groups:(id)arg2 ;
-(id)matchingDestinationWithIdentifier:(id)arg0 withDestinations:(id)arg1 ;
-(id)transformGroup:(id)arg0 withDestinations:(id)arg1 ;
-(id)validDestinationsIdentifiersForGroup:(id)arg0 withDestinations:(id)arg1 ;


@end


#endif