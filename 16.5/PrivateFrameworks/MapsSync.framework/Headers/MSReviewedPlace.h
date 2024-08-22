// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSREVIEWEDPLACE_H
#define MSREVIEWEDPLACE_H

@class TtC8MapsSync14MapsSyncObject, NSDate, NSNumber, NSData;


#import "MSCommunityID.h"

@interface MSReviewedPlace : TtC8MapsSync14MapsSyncObject {
    ? _hasUserReviewed;
    ? _lastSuggestedReviewDate;
    ? _latitude;
    ? _longitude;
    ? _mapItemIdComparableRepresentation;
    ? _muid;
    ? _positionIndex;
    ? _rating;
    ? _resultProviderIdentifier;
    ? _uploadedPhotosCount;
    ? _version;
}


@property (nonatomic, readonly) MSCommunityID *communityID;
@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic) NSUInteger muid;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 hasUserReviewed:(BOOL)arg1 lastSuggestedReviewDate:(id)arg2 latitude:(id)arg3 longitude:(id)arg4 mapItemIdComparableRepresentation:(id)arg5 muid:(NSUInteger)arg6 positionIndex:(NSInteger)arg7 rating:(id)arg8 resultProviderIdentifier:(id)arg9 uploadedPhotosCount:(int)arg10 version:(short)arg11 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif