// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCMUTABLESECUREUSERDATUM_H
#define BCMUTABLESECUREUSERDATUM_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCSecureUserDatum, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableSecureUserDatum : BCMutableCloudData <BCSecureUserDatum, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (copy, nonatomic) NSString *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif