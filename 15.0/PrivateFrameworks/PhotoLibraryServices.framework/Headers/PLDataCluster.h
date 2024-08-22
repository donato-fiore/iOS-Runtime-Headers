// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLDATACLUSTER_H
#define PLDATACLUSTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLDataCluster : NSObject

@property (retain, nonatomic) id *clustroid; // ivar: _clustroid
@property (nonatomic) CGFloat diameter; // ivar: _diameter
@property (retain, nonatomic) NSArray *objects; // ivar: _objects
@property (nonatomic) CGFloat score; // ivar: _score


+(id)clusterWithObjects:(id)arg0 ;
+(id)clusterWithObjects:(id)arg0 clustroid:(id)arg1 diameter:(CGFloat)arg2 ;
-(id)approximateRegionWithMaximumRadius:(CGFloat)arg0 ;
-(id)description;
-(id)init;
-(id)locations;
-(id)meanRegion:(CGFloat)arg0 ;
-(id)meanUniversalDate;
-(id)universalDates;


@end


#endif