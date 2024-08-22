// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPHOTODETAILSACTIONMENUCONTROLLER_H
#define PXPHOTODETAILSACTIONMENUCONTROLLER_H

@class NSString, PHFetchResult;
@protocol PXChangeObserver, PXAssetCollectionActionPerformerDelegate, PXPhotosDetailsActionMenuDelegate;


#import "PXActionMenuController.h"
#import "PXPhotoKitAssetCollectionActionManager.h"
#import "PXCMMSendBackSuggestionSource.h"

@interface PXPhotoDetailsActionMenuController : PXActionMenuController <PXChangeObserver, PXAssetCollectionActionPerformerDelegate>



@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetActionManager; // ivar: _assetActionManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPhotosDetailsActionMenuDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *people; // ivar: _people
@property (retain, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // ivar: _sendBackSuggestionSource
@property (readonly) Class superclass;


-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(BOOL)shouldAllowPerformanceOfActionType:(id)arg0 ;
-(id)assetCollectionActionManager;
-(id)availableActionTypes;
-(id)initWithActionManagers:(id)arg0 ;
-(id)initWithSelectionManager:(id)arg0 displayTitleInfo:(id)arg1 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)actionPerformer:(id)arg0 didChangeState:(NSUInteger)arg1 ;
-(void)assetCollectionActionPerformer:(id)arg0 playMovieForAssetCollection:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;


@end


#endif