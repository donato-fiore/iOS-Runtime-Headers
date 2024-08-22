// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKKALEIDOSCOPEFACEVIEW_H
#define NTKKALEIDOSCOPEFACEVIEW_H

@class CLKUIQuadView, UIColor, CLKUITexture, UIImage, NSString, CLKUIResourceProviderKey, NSMapTable, NSMutableSet;
@protocol NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate;


#import "NTKAnalogFaceView.h"
#import "NTKRoundedCornerOverlayView.h"
#import "NTKColorCircularUtilitarianFaceViewComplicationFactory.h"
#import "NTKPhoto.h"
#import "NTKKaleidoscopePathfinder.h"

@interface NTKKaleidoscopeFaceView : NTKAnalogFaceView <NTKColorCircularUtilitarianFaceViewComplicationFactoryDelegate, CLKUIQuadViewDelegate, CLKUIResourceProviderDelegate>

 {
    CLKUIQuadView *_quadView;
    NTKRoundedCornerOverlayView *_cornerView;
    NTKColorCircularUtilitarianFaceViewComplicationFactory *_faceViewComplicationFactory;
    CGFloat _crownOffset;
    unsigned int _frameCounter;
    UIColor *_complicationPlatterColor;
    CGFloat _lastComplicationUpdateTime;
    *CGColorSpace _extendedSRGBcolorSpace;
    CLKUITexture *_userTextureLuma;
    CLKUITexture *_userTextureChroma;
    UIImage *_userSwatch;
    UIImage *_userImage;
    NTKPhoto *_userPhoto;
    NSString *_userUuidLuma;
    NSString *_userUuidChroma;
    NTKKaleidoscopePathfinder *_userPathfinder;
    CLKUIResourceProviderKey *_resourceProviderKey;
    float _crownTurnsPerRotation;
    CGFloat _dayDuration;
    NSMapTable *_quadPathfinderMapTable;
    NSMutableSet *_loadedAssets;
}


@property (retain, nonatomic) UIColor *complicationColor; // ivar: _complicationColor
@property (nonatomic) NSUInteger currentAsset; // ivar: _currentAsset
@property (nonatomic) NSUInteger currentStyle; // ivar: _currentStyle
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_swatchForEditModeDependsOnOptions:(NSInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)_isEditOptionFullscreen:(id)arg0 ;
-(BOOL)_slotSupportsCurvedText:(id)arg0 ;
-(BOOL)_supportsUnadornedSnapshot;
-(BOOL)_wantsStatusBarIconShadow;
-(BOOL)slotUsesCurvedText:(id)arg0 ;
-(CGFloat)_complicationAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_contentAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_handAlphaForEditMode:(NSInteger)arg0 ;
-(CGFloat)_kaleidoscopeTime;
-(CGFloat)_verticalPaddingForStatusBar;
-(NSInteger)_complicationPickerStyleForSlot:(id)arg0 ;
-(NSInteger)_keylineStyleForComplicationSlot:(id)arg0 ;
-(float)_crownTurnsForStyle:(NSUInteger)arg0 ;
-(id)_imageForAsset:(NSUInteger)arg0 ;
-(id)_keylineViewForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_newComplicationFactoryForDevice:(id)arg0 ;
-(id)_pathfinderForAsset:(NSUInteger)arg0 ;
-(id)_quadWithStyle:(NSUInteger)arg0 asset:(NSUInteger)arg1 ;
-(id)_snapshotWithAsset:(NSUInteger)arg0 style:(NSUInteger)arg1 size:(struct CGSize )arg2 ;
-(id)_swatchForAsset:(NSUInteger)arg0 ;
-(id)_swatchFromUserImage;
-(id)_swatchImageForEditOption:(id)arg0 mode:(NSInteger)arg1 withSelectedOptions:(id)arg2 ;
-(id)_textureChromaForAsset:(NSUInteger)arg0 ;
-(id)_textureLumaForAsset:(NSUInteger)arg0 ;
-(id)_updatePathForQuadView:(id)arg0 time:(CGFloat)arg1 crownOffset:(CGFloat)arg2 ;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(id)provideAtlasBacking:(id)arg0 ;
-(id)resourceProviderKey;
-(struct CGRect )_relativeKeylineFrameForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(void)_applyDataMode;
-(void)_applyFrozen;
-(void)_applyOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyRubberBandingFraction:(CGFloat)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(void)_applyTransitionFraction:(CGFloat)arg0 fromOption:(id)arg1 toOption:(id)arg2 forCustomEditMode:(NSInteger)arg3 slot:(id)arg4 ;
-(void)_cleanupAfterEditing;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg0 selectedComplication:(id)arg1 ;
-(void)_cleanupAfterZoom;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_configureTimeView:(id)arg0 ;
-(void)_curvedComplicationCircleRadius:(*CGFloat)arg0 centerAngle:(*CGFloat)arg1 maxAngularWidth:(*CGFloat)arg2 circleCenter:(struct CGPoint *)arg3 interior:(*BOOL)arg4 forSlot:(id)arg5 ;
-(void)_disableCrown;
-(void)_enableCrown;
-(void)_loadCurrentQuad;
-(void)_loadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_prepareToZoom;
-(void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg0 inGroup:(id)arg1 ;
-(void)_unloadSnapshotContentViews;
-(void)_updateComplicationColors;
-(void)_updateDayDuration;
-(void)_updateForResourceDirectoryChange:(id)arg0 ;
-(void)_updateFramerate;
-(void)_updatePathForTime:(CGFloat)arg0 ;
-(void)_updateRotationForQuadView:(id)arg0 time:(CGFloat)arg1 crownOffset:(CGFloat)arg2 ;
-(void)_updateUserContent;
-(void)_updateWithAsset:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)quadViewWillDisplay:(id)arg0 forTime:(CGFloat)arg1 ;


@end


#endif