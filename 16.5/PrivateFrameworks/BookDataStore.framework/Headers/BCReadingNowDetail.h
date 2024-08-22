// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCREADINGNOWDETAIL_H
#define BCREADINGNOWDETAIL_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCReadingNowDetail, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCReadingNowDetail : BCCloudData <BCReadingNowDetail>



@property (copy, nonatomic) NSString *assetID;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSString *cloudAssetType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTrackedAsRecent;
@property (copy, nonatomic) NSDate *lastEngagedDate;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(id)propertyIDKey;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromReadingNowDetail:(id)arg0 withMergers:(id)arg1 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif