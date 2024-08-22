// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MSCURATEDCOLLECTION_H
#define MSCURATEDCOLLECTION_H

@class TtC8MapsSync14MapsSyncObject;



@interface MSCuratedCollection : TtC8MapsSync14MapsSyncObject {
    ? _curatedCollectionIdentifier;
    ? _positionIndex;
    ? _resultProviderIdentifier;
}


@property (nonatomic) NSUInteger curatedCollectionIdentifier;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) int resultProviderIdentifier;


+(Class)managedClass;
+(void)beforeFetchWithStore:(id)arg0 ;
+(void)pruneCachedCuratedCollectionsWithStore:(id)arg0 ;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 curatedCollectionIdentifier:(NSUInteger)arg1 positionIndex:(NSInteger)arg2 resultProviderIdentifier:(int)arg3 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif