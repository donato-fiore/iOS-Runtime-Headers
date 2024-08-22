// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC26MAPSSYNCHISTORYTRANSITITEM_H
#define _TTC8MAPSSYNC26MAPSSYNCHISTORYTRANSITITEM_H

@class TtC8MapsSync19MapsSyncHistoryItem, NSString, NSData;



@interface _TtC8MapsSync26MapsSyncHistoryTransitItem : TtC8MapsSync19MapsSyncHistoryItem {
    ? _transitLineStorage;
    ? _muid;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSUInteger muid;
@property (nonatomic, readonly) NSData *transitLineItemStorageData;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif