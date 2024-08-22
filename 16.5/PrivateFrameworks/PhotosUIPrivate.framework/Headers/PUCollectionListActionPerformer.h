// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUCOLLECTIONLISTACTIONPERFORMER_H
#define PUCOLLECTIONLISTACTIONPERFORMER_H

@class PXCollectionListActionPerformer, UIAlertAction, NSString;
@protocol PUAlbumStreamActivityDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate;


#import "PUAlbumStreamActivity.h"

@interface PUCollectionListActionPerformer : PXCollectionListActionPerformer <PUAlbumStreamActivityDelegate, PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate>



@property (retain, nonatomic) PUAlbumStreamActivity *_albumStreamActivity; // ivar: __albumStreamActivity
@property (weak, nonatomic, setter=_setCreateAlbumAlertAction:) UIAlertAction *createAlbumAlertAction; // ivar: _createAlbumAlertAction
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *finishedPickingBlock; // ivar: _finishedPickingBlock
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_canUseSelectionForActionType:(id)arg0 selectionProvider:(id)arg1 ;
+(id)localizedTitleForActionType:(id)arg0 selectionProvider:(id)arg1 ;
-(id)_validateNewCollectionTitle:(id)arg0 ;
-(void)_updateCreateAlbumTextField:(id)arg0 ;
-(void)albumStreamActivity:(id)arg0 didFinishSuccessfully:(BOOL)arg1 ;
-(void)albumStreamActivity:(id)arg0 dismissViewController:(id)arg1 completion:(id)arg2 ;
-(void)albumStreamActivity:(id)arg0 presentViewController:(id)arg1 ;
-(void)handleCreateSharedAlbum;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)presentSetupUIForAlbumCreationWithCompletionHandler:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;


@end


#endif