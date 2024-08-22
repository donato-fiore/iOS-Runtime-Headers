// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCMUTABLEASSETREVIEW_H
#define BCMUTABLEASSETREVIEW_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCAssetReview, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableAssetReview : BCMutableCloudData <BCAssetReview, NSSecureCoding>



@property (copy, nonatomic) NSString *assetReviewID; // ivar: _assetReviewID
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) CGFloat normalizedStarRating;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (copy, nonatomic) NSString *reviewBody; // ivar: _reviewBody
@property (copy, nonatomic) NSString *reviewTitle; // ivar: _reviewTitle
@property (nonatomic) short starRating; // ivar: _starRating
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (copy, nonatomic) NSString *userID; // ivar: _userID


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithAssetReviewID:(id)arg0 ;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif