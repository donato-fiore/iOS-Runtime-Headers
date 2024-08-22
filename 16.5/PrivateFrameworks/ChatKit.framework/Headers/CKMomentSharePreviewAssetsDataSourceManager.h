// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMOMENTSHAREPREVIEWASSETSDATASOURCEMANAGER_H
#define CKMOMENTSHAREPREVIEWASSETSDATASOURCEMANAGER_H

@class PXAssetsDataSourceManager, IMMomentShareCache, PXStaticDisplayAssetsDataSource, PHMomentShare, NSURL;



@interface CKMomentSharePreviewAssetsDataSourceManager : PXAssetsDataSourceManager {
    IMMomentShareCache *_momentShareCache;
    PXStaticDisplayAssetsDataSource *_currentDataSource;
}


@property (readonly, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (readonly, nonatomic) NSURL *momentShareURL; // ivar: _momentShareURL


-(id)createInitialDataSource;
-(id)init;
-(id)initWithMomentShareURL:(id)arg0 ;
-(void)_fetchMomentShare;
-(void)_handleFetchedMomentShare:(id)arg0 error:(id)arg1 ;
-(void)_momentShareCacheDidChange:(id)arg0 ;


@end


#endif