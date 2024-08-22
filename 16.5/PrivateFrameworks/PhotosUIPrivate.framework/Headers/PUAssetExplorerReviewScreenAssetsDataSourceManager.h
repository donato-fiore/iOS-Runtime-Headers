// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUASSETEXPLORERREVIEWSCREENASSETSDATASOURCEMANAGER_H
#define PUASSETEXPLORERREVIEWSCREENASSETSDATASOURCEMANAGER_H

@class NSDictionary, NSString;
@protocol PUAssetsDataSourceManagerDelegate;


#import "PUAssetsDataSourceManager.h"

@interface PUAssetExplorerReviewScreenAssetsDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate>



@property (retain, nonatomic, setter=_setOriginalDataSourceManager:) PUAssetsDataSourceManager *_originalDataSourceManager; // ivar: __originalDataSourceManager
@property (copy, nonatomic, setter=_setReplacementAssetsByUUID:) NSDictionary *_replacementAssetsByUUID; // ivar: __replacementAssetsByUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg0 ;
-(id)initWithOriginalDataSourceManager:(id)arg0 ;
-(void)_updateDataSource;
-(void)assetsDataSourceManager:(id)arg0 didChangeAssetsDataSource:(id)arg1 ;
-(void)detachFromOriginalDataSourceManager;
-(void)performChanges:(id)arg0 ;


@end


#endif