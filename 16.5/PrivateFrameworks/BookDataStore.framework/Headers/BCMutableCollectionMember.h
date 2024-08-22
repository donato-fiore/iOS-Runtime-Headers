// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCMUTABLECOLLECTIONMEMBER_H
#define BCMUTABLECOLLECTIONMEMBER_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCCollectionMember, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableCollectionMember : BCMutableCloudData <BCCollectionMember, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSString *collectionMemberID; // ivar: _collectionMemberID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionMemberID:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif