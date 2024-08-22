// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCMUTABLEGLOBALMETADATUM_H
#define BCMUTABLEGLOBALMETADATUM_H

@class NSData, NSString, NSDate, CKRecord;
@protocol BCGlobalMetadatum, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableGlobalMetadatum : BCMutableCloudData <BCGlobalMetadatum>



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


-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithKey:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;


@end


#endif