// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCMUTABLESTOREITEM_H
#define BCMUTABLESTOREITEM_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCStoreItem, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableStoreItem : BCMutableCloudData <BCStoreItem, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (copy, nonatomic) NSString *storeID; // ivar: _storeID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)initWithStoreID:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif