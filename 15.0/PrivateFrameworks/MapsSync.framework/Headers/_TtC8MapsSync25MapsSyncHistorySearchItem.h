// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC25MAPSSYNCHISTORYSEARCHITEM_H
#define _TTC8MAPSSYNC25MAPSSYNCHISTORYSEARCHITEM_H

@class TtC8MapsSync19MapsSyncHistoryItem, NSString, GEOMapRegion;



@interface _TtC8MapsSync25MapsSyncHistorySearchItem : TtC8MapsSync19MapsSyncHistoryItem {
    ? _geoMapRegion;
    ? _language;
    ? _locationDisplay;
    ? _query;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) GEOMapRegion *geoMapRegion;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSString *locationDisplay;
@property (nonatomic, readonly) NSString *query;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif