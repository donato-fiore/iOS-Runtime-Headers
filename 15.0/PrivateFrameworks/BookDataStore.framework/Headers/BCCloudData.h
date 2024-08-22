// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCCLOUDDATA_H
#define BCCLOUDDATA_H

@class NSManagedObject, NSData, NSString, NSDate, CKRecord;
@protocol BCCloudData, BCCloudDataPrivacyDelegate;



@interface BCCloudData : NSManagedObject <BCCloudData>



@property (copy, nonatomic) NSData *ckSystemFields;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deletedFlag;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger editGeneration;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *modificationDate;
@property (weak, nonatomic) NSObject<BCCloudDataPrivacyDelegate> *privacyDelegate; // ivar: _privacyDelegate
@property (copy, nonatomic) NSString *saltedHashedID;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncGeneration;
@property (copy, nonatomic) CKRecord *systemFields;


+(id)localIdentifierFromRecord:(id)arg0 ;
+(id)propertyIDKey;
-(BOOL)hasValidSalt;
-(BOOL)isEqualExceptForDate:(id)arg0 ;
-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)mutableCopy;
-(id)recordType;
-(id)zoneName;
-(void)configureFromCloudData:(id)arg0 withMergers:(id)arg1 ;
-(void)incrementEditGeneration;
-(void)resolveConflictsFromRecord:(id)arg0 withResolvers:(id)arg1 ;


@end


#endif