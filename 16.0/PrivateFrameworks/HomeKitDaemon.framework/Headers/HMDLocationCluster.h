// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDLOCATIONCLUSTER_H
#define HMDLOCATIONCLUSTER_H

@class HMFObject, CLLocation, NSString, NSArray;
@protocol HMFLogging;



@interface HMDLocationCluster : HMFObject <HMFLogging>



@property (readonly, copy) CLLocation *bestLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSArray *locations; // ivar: _locations
@property (readonly) Class superclass;


+(id)logCategory;
-(id)attributeDescriptions;
-(id)generateNewGroupsFromGroups:(id)arg0 ;
-(id)initWithLocations:(id)arg0 ;
-(id)kMeansClusteredGroups;
-(id)locationFromKMeansClusteredGroups:(id)arg0 ;
-(void)clusterWithGroups:(id)arg0 ;


@end


#endif