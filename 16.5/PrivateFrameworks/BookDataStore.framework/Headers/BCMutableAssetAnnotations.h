// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCMUTABLEASSETANNOTATIONS_H
#define BCMUTABLEASSETANNOTATIONS_H

@class NSString, NSData, NSDate, CKRecord;
@protocol BCAssetAnnotations, BCCloudDataPrivacyDelegate;


#import "BCMutableCloudData.h"

@interface BCMutableAssetAnnotations : BCMutableCloudData <BCAssetAnnotations>



@property (readonly, copy, nonatomic) NSString *assetID; // ivar: _assetID
@property (copy, nonatomic) NSString *assetVersion; // ivar: _assetVersion
@property (retain, nonatomic) NSData *bookAnnotations; // ivar: _bookAnnotations
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


-(id)configuredRecordFromAttributes;
-(id)identifier;
-(id)initWithAssetID:(id)arg0 ;
-(id)initWithCloudData:(id)arg0 ;
-(id)initWithRecord:(id)arg0 ;
-(id)recordType;
-(id)zoneName;


@end


#endif