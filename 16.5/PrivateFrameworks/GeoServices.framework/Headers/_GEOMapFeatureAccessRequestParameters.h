// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GEOMAPFEATUREACCESSREQUESTPARAMETERS_H
#define _GEOMAPFEATUREACCESSREQUESTPARAMETERS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOTileLoader.h"

@interface _GEOMapFeatureAccessRequestParameters : NSObject

@property (nonatomic) BOOL allowNetworkTileLoad; // ivar: allowNetworkTileLoad
@property (nonatomic) BOOL allowStaleData; // ivar: allowStaleData
@property (nonatomic) BOOL cachedTilesCallbackImmediately; // ivar: cachedTilesCallbackImmediately
@property (nonatomic) BOOL flipNegativeTravelDirectionRoads; // ivar: flipNegativeTravelDirectionRoads
@property (nonatomic) BOOL joinAllRoadsByMuid; // ivar: joinAllRoadsByMuid
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: queue
@property (retain, nonatomic) GEOTileLoader *tileLoader; // ivar: tileLoader
@property (nonatomic) BOOL visitDoubleTravelDirectionRoadsTwice; // ivar: visitDoubleTravelDirectionRoadsTwice




@end


#endif