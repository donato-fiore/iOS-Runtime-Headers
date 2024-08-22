// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSAMPLEINBOXDATASOURCEMANAGER_H
#define PXSAMPLEINBOXDATASOURCEMANAGER_H

@class NSString, NSArray;
@protocol PXInboxProviderSource, PXInboxModelTitleProvider, PXInboxModelDetailViewControllerProvider, PXInboxModelMediaProvider;


#import "PXInboxModelDataSourceManager.h"
#import "PXSampleInboxMediaProvider.h"

@interface PXSampleInboxDataSourceManager : PXInboxModelDataSourceManager <PXInboxProviderSource, PXInboxModelTitleProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<PXInboxModelDetailViewControllerProvider> *detailViewControllerProvider;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<PXInboxModelMediaProvider> *mediaProvider;
@property (retain, nonatomic) NSArray *mockedModels; // ivar: _mockedModels
@property (retain, nonatomic) PXSampleInboxMediaProvider *sampleMediaProvider; // ivar: _sampleMediaProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<PXInboxModelTitleProvider> *titleProvider;


-(id)_dataSourceSnapshot;
-(id)_modelElements;
-(id)createInitialDataSource;
-(id)init;
-(id)providerSource;
-(id)subtitleForModel:(id)arg0 ;
-(id)titleForModel:(id)arg0 ;
-(void)_changeData;
-(void)_generateModels;
-(void)_updateDataSource;
-(void)requestTitleAndSubtitleForModel:(id)arg0 completion:(id)arg1 ;


@end


#endif