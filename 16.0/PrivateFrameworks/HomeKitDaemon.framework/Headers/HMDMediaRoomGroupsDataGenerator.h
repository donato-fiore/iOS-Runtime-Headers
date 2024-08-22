// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMEDIAROOMGROUPSDATAGENERATOR_H
#define HMDMEDIAROOMGROUPSDATAGENERATOR_H

@class NSString;
@protocol HMFLogging, HMDMediaGroupsAggregateDataGenerator, HMDMediaRoomGroupsDataGeneratorDataSource;

#import <Foundation/Foundation.h>


@interface HMDMediaRoomGroupsDataGenerator : NSObject <HMFLogging, HMDMediaGroupsAggregateDataGenerator>



@property (weak) NSObject<HMDMediaRoomGroupsDataGeneratorDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)destination:(id)arg0 isInRoom:(id)arg1 ;
-(id)aggregateDataWithDestinations:(id)arg0 controllers:(id)arg1 groups:(id)arg2 ;
-(id)destinationIdentifiersAssignedToRoom:(id)arg0 destinations:(id)arg1 ;
-(id)roomForDestination:(id)arg0 ;
-(id)roomGroupForRoom:(id)arg0 destinations:(id)arg1 ;
-(id)rooms;


@end


#endif