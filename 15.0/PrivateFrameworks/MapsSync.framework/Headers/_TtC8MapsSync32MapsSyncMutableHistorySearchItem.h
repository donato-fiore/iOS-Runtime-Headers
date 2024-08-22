// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC32MAPSSYNCMUTABLEHISTORYSEARCHITEM_H
#define _TTC8MAPSSYNC32MAPSSYNCMUTABLEHISTORYSEARCHITEM_H

@class TtC8MapsSync26MapsSyncMutableHistoryItem, GEOMapRegion, NSString;



@interface _TtC8MapsSync32MapsSyncMutableHistorySearchItem : TtC8MapsSync26MapsSyncMutableHistoryItem {
    ? _proxyHistory;
}


@property (nonatomic, retain) GEOMapRegion *geoMapRegion;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *locationDisplay;
@property (nonatomic, copy) NSString *query;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif