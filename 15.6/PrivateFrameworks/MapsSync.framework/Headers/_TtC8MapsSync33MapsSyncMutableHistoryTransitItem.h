// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8MAPSSYNC33MAPSSYNCMUTABLEHISTORYTRANSITITEM_H
#define _TTC8MAPSSYNC33MAPSSYNCMUTABLEHISTORYTRANSITITEM_H

@class TtC8MapsSync26MapsSyncMutableHistoryItem, NSData;



@interface _TtC8MapsSync33MapsSyncMutableHistoryTransitItem : TtC8MapsSync26MapsSyncMutableHistoryItem {
    ? _proxyHistory;
}


@property (nonatomic) NSUInteger muid;
@property (nonatomic, copy) NSData *transitLineItemStorageData;


-(id)initWithProxyObject:(id)arg0 ;


@end


#endif