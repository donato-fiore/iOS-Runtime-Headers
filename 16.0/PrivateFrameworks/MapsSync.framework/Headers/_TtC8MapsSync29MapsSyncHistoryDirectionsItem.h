// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC29MAPSSYNCHISTORYDIRECTIONSITEM_H
#define _TTC8MAPSSYNC29MAPSSYNCHISTORYDIRECTIONSITEM_H

@class TtC8MapsSync19MapsSyncHistoryItem, NSString, GEOStorageRouteRequestStorage, NSData;



@interface _TtC8MapsSync29MapsSyncHistoryDirectionsItem : TtC8MapsSync19MapsSyncHistoryItem {
    ? _navigationInterrupted;
    ? _routeRequestStorage;
    ? _sharedETAData;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL navigationInterrupted;
@property (nonatomic, readonly) GEOStorageRouteRequestStorage *routeRequestStorage;
@property (nonatomic, readonly) NSData *sharedETAData;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif