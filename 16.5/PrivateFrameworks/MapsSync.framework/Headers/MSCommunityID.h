// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSCOMMUNITYID_H
#define MSCOMMUNITYID_H

@class TtC8MapsSync14MapsSyncObject, NSString;



@interface MSCommunityID : TtC8MapsSync14MapsSyncObject {
    ? _communityIdentifier;
    ? _expired;
    ? _positionIndex;
    ? _usedCount;
    ? _rapRecordChanges;
    ? _reviewedPlaceChanges;
}


@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic) BOOL expired;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic) NSInteger usedCount;


+(Class)managedClass;
-(id)fetchRapRecords;
-(id)fetchReviewedPlaces;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 communityIdentifier:(id)arg1 expired:(BOOL)arg2 positionIndex:(NSInteger)arg3 usedCount:(NSInteger)arg4 ;
-(void)addRapRecord:(id)arg0 ;
-(void)addReviewedPlace:(id)arg0 ;
-(void)flushChanges;
-(void)removeRapRecord:(id)arg0 ;
-(void)removeReviewedPlace:(id)arg0 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif