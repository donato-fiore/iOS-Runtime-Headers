// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYACTIONMANAGER_H
#define PXCURATEDLIBRARYACTIONMANAGER_H

@class NSDictionary;


#import "PXActionManager.h"
#import "PXCuratedLibraryViewModel.h"

@interface PXCuratedLibraryActionManager : PXActionManager

@property (readonly, nonatomic) NSDictionary *actionPerformersByType; // ivar: _actionPerformersByType
@property (readonly, nonatomic) NSDictionary *assetCollectionActionPerformersByType; // ivar: _assetCollectionActionPerformersByType
@property (readonly, nonatomic) NSDictionary *constructorSpecificActionPerformersByType; // ivar: _constructorSpecificActionPerformersByType
@property (readonly, nonatomic) PXCuratedLibraryViewModel *viewModel; // ivar: _viewModel


+(id)actionsWithActionPerformers;
-(BOOL)canPerformActionType:(id)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)actionPerformerForActionType:(id)arg0 withAssetCollectionReference:(id)arg1 ;
-(id)actionPerformerForHitTestResult:(id)arg0 ;
-(id)actionPerformerForNavigatingToNextZoomLevelInLayout:(id)arg0 ;
-(id)curationDebugPerformerAssetCollectionReference:(id)arg0 diagnosticLayout:(id)arg1 ;
-(id)ellipsisButtonActionPerformerWithAssetCollectionReference:(id)arg0 ;
-(id)ellipsisButtonActionPerformerWithAssetCollectionReferenceProvider:(id)arg0 ;
-(id)init;
-(id)initWithViewModel:(id)arg0 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 ;
-(id)showAllActionPerformerWithAssetCollectionReference:(id)arg0 ;
-(id)tapToRadarPerformerAssetCollectionReference:(id)arg0 diagnosticLayout:(id)arg1 ;


@end


#endif