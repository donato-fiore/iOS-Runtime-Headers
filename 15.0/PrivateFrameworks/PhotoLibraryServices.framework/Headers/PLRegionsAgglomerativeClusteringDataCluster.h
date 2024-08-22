// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLREGIONSAGGLOMERATIVECLUSTERINGDATACLUSTER_H
#define PLREGIONSAGGLOMERATIVECLUSTERINGDATACLUSTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject

@property (nonatomic) CGFloat latitude; // ivar: _latitude
@property (nonatomic) CGFloat longitude; // ivar: _longitude
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) CGFloat score; // ivar: _score
@property (readonly) NSArray *vectors; // ivar: _vectors


+(id)dataClusterWithDataVector:(id)arg0 ;
+(id)mergedClusterFrom:(id)arg0 ;
-(id)description;
-(id)initWithDataVector:(id)arg0 ;


@end


#endif