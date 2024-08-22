// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCGLOBALMETADATUM_H
#define BCGLOBALMETADATUM_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCGlobalMetadatum, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCGlobalMetadatum : BCCloudData <BCGlobalMetadatum>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;
@property (copy, nonatomic) NSString *value;


+(id)propertyIDKey;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromMetadatum:(id)arg0 withMergers:(id)arg1 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif