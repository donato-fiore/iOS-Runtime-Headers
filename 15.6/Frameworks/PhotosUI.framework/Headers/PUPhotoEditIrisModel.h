// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITIRISMODEL_H
#define PUPHOTOEDITIRISMODEL_H

@class PICompositionController;
@protocol NSCopying, PUEditableAsset;


#import "PUViewModel.h"
#import "PUPhotoEditIrisModelChange.h"

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying>



@property (readonly, nonatomic) BOOL _assetHasAdjustments; // ivar: __assetHasAdjustments
@property (readonly, nonatomic) unsigned short _assetVisibility; // ivar: __assetVisibility
@property (nonatomic, setter=_setEditingVisibility:) unsigned short _editingVisibility; // ivar: __editingVisibility
@property (readonly, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (retain, nonatomic, setter=_setCompositionController:) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates; // ivar: _ignoresUpdates
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // ivar: _videoEnabled


+(void)updateChangeRequestForRevert:(id)arg0 ;
-(BOOL)_hasLegacyIrisConflicts;
-(BOOL)reenablingLivePhotoShouldRemoveEdits;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAsset:(id)arg0 compositionController:(id)arg1 ;
-(id)initWithIrisVisibilityState:(unsigned short)arg0 hasAdjustments:(BOOL)arg1 compositionController:(id)arg2 ;
-(id)newViewModelChange;
-(void)_setHidden:(BOOL)arg0 explicit:(BOOL)arg1 supportable:(BOOL)arg2 ;
-(void)_updateAutoDisableStateIfNeeded;
-(void)compositionDidChange;
-(void)dealloc;
-(void)notifyCannotSupportVideoEdits;
-(void)updateChangeRequestForSave:(id)arg0 ;


@end


#endif