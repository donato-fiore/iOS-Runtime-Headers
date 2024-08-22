// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLSPPTIMELOCATIONCLUSTER_H
#define CLSPPTIMELOCATIONCLUSTER_H

@class PHAssetCollection, NSString, NSDate, CLCircularRegion;
@protocol CLSTimeLocationTuple;

#import <Foundation/Foundation.h>


@interface CLSPPTimeLocationCluster : NSObject <CLSTimeLocationTuple>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) CLLocationCoordinate2D coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSDate *expandedEndDate; // ivar: _expandedEndDate
@property (readonly, nonatomic) NSDate *expandedStartDate; // ivar: _expandedStartDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CLCircularRegion *region; // ivar: _region
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *timeLocationIdentifier;


-(id)initWithAssetCollection:(id)arg0 region:(id)arg1 ;


@end


#endif