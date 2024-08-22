// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEPHOTOSASSETPACKAGEGENERATOR_H
#define AEPHOTOSASSETPACKAGEGENERATOR_H

@class PHAsset, PHAssetExportRequest, NSError, NSString, NSProgress, PXAssetReference;
@protocol NSProgressReporting, PUReviewAssetProviderRequest, OS_dispatch_queue, OS_dispatch_group, PUDisplayAsset;


#import "AEAssetPackageGenerator.h"
#import "AEAssetPackage.h"

@interface AEPhotosAssetPackageGenerator : AEAssetPackageGenerator <NSProgressReporting, PUReviewAssetProviderRequest>



@property (retain, nonatomic) PHAsset *_asset; // ivar: __asset
@property (readonly, nonatomic) PHAssetExportRequest *_exportRequest; // ivar: __exportRequest
@property (retain, nonatomic, setter=_setIvarQueueCurrentPackage:) AEAssetPackage *_ivarQueue_currentPackage; // ivar: __ivarQueue_currentPackage
@property (retain, nonatomic, setter=_setIvarQueueLastError:) NSError *_ivarQueue_lastError; // ivar: __ivarQueue_lastError
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_packagerIvarIsolationQueue; // ivar: __packagerIvarIsolationQueue
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *_packagerWorkGroup; // ivar: __packagerWorkGroup
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSProgress *progress;
@property (readonly, nonatomic) NSObject<PUDisplayAsset> *sourceAsset;
@property (readonly, copy, nonatomic) PXAssetReference *sourceAssetReference; // ivar: _sourceAssetReference
@property (readonly) Class superclass;


+(void)deleteTemporaryStorageWithTimeout:(CGFloat)arg0 ;
-(BOOL)retrieveGeneratedPackageWithCompletion:(id)arg0 ;
-(id)_assetPackageforPHAsset:(id)arg0 withAssetExportRequestFileURLs:(id)arg1 error:(*id)arg2 ;
-(id)_copyAssetExportFileURLs:(id)arg0 forAsset:(id)arg1 error:(*id)arg2 ;
-(id)_copyItemAtURL:(id)arg0 toOutputDirectory:(id)arg1 error:(*id)arg2 ;
-(id)_createOutputDirectoryBaseURLWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)_generatePackageFromAsset:(id)arg0 ;
-(id)beginGenerating;
-(id)initWithAsset:(id)arg0 ;
-(id)initWithAssetReference:(id)arg0 ;
-(void)_callCompletionWithResult:(id)arg0 ;
-(void)_commonAEPhotosAssetPackageGeneratorInitWithAsset:(id)arg0 assetReference:(id)arg1 ;
-(void)_generatePackageWithAssetExportFileURLs:(id)arg0 error:(id)arg1 ;
-(void)cancelReviewAssetRequest;
-(void)requestReviewAssetWithCompletionHandler:(id)arg0 ;


@end


#endif