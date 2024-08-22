// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMOMENTSHAREPREVIEWASSETSDATASOURCEMANAGER_H
#define CKMOMENTSHAREPREVIEWASSETSDATASOURCEMANAGER_H

@class PXAssetsDataSourceManager, PHMomentShare, IMMomentShareCache, PXStaticDisplayAssetsDataSource, NSURL;



@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager {
    PHMomentShare *_momentShare;
    IMMomentShareCache *_momentShareCache;
    PXStaticDisplayAssetsDataSource *_currentDataSource;
}


@property (readonly, nonatomic) NSURL *momentShareURL; // ivar: _momentShareURL


-(id)createInitialDataSource;
-(id)init;
-(id)initWithMomentShareURL:(id)arg0 ;
-(void)_fetchMomentShare;
-(void)_handleFetchedMomentShare:(id)arg0 error:(id)arg1 ;
-(void)_momentShareCacheDidChange:(id)arg0 ;


@end


#endif