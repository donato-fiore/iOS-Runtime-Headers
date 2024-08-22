// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONACTIONMANAGER_H
#define PXPHOTOKITASSETCOLLECTIONACTIONMANAGER_H

@class NSMapTable, NSDictionary, PHFetchResult, NSString;
@protocol PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput, UIDragSession, UIDropSession;


#import "PXAssetCollectionActionManager.h"
#import "PXAssetCollectionActionPerformer.h"
#import "PXAssetsDataSource.h"
#import "PXAssetReference.h"

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate, PXPhotoKitAssetCollectionActionPerformerInput>



@property (readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // ivar: __actionTypeByBarButtonItem
@property (retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer; // ivar: __activePerformer
@property (readonly, nonatomic) NSDictionary *_performerClassesByType; // ivar: __performerClassesByType
@property (readonly, nonatomic) PXAssetsDataSource *assetsDataSource;
@property (readonly, nonatomic) PHFetchResult *assetsFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<UIDragSession> *dragSession;
@property (readonly, nonatomic) NSObject<UIDropSession> *dropSession;
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PHFetchResult *people;
@property (readonly) Class superclass;


-(BOOL)canPerformActionType:(id)arg0 assetCollectionReference:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 forActivity:(id)arg1 ;
-(BOOL)supportsActionType:(id)arg0 ;
-(Class)_firstPossiblePerformerForActionType:(id)arg0 assetCollectionReference:(id)arg1 ;
-(Class)_firstPossiblePerformerForActionType:(id)arg0 assetCollectionReference:(id)arg1 requireThatPerformerCanPerformAction:(BOOL)arg2 ;
-(id)actionPerformerForActionType:(id)arg0 assetCollectionReference:(id)arg1 ;
-(id)activityForActionType:(id)arg0 ;
-(id)alertActionForActionType:(id)arg0 ;
-(id)barButtonItemForActionType:(id)arg0 ;
-(id)initWithAssetCollectionReference:(id)arg0 displayTitleInfo:(id)arg1 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 assetCollectionReference:(id)arg2 ;
-(id)standardActionForActionType:(id)arg0 ;
-(id)systemImageNameForActionType:(id)arg0 assetCollectionReference:(id)arg1 ;
-(void)_executeActionTypeIfPossible:(id)arg0 ;
-(void)_handleActionPerformerComplete:(id)arg0 success:(BOOL)arg1 error:(id)arg2 ;
-(void)_handleBarButtonItem:(id)arg0 ;
-(void)performActivity:(id)arg0 ;


@end


#endif