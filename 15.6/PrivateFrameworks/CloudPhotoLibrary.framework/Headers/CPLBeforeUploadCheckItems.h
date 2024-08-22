// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLBEFOREUPLOADCHECKITEMS_H
#define CPLBEFOREUPLOADCHECKITEMS_H

@class NSDictionary, NSMutableDictionary, NSMutableSet, NSArray, NSSet;
@protocol CPLBeforeUploadCheckItemsProvider;

#import <Foundation/Foundation.h>

#import "CPLChangeBatch.h"

@interface CPLBeforeUploadCheckItems : NSObject {
    NSDictionary *_items;
    NSDictionary *_foundRecords;
    NSMutableDictionary *_recordsToCheck;
    NSMutableDictionary *_recordsNeedingToGenerateDerivatives;
    NSMutableDictionary *_nonAssetsWithResourcesToUpload;
    NSMutableDictionary *_assetsWithResourcesToUpload;
    NSMutableSet *_trashedOrDeletedAssets;
}


@property (readonly, nonatomic) CPLChangeBatch *batchToUpload; // ivar: _batchToUpload
@property (readonly, nonatomic) NSUInteger countOfAssetsWithResourcesToUpload;
@property (readonly, nonatomic) NSUInteger estimatedUploadResourceSize;
@property (readonly, nonatomic) BOOL hasDroppedSomeResources; // ivar: _hasDroppedSomeResources
@property (readonly, nonatomic) CPLChangeBatch *originalBatch; // ivar: _originalBatch
@property (readonly, nonatomic) NSObject<CPLBeforeUploadCheckItemsProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSArray *recordsNeedingGeneratedDerivatives;
@property (readonly, nonatomic) NSArray *recordsToCheck;
@property (readonly, nonatomic) NSSet *recordsToFullyFetch; // ivar: _recordsToFullyFetch
@property (readonly, nonatomic) NSInteger ruleGroups; // ivar: _ruleGroups
@property (readonly, nonatomic) BOOL shouldResetExceedingQuotaOnSuccessfulUpload;
@property (readonly, nonatomic) BOOL willUploadSomeResources;


-(BOOL)checkBatchWithFoundRecords:(id)arg0 error:(*id)arg1 ;
-(BOOL)prepareBatchBeforeUploadWithError:(*id)arg0 ;
-(BOOL)requestExistenceCheckForRecord:(id)arg0 forItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)requestFullFetchOfRecord:(id)arg0 forItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)requestFullFetchOfRecordWithScopedIdentifier:(id)arg0 forItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)transportHasRecordWithScopedIdentifier:(id)arg0 ;
-(id)initWithBatch:(id)arg0 ruleGroups:(NSInteger)arg1 provider:(id)arg2 ;
-(id)recordFromTransportWithScopedIdentifier:(id)arg0 ;
-(id)willUploadCloudResource:(id)arg0 localResource:(id)arg1 forItem:(id)arg2 error:(*id)arg3 ;
-(void)itemWillDropResourceChange:(id)arg0 ;


@end


#endif