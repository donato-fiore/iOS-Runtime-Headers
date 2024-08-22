// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BDSMUTABLESECUREENGAGEMENTDATA_H
#define BDSMUTABLESECUREENGAGEMENTDATA_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BDSSecureEngagementData, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BDSMutableSecureEngagementData : BCMutableCloudData <BDSSecureEngagementData, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat durationInterval; // ivar: _durationInterval
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (copy, nonatomic) NSString *startTimestampString; // ivar: _startTimestampString
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (retain, nonatomic) NSData *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)initWithStartTimestampString:(id)arg0 durationInterval:(CGFloat)arg1 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif