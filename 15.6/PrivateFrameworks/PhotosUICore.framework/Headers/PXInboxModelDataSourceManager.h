// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXINBOXMODELDATASOURCEMANAGER_H
#define PXINBOXMODELDATASOURCEMANAGER_H

@class PXSectionedDataSource<PXInboxModelDataSourceBase>, NSString;
@protocol PXInboxModelDataSourceManagerBase, PXInboxProviderSource;


#import "PXSectionedDataSourceManager.h"

@interface PXInboxModelDataSourceManager : PXSectionedDataSourceManager <PXInboxModelDataSourceManagerBase>



@property (readonly, nonatomic) PXSectionedDataSource<PXInboxModelDataSourceBase> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXInboxProviderSource> *providerSource;
@property (readonly) Class superclass;




@end


#endif