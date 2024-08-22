// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSHISTORYDIRECTIONSITEM_H
#define MSHISTORYDIRECTIONSITEM_H

@class GEOStorageRouteRequestStorage, NSData;


#import "MSHistoryItem.h"

@interface MSHistoryDirectionsItem : MSHistoryItem {
    ? _navigationInterrupted;
    ? _routeRequestStorage;
    ? _sharedETAData;
}


@property (nonatomic) BOOL navigationInterrupted;
@property (nonatomic, retain) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, copy) NSData *sharedETAData;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 navigationInterrupted:(BOOL)arg1 routeRequestStorage:(id)arg2 sharedETAData:(id)arg3 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif