// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITIRISMODEL_H
#define PUPHOTOEDITIRISMODEL_H

@class PICompositionController, NSString;
@protocol NSCopying, PXEditLivePhotoModel, PUEditableAsset;


#import "PUViewModel.h"
#import "PUPhotoEditIrisModelChange.h"

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying, PXEditLivePhotoModel>



@property (readonly, nonatomic) NSObject<PUEditableAsset> *asset; // ivar: _asset
@property (readonly, nonatomic) BOOL assetHasAdjustments; // ivar: _assetHasAdjustments
@property (readonly, nonatomic) unsigned short assetVisibility; // ivar: _assetVisibility
@property (retain, nonatomic) PICompositionController *compositionController; // ivar: _compositionController
@property (readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned short editingVisibility; // ivar: _editingVisibility
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresUpdates; // ivar: _ignoresUpdates
@property (readonly) Class superclass;
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