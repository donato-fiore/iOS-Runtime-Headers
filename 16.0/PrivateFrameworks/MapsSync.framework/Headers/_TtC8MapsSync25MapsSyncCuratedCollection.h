// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8MAPSSYNC25MAPSSYNCCURATEDCOLLECTION_H
#define _TTC8MAPSSYNC25MAPSSYNCCURATEDCOLLECTION_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString;



@interface _TtC8MapsSync25MapsSyncCuratedCollection : TtC8MapsSync16MapsSyncBaseItem {
    ? _curatedCollectionIdentifier;
    ? _resultProviderIdentifier;
}


@property (nonatomic, readonly) NSUInteger curatedCollectionIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSInteger identifierHash;
@property (nonatomic, readonly) int resultProviderIdentifier;


-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)initWithCuratedCollectionIdentifier:(NSUInteger)arg0 ;
-(id)initWithCuratedCollectionIdentifier:(NSUInteger)arg0 resultProviderIdentifier:(int)arg1 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)deleteWithCompletion:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif