// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIASYSTEMSAGGREGATEDATAGENERATOR_H
#define HMDMEDIASYSTEMSAGGREGATEDATAGENERATOR_H

@protocol HMDMediaGroupsAggregateDataGenerator, HMDMediaSystemsAggregateDataGeneratorDataSource;

#import <Foundation/Foundation.h>


@interface HMDMediaSystemsAggregateDataGenerator : NSObject <HMDMediaGroupsAggregateDataGenerator>



@property (weak) NSObject<HMDMediaSystemsAggregateDataGeneratorDataSource> *dataSource; // ivar: _dataSource


+(BOOL)isValidLeftDestination:(id)arg0 rightDestination:(id)arg1 ;
+(NSUInteger)deriveSupportedOptionsFromLeftDestination:(id)arg0 rightDestination:(id)arg1 ;
+(id)derivedDestinationForGroup:(id)arg0 leftDestination:(id)arg1 rightDestination:(id)arg2 ;
+(id)derivedMediaDestinationIdentifierForGroupIdentifier:(id)arg0 ;
-(BOOL)hasRoleType:(NSUInteger)arg0 mediaSystemData:(id)arg1 destination:(id)arg2 ;
-(id)aggregateDataWithDestinations:(id)arg0 controllers:(id)arg1 groups:(id)arg2 ;
-(id)destinationWithRoleType:(NSUInteger)arg0 mediaSystemData:(id)arg1 destinations:(id)arg2 ;
-(id)nameForMediaSystemData:(id)arg0 room:(id)arg1 ;
-(id)roomForAllDestinationParentIdentifiers:(id)arg0 ;


@end


#endif