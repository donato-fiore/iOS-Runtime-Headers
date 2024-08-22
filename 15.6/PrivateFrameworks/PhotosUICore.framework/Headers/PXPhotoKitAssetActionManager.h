// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPHOTOKITASSETACTIONMANAGER_H
#define PXPHOTOKITASSETACTIONMANAGER_H

@class NSMapTable, NSMutableDictionary, NSString, PHPerson;
@protocol PXActivityActionDelegate, PXRadarConfigurationProvider;


#import "PXAssetActionManager.h"
#import "PXAssetActionPerformer.h"
#import "PXPhotosDataSource.h"
#import "PXPhotoKitAssetsDataSourceManager.h"
#import "PXPhotoKitImportStatusManager.h"

@interface PXPhotoKitAssetActionManager : PXAssetActionManager <PXActivityActionDelegate>



@property (readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // ivar: __actionTypeByBarButtonItem
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetActionPerformer *_activePerformer; // ivar: __activePerformer
@property (readonly, nonatomic) PXPhotosDataSource *_dataSourceSnapshot;
@property (readonly, nonatomic) NSMutableDictionary *_performerClassByType; // ivar: __performerClassByType
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *importSessionID; // ivar: _importSessionID
@property (retain, nonatomic) PXPhotoKitImportStatusManager *importStatusManager; // ivar: _importStatusManager
@property (retain, nonatomic) PHPerson *person; // ivar: _person
@property (readonly, nonatomic) NSUInteger presentationSource;
@property (retain, nonatomic) NSObject<PXRadarConfigurationProvider> *radarConfigurationProvider; // ivar: _radarConfigurationProvider
@property (readonly) Class superclass;


-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)canPerformAssetVariationActions;
-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(BOOL)shouldEnableActionType:(id)arg0 onAsset:(id)arg1 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(id)_selectionSnapshotForPerformerClass:(Class)arg0 applySubsetIfNeeded:(BOOL)arg1 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)activityForActionType:(id)arg0 ;
-(id)alertActionForActionType:(id)arg0 ;
-(id)barButtonItemForActionType:(id)arg0 ;
-(id)initWithSelectedObjectReference:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)initWithSelectionManager:(id)arg0 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 ;
-(id)previewActionForActionType:(id)arg0 image:(id)arg1 ;
-(id)standardActionForActionType:(id)arg0 ;
-(id)systemImageNameForActionType:(id)arg0 ;
-(void)_handleActionPerformerComplete:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleBarButtonItem:(id)arg0 ;
-(void)_handlePreviewAction:(id)arg0 actionType:(id)arg1 ;
-(void)executeActionForActionType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)performActivity:(id)arg0 ;
-(void)registerPerformerClass:(Class)arg0 forType:(id)arg1 ;
-(void)setAdditionalPropertiesFromActionManager:(id)arg0 ;


@end


#endif