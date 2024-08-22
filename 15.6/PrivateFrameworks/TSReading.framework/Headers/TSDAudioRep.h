// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDAUDIOREP_H
#define TSDAUDIOREP_H

@class CALayer, NSString;
@protocol TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate, TSDAudioHUDController;


#import "TSDMediaRep.h"
#import "TSKAVPlayerController.h"
#import "TSDMovieInfo.h"

@interface TSDAudioRep : TSDMediaRep <TSKAVPlayerControllerDelegate, TSDAudioHUDControllerDelegate>

 {
    TSKAVPlayerController *mPlayerController;
    CALayer *mPlayPauseButtonLayer;
    CALayer *mAudioImageLayer;
    float mDynamicVolume;
    BOOL mIsChangingDynamicVolume;
}


@property (readonly, nonatomic) NSObject<TSDAudioHUDController> *audioHUDController; // ivar: mAudioHUDController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) TSKAVPlayerController *playerController;
@property (readonly) Class superclass;
@property (readonly, nonatomic) float volume;


-(BOOL)canResetMediaSize;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)exclusivelyProvidesGuidesWhileAligning;
-(BOOL)hitPlayPauseButtonWithPoint:(struct CGPoint )arg0 ;
-(BOOL)isDraggable;
-(BOOL)p_isEditingAnimations;
-(BOOL)p_isPlaying;
-(BOOL)p_shouldPlayerControllerExistThroughoutSelection;
-(BOOL)p_shouldShowPlayPauseLayers;
-(BOOL)providesGuidesWhileAligning;
-(BOOL)shouldAllowReplacementFromDrop;
-(BOOL)shouldAllowReplacementFromPaste;
-(BOOL)shouldShowDragHUD;
-(BOOL)shouldShowKnobs;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowSizesInRulers;
-(Class)layerClass;
-(id)hitRepChrome:(struct CGPoint )arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)textureWithContext:(id)arg0 ;
-(struct CGRect )boundsForStandardKnobs;
-(void)becameNotSelected;
-(void)becameSelected;
-(void)dealloc;
-(void)didEndZooming;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 ;
-(void)dynamicVolumeChangeDidBegin;
-(void)dynamicVolumeChangeDidEnd;
-(void)dynamicVolumeUpdateToValue:(float)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)p_setupPlayerControllerIfNecessary;
-(void)p_teardownPlayerController;
-(void)p_updateButtonForPlaying:(BOOL)arg0 pressed:(BOOL)arg1 ;
-(void)p_updateEndTime;
-(void)p_updateRepeatMode;
-(void)p_updateStartTime;
-(void)p_updateVolume;
-(void)playbackDidStopForPlayerController:(id)arg0 ;
-(void)playerController:(id)arg0 playbackDidFailWithError:(id)arg1 ;
-(void)processChangedProperty:(int)arg0 ;
-(void)updateLayerGeometryFromLayout:(id)arg0 ;
-(void)updatePlayButtonForPoint:(struct CGPoint )arg0 ;
-(void)willBeRemoved;
-(void)willBeginReadMode;
-(void)willBeginZooming;
-(void)willUpdateLayer:(id)arg0 ;


@end


#endif