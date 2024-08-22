// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXASSETACTIONMANAGER_H
#define PXASSETACTIONMANAGER_H



#import "PXActionManager.h"
#import "PXSectionedObjectReference.h"
#import "PXSectionedSelectionManager.h"

@interface PXAssetActionManager : PXActionManager

@property (retain, nonatomic) PXSectionedObjectReference *objectReference; // ivar: _objectReference
@property (retain, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager


-(BOOL)canPerformActionType:(id)arg0 ;
-(BOOL)canPerformAssetVariationActions;
-(BOOL)shouldEnableActionType:(id)arg0 onAsset:(id)arg1 ;
-(id)actionPerformerForActionType:(id)arg0 ;
-(id)init;
-(id)initWithSelectedObjectReference:(id)arg0 dataSourceManager:(id)arg1 ;
-(id)initWithSelectionManager:(id)arg0 ;
-(id)localizedTitleForActionType:(id)arg0 useCase:(NSUInteger)arg1 ;
-(id)systemImageNameForActionType:(id)arg0 ;
-(void)executeActionForActionType:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)px_registerAdditionalPerformerClasses;
-(void)setAdditionalPropertiesFromActionManager:(id)arg0 ;


@end


#endif