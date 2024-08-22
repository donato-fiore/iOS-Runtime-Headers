// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8MAPSSYNC21MAPSSYNCREVIEWEDPLACE_H
#define _TTC8MAPSSYNC21MAPSSYNCREVIEWEDPLACE_H

@class TtC8MapsSync16MapsSyncBaseItem, NSString, NSDate, NSNumber;


#import "_TtC8MapsSync27MapsSyncAnonymousCredential.h"

@interface _TtC8MapsSync21MapsSyncReviewedPlace : TtC8MapsSync16MapsSyncBaseItem {
    ? _muid;
    ? _lastSuggestedReviewDate;
    ? _hasUserReviewed;
    ? _uploadedPhotosCount;
    ? _resultProviderIdentifier;
    ? _rating;
    ? _latitude;
    ? _longitude;
    ? _version;
    ? _anonymousCredential;
    ? _anonymousCredentialUnstored;
}


@property (nonatomic, readonly) _TtC8MapsSync27MapsSyncAnonymousCredential *anonymousCredential;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL hasUserReviewed;
@property (nonatomic, readonly) NSDate *lastSuggestedReviewDate;
@property (nonatomic, readonly) NSNumber *latitude;
@property (nonatomic, readonly) NSNumber *longitude;
@property (nonatomic, readonly) NSUInteger muid;
@property (nonatomic, readonly) NSNumber *rating;
@property (nonatomic, readonly) NSNumber *resultProviderIdentifier;
@property (nonatomic, readonly) int uploadedPhotosCount;
@property (nonatomic, readonly) short version;


+(id)fetchWithMuids:(id)arg0 ;
+(void)fetch:(NSInteger)arg0 sort:(NSInteger)arg3 ascending:(BOOL)arg4 completion:(id)arg5 ;
+(void)fetchWithMuids:(id)arg0 completion:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(id)init;
-(id)initWithAnonymousCredential:(id)arg0 ;
-(id)initWithObject:(id)arg0 ;
-(void)addEditWithBlock:(id)arg0 ;
-(void)setPropertiesWithObject:(id)arg0 ;


@end


#endif