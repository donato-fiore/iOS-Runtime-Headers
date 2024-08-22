// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKMEDIAOBJECTASSETDATASOURCEMANAGER_H
#define CKMEDIAOBJECTASSETDATASOURCEMANAGER_H

@class PXAssetsDataSourceManager;


#import "CKMediaObjectAssetDataSource.h"

@interface CKMediaObjectAssetDataSourceManager : PXAssetsDataSourceManager

@property (retain, nonatomic) CKMediaObjectAssetDataSource *mediaObjectDataSource; // ivar: _mediaObjectDataSource


-(id)_changeDetailsForDataSource:(id)arg0 oldDataSource:(id)arg1 ;
-(id)createInitialDataSource;
-(id)initWithDataSource:(id)arg0 ;
-(void)_handlePreviewDidChangeNotification:(id)arg0 ;
-(void)_mq_handlePreviewDidChangeNotification:(id)arg0 ;


@end


#endif