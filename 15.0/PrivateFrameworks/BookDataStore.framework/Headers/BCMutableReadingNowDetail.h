// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCMUTABLEREADINGNOWDETAIL_H
#define BCMUTABLEREADINGNOWDETAIL_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCReadingNowDetail, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableReadingNowDetail : BCMutableCloudData <BCReadingNowDetail, NSSecureCoding>



@property (copy, nonatomic) NSString *assetID; // ivar: _assetID
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isTrackedAsRecent; // ivar: _isTrackedAsRecent
@property (copy, nonatomic) NSDate *lastEngagedDate; // ivar: _lastEngagedDate
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithAssetID:(id)arg0 ;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif