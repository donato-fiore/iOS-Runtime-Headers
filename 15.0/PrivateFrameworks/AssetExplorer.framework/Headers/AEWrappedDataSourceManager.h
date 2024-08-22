// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AEWRAPPEDDATASOURCEMANAGER_H
#define AEWRAPPEDDATASOURCEMANAGER_H

@class PXAssetsDataSourceManager, PUReviewAssetsDataSourceManager, NSString;
@protocol PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate;



@interface AEWrappedDataSourceManager : PXAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate, PUReviewAssetsDataSourceManagerDelegate>



@property (retain, nonatomic, setter=_setAttachedDataSourceManager:) PUReviewAssetsDataSourceManager *_attachedDataSourceManager; // ivar: __attachedDataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assetsDataSourceManagerInterestingAssetReferences:(id)arg0 ;
-(id)createInitialDataSource;
-(void)_createDataSourceFromAssetsDataSource:(id)arg0 changeDetails:(id)arg1 ;
-(void)assetsDataSourceManager:(id)arg0 didChangeAssetsDataSource:(id)arg1 ;
-(void)assetsDataSourceManager:(id)arg0 didChangeAssetsDataSource:(id)arg1 changeDetails:(id)arg2 ;
-(void)attachDataSourceManager:(id)arg0 ;
-(void)detachCurrentDataSourceManager;


@end


#endif