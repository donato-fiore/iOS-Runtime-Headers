// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC27MAPSSYNCMUTABLEFAVORITEITEM_H
#define _TTC8MAPSSYNC27MAPSSYNCMUTABLEFAVORITEITEM_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSSet, NSString, GEOMapItemStorage;


#import "MapsSyncManagedFavoriteItem.h"

@interface _TtC8MapsSync27MapsSyncMutableFavoriteItem : TtC8MapsSync23MapsSyncMutableBaseItem

@property (nonatomic, retain) MapsSyncManagedFavoriteItem *_proxyFavorite; // ivar: _proxyFavorite
@property (nonatomic, copy) NSSet *contactHandles;
@property (nonatomic, copy) NSString *customName;
@property (nonatomic) BOOL hidden;
@property (nonatomic, retain) GEOMapItemStorage *mapItemStorage;
@property (nonatomic, copy) NSString *originatingAddressString;
@property (nonatomic, copy) NSString *shortcutIdentifier;
@property (nonatomic) short source;
@property (nonatomic) short type;
@property (nonatomic) short version;


-(id)addContactHandle:(id)arg0 ;
-(id)initWithProxyObject:(id)arg0 ;
-(id)moveAfterItem:(id)arg0 ;
-(id)moveBeforeItem:(id)arg0 ;
-(id)removeContactHandle:(id)arg0 ;
-(void)moveToBack;
-(void)moveToFront;


@end


#endif