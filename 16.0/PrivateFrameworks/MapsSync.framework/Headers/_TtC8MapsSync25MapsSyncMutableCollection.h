// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC25MAPSSYNCMUTABLECOLLECTION_H
#define _TTC8MAPSSYNC25MAPSSYNCMUTABLECOLLECTION_H

@class TtC8MapsSync23MapsSyncMutableBaseItem, NSString, NSData, NSSet;



@interface _TtC8MapsSync25MapsSyncMutableCollection : TtC8MapsSync23MapsSyncMutableBaseItem {
    ? _proxyCollection;
}


@property (nonatomic, copy) NSString *collectionDescription;
@property (nonatomic, copy) NSData *image;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, copy) NSSet *places;
@property (nonatomic, copy) NSString *title;


-(id)initWithProxyObject:(id)arg0 ;
-(void)addItemWithCollectionItem:(id)arg0 ;
-(void)removePlaceWithCollectionItem:(id)arg0 ;


@end


#endif