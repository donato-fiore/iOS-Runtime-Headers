// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARATTRIBUTEEDITORMODELMANAGER_H
#define AVTAVATARATTRIBUTEEDITORMODELMANAGER_H

@class AVTMemoji, AVTAvatarRecord, NSString;
@protocol AVTAvatarAttributeEditorModelManagerDelegateInternal, AVTAvatarAttributeEditorModelManagerDelegate, AVTUILogger;

#import <Foundation/Foundation.h>

#import "AVTAvatarConfiguration.h"
#import "AVTColorLayerProvider.h"
#import "AVTAvatarEditorColorsState.h"
#import "AVTCoreModel.h"
#import "AVTAvatarAttributeEditorState.h"
#import "AVTUIEnvironment.h"
#import "AVTPresetImageProvider.h"
#import "AVTAvatarAttributeEditorPreloader.h"
#import "AVTUIStickerRenderer.h"

@interface AVTAvatarAttributeEditorModelManager : NSObject <AVTAvatarAttributeEditorModelManagerDelegateInternal>



@property (retain, nonatomic) AVTMemoji *avatar; // ivar: _avatar
@property (readonly, nonatomic) AVTAvatarConfiguration *avatarConfiguration; // ivar: _avatarConfiguration
@property (readonly, copy, nonatomic) AVTAvatarRecord *avatarRecord; // ivar: _avatarRecord
@property (readonly, nonatomic) AVTColorLayerProvider *colorLayerProvider; // ivar: _colorLayerProvider
@property (readonly, nonatomic) AVTAvatarEditorColorsState *colorsState; // ivar: _colorsState
@property (readonly, nonatomic) AVTCoreModel *coreModel; // ivar: _coreModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVTAvatarAttributeEditorModelManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) AVTAvatarAttributeEditorState *editorState; // ivar: _editorState
@property (readonly, nonatomic) AVTUIEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) AVTPresetImageProvider *imageProvider; // ivar: _imageProvider
@property (retain, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) AVTAvatarAttributeEditorPreloader *preloader; // ivar: _preloader
@property (retain, nonatomic) AVTAvatarConfiguration *presetOverriddenConfiguration; // ivar: _presetOverriddenConfiguration
@property (readonly, nonatomic) AVTUIStickerRenderer *stickerRenderer; // ivar: _stickerRenderer
@property (readonly) Class superclass;


-(BOOL)primaryColorOfCategory:(NSInteger)arg0 doesMatchColorOfDependentCategory:(NSInteger)arg1 ;
-(BOOL)shouldDisplaySectionForCategory:(NSInteger)arg0 ;
-(BOOL)shouldDisplaySectionWithDisplayCondition:(id)arg0 inCategoryAtIndex:(NSUInteger)arg1 ;
-(id)buildInitialEditorState;
-(id)buildUIModel;
-(id)buildUIModelWithSelectedCategory:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(id)initWithAvatarRecord:(id)arg0 ;
-(id)initWithAvatarRecord:(id)arg0 coreModel:(id)arg1 editorColorsState:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 preloader:(id)arg5 environment:(id)arg6 stickerRenderer:(id)arg7 ;
-(id)initWithAvatarRecord:(id)arg0 coreModel:(id)arg1 imageProvider:(id)arg2 colorLayerProvider:(id)arg3 preloader:(id)arg4 environment:(id)arg5 stickerRenderer:(id)arg6 ;
-(void)applyConfigurationToAvatar:(id)arg0 animated:(BOOL)arg1 ;
-(void)applyPairColorUpdateIfNeeded:(id)arg0 forCategoryRight:(NSInteger)arg1 categoryLeft:(NSInteger)arg2 ;
-(void)applyPairColorUpdatesIfNeeded:(id)arg0 ;
-(void)buildIntitialColorsState;
-(void)flushResourcesForEnteringBackground;
-(void)loadResourcesIfNeeded;
-(void)setInitialColorStateForColorPicker:(id)arg0 forMulticolor:(BOOL)arg1 ;
-(void)updateAvatarByApplyingPresetOverrides:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateAvatarByDeletingSectionItems:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateAvatarBySelectingSectionItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateAvatarBySelectingSupplementalPickerItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)updateAvatarRecordFromAvatar;
// -(void)updateAvatarWithAvatarUpdater:(id)arg0 animated:(unk)arg1  ;
-(void)updateEditorStateBySelectingSectionItem:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif