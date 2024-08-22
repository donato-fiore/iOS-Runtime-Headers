// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKMEDIAOBJECTASSETDATASOURCEMANAGER_H
#define CKMEDIAOBJECTASSETDATASOURCEMANAGER_H

@class PXAssetsDataSourceManager, PHMomentShare, NSURL;


#import "CKMediaObjectAssetDataSource.h"

@interface CKMediaObjectAssetDataSourceManager : PXAssetsDataSourceManager

@property (nonatomic, setter=_setAdditionalItemsCount:) ? additionalItemsCount; // ivar: _additionalItemsCount
@property (retain, nonatomic) CKMediaObjectAssetDataSource *mediaObjectDataSource; // ivar: _mediaObjectDataSource
@property (retain, nonatomic) PHMomentShare *momentShare; // ivar: _momentShare
@property (retain, nonatomic) NSURL *momentShareURL; // ivar: _momentShareURL


-(id)_changeDetailsForDataSource:(id)arg0 oldDataSource:(id)arg1 ;
-(id)createInitialDataSource;
-(id)initWithDataSource:(id)arg0 ;
-(struct ? )_additionalCountInMomentShare:(id)arg0 representedCounts:(struct ? )arg1 ;
-(void)_handleMomentShareCacheDidChange:(id)arg0 ;
-(void)_handlePreviewDidChangeNotification:(id)arg0 ;
-(void)_mq_handlePreviewDidChangeNotification:(id)arg0 ;
-(void)_updateAdditionalItemsCount;
-(void)_updateMomentShare;


@end


#endif