// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPMUTABLEFAVORITEROUTE_H
#define MSPMUTABLEFAVORITEROUTE_H

@class NSString, GEOComposedWaypoint, GEOStorageRouteRequestStorage, NSUUID;
@protocol MSPFavoriteRoute;


#import "MSPMutableFavorite.h"

@interface MSPMutableFavoriteRoute : MSPMutableFavorite <MSPFavoriteRoute>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) GEOComposedWaypoint *endWaypoint;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (readonly, nonatomic) GEOComposedWaypoint *startWaypoint;
@property (readonly, nonatomic) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int transportType;


+(Class)immutableObjectClass;
+(Class)mutableObjectClass;
+(id)immutableObjectProtocol;
+(id)mutableObjectProtocol;
-(id)initWithBookmarkStorage:(id)arg0 ;
-(id)transferToImmutableIfValidWithError:(*id)arg0 ;


@end


#endif