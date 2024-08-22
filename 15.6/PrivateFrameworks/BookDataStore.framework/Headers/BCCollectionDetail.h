// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCCOLLECTIONDETAIL_H
#define BCCOLLECTIONDETAIL_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCCollectionDetail, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCCollectionDetail : BCCloudData <BCCollectionDetail>



@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (copy, nonatomic) NSString *collectionDescription;
@property (copy, nonatomic) NSString *collectionID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidden;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate;
@property (nonatomic) int sortMode;
@property (nonatomic) int sortOrder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger syncGeneration;
@property (readonly, copy, nonatomic) CKRecord *systemFields;


+(id)propertyIDKey;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)_configureFromCollectionDetail:(id)arg0 withMergers:(id)arg1 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif