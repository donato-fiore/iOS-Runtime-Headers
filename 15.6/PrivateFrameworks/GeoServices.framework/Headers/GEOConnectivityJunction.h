// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCONNECTIVITYJUNCTION_H
#define GEOCONNECTIVITYJUNCTION_H


#import <Foundation/Foundation.h>


@interface GEOConnectivityJunction : NSObject {
    *GeoCodecsConnectivityJunction _junction;
}


@property (readonly, nonatomic) unsigned int pointsOnRoadCount;
@property (readonly, nonatomic) unsigned int pointsOnRoadIndex;


-(id)init:(struct GeoCodecsConnectivityJunction *)arg0 ;


@end


#endif