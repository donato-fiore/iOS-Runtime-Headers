// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAPSSYNCMANAGEDREVIEWEDPLACE_H
#define MAPSSYNCMANAGEDREVIEWEDPLACE_H

@class NSManagedObject, NSDate, NSUUID, NSNumber, NSData;


#import "MapsSyncManagedAnonymousCredential.h"

@interface MapsSyncManagedReviewedPlace : NSManagedObject

@property (nonatomic, retain) MapsSyncManagedAnonymousCredential *anonymousCredential;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) BOOL hasUserReviewed;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastSuggestedReviewDate;
@property (nonatomic, retain) NSNumber *latitude;
@property (nonatomic, retain) NSNumber *longitude;
@property (nonatomic, copy) NSData *mapItemIdComparableRepresentation;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) NSInteger muid;
@property (nonatomic) NSInteger positionIndex;
@property (nonatomic, retain) NSNumber *rating;
@property (nonatomic, retain) NSNumber *resultProviderIdentifier;
@property (nonatomic) int uploadedPhotosCount;
@property (nonatomic) short version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif