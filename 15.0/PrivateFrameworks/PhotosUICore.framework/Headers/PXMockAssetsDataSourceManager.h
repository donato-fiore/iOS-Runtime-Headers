// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXMOCKASSETSDATASOURCEMANAGER_H
#define PXMOCKASSETSDATASOURCEMANAGER_H

@class NSArray, NSMutableArray, NSString;
@protocol PXMutableMockAssetsDataSourceManager;


#import "PXAssetsDataSourceManager.h"
#import "PXSectionedChangeDetailsCoalescer.h"
#import "PXMockAssetsDataSource.h"

@interface PXMockAssetsDataSourceManager : PXAssetsDataSourceManager <PXMutableMockAssetsDataSourceManager>

 {
    NSArray *_initialAssetsBySection;
    NSArray *_initialAssetCollections;
    BOOL _isPerformingDataSourceChanges;
    NSMutableArray *_nextAssetsBySection;
    NSMutableArray *_nextAssetCollections;
    PXSectionedChangeDetailsCoalescer *_changeDetailsCoalescer;
    BOOL _changeIsReload;
}


@property (readonly, nonatomic) PXMockAssetsDataSource *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createInitialDataSource;
-(id)init;
-(id)initWithConfigurationBlock:(id)arg0 ;
-(void)_appendIncrementalChangeDetails:(id)arg0 ;
-(void)changeItemAtIndexPath:(id)arg0 toAssetProperties:(id)arg1 ;
-(void)changeSectionAtIndex:(NSInteger)arg0 toAssetCollection:(id)arg1 ;
-(void)insertItemAtIndexPath:(id)arg0 assetProperties:(id)arg1 ;
-(void)insertSectionAtIndex:(NSInteger)arg0 count:(NSInteger)arg1 assetProperties:(id)arg2 assetCollection:(id)arg3 ;
-(void)markChangeAsReload;
-(void)performDataSourceChanges:(id)arg0 ;
-(void)removeItemAtIndexPath:(id)arg0 ;
-(void)removeSectionAtIndex:(NSInteger)arg0 ;


@end


#endif