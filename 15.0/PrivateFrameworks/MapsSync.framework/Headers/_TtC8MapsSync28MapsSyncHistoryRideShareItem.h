// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC28MAPSSYNCHISTORYRIDESHAREITEM_H
#define _TTC8MAPSSYNC28MAPSSYNCHISTORYRIDESHAREITEM_H

@class TtC8MapsSync19MapsSyncHistoryItem, NSString, GEOComposedWaypoint;



@interface _TtC8MapsSync28MapsSyncHistoryRideShareItem : TtC8MapsSync19MapsSyncHistoryItem {
    ? _startWaypoint;
    ? _endWaypoint;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOComposedWaypoint *endWaypoint;
@property (nonatomic, readonly) GEOComposedWaypoint *startWaypoint;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif