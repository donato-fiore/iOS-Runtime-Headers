// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCMUTABLECOLLECTIONDETAIL_H
#define BCMUTABLECOLLECTIONDETAIL_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCCollectionDetail, NSSecureCoding, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableCollectionDetail : BCMutableCloudData <BCCollectionDetail, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSString *collectionDescription; // ivar: _collectionDescription
@property (copy, nonatomic) NSString *collectionID; // ivar: _collectionID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden; // ivar: _hidden
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int sortMode; // ivar: _sortMode
@property (nonatomic) int sortOrder; // ivar: _sortOrder
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(BOOL)supportsSecureCoding;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCollectionID:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif