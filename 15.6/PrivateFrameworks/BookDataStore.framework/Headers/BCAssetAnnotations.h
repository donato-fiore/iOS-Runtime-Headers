// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCASSETANNOTATIONS_H
#define BCASSETANNOTATIONS_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCAssetAnnotations, BCCloudDataPrivacyDelegate;


#import "BCCloudData.h"

@interface BCAssetAnnotations : BCCloudData <BCAssetAnnotations>



@property (copy, nonatomic) NSString *assetID;
@property (copy, nonatomic) NSString *assetVersion;
@property (retain, nonatomic) NSData *bookAnnotations;
@property (readonly, copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
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
-(void)_configureFromAssetAnnotations:(id)arg0 withMergers:(id)arg1 ;
-(void)_mergeInAssetID:(id)arg0 assetVersion:(id)arg1 serializedData:(id)arg2 ;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif