// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCASSETREVIEW_H
#define BCASSETREVIEW_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCAssetReview, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCAssetReview : BCCloudData <BCAssetReview>



@property (copy, nonatomic) NSString *assetReviewID;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) CGFloat normalizedStarRating;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (copy, nonatomic) NSString *reviewBody;
@property (copy, nonatomic) NSString *reviewTitle;
@property (nonatomic) short starRating;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (copy, nonatomic) NSString *userID;


+(id)assetIDFromAssetReviewID:(id)arg0 ;
+(id)assetReviewIDWithUserID:(id)arg0 assetID:(id)arg1 ;
+(id)propertyIDKey;
+(id)userIDFromAssetReviewID:(id)arg0 ;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromAssetReview:(id)arg0 withMergers:(id)arg1 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif