// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLBEFOREUPLOADCHECKITEMS_H
#define CPLBEFOREUPLOADCHECKITEMS_H

@class NSDictionary, NSMutableSet, NSMutableDictionary, NSArray, NSString;
@protocol CPLBeforeUploadCheckItemsProvider;

#import <Foundation/Foundation.h>

#import "CPLChangeBatch.h"

@interface CPLBeforeUploadCheckItems : NSObject {
    NSDictionary *_items;
    NSDictionary *_foundRecords;
    NSMutableSet *_recordsToFetch;
    NSMutableDictionary *_recordsNeedingToGenerateDerivatives;
    NSMutableDictionary *_nonAssetsWithResourcesToUpload;
    NSMutableDictionary *_assetsWithResourcesToUpload;
    NSMutableSet *_trashedOrDeletedAssets;
    NSMutableDictionary *_additionalRecords;
    NSMutableSet *_fetchRules;
}


@property (readonly, nonatomic) CPLChangeBatch *batchToUpload; // ivar: _batchToUpload
@property (readonly, nonatomic) NSUInteger countOfAssetsWithResourcesToUpload;
@property (readonly, nonatomic) NSUInteger estimatedUploadResourceSize;
@property (readonly, nonatomic) NSArray *fetchRules;
@property (readonly, nonatomic) BOOL hasDroppedSomeResources; // ivar: _hasDroppedSomeResources
@property (readonly, nonatomic) CPLChangeBatch *originalBatch; // ivar: _originalBatch
@property (readonly, nonatomic) NSObject<CPLBeforeUploadCheckItemsProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSArray *recordsNeedingGeneratedDerivatives;
@property (readonly, nonatomic) NSArray *recordsToFetch;
@property (readonly, nonatomic) NSInteger ruleGroups; // ivar: _ruleGroups
@property (copy, nonatomic) NSString *sharingScopeIdentifier; // ivar: _sharingScopeIdentifier
@property (readonly, nonatomic) BOOL shouldResetExceedingQuotaOnSuccessfulUpload;
@property (readonly, nonatomic) BOOL willUploadSomeResources;


-(BOOL)checkBatchWithFoundRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareBatchBeforeUploadWithError:(*id)arg0 ;
-(BOOL)requestFetchOfRecordWithScopedIdentifier:(id)arg0 forItem:(id)arg1 rule:(id)arg2 error:(*id)arg3 ;
-(BOOL)transportHasRecordWithScopedIdentifier:(id)arg0 ;
-(id)initWithBatch:(id)arg0 ruleGroups:(NSInteger)arg1 provider:(id)arg2 ;
-(id)recordFromTransportWithScopedIdentifier:(id)arg0 ;
-(id)willUploadCloudResource:(id)arg0 localResource:(id)arg1 forItem:(id)arg2 error:(*id)arg3 ;
-(void)addAdditionalRecordWithScopedIdentifierToUploadBatch:(id)arg0 ;
-(void)itemWillDropResourceChange:(id)arg0 ;


@end


#endif