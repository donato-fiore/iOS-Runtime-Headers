// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLASSETCLUSTER_H
#define PLASSETCLUSTER_H

@class NSArray, NSDate, CLLocation;

#import <Foundation/Foundation.h>


@interface PLAssetCluster : NSObject

@property (readonly, nonatomic) NSArray *assets; // ivar: _assets
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) CLLocation *location; // ivar: _location
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(id)mergedCluster:(id)arg0 ;
+(id)sortByTimeSortDescriptors;
-(id)description;
-(id)initWithAssetsSortedByDate:(id)arg0 region:(id)arg1 ;


@end


#endif