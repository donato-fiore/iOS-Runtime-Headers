// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCOLLECTIONMEMBER_H
#define BCCOLLECTIONMEMBER_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCCollectionMember, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCCollectionMember : BCCloudData <BCCollectionMember>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSString *collectionMemberID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(id)assetIDFromCollectionMemberID:(id)arg0 ;
+(id)collectionIDFromCollectionMemberID:(id)arg0 ;
+(id)collectionMemberIDWithCollectionID:(id)arg0 assetID:(id)arg1 ;
+(id)propertyIDKey;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromCollectionMember:(id)arg0 withMergers:(id)arg1 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif