// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC19MAPSSYNCCOMMUNITYID_H
#define _TTC8MAPSSYNC19MAPSSYNCCOMMUNITYID_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString, NSSet;



@interface _TtC8MapsSync19MapsSyncCommunityID : TtC8MapsSync16MapsSyncBaseItem {
    ? _communityIdentifier;
    ? _expired;
    ? _usedCount;
    ? _reviewedPlaces;
    ? _rapRecords;
}


@property (nonatomic, readonly) NSString *communityIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL expired;
@property (nonatomic, readonly) NSSet *rapRecords;
@property (nonatomic, readonly) NSSet *reviewedPlaces;
@property (nonatomic, readonly) NSInteger usedCount;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)init;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif