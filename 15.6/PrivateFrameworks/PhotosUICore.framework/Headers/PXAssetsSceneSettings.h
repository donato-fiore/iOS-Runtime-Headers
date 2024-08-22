// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXASSETSSCENESETTINGS_H
#define PXASSETSSCENESETTINGS_H



#import "PXSettings.h"

@interface PXAssetsSceneSettings : PXSettings

@property (nonatomic) BOOL allowAnimatedImagePlayback; // ivar: _allowAnimatedImagePlayback
@property (nonatomic) BOOL allowLivePhotoPlayback; // ivar: _allowLivePhotoPlayback
@property (nonatomic) BOOL allowLoopingVideoPlayback; // ivar: _allowLoopingVideoPlayback
@property (nonatomic) BOOL allowVideoPlayback; // ivar: _allowVideoPlayback
@property (nonatomic) BOOL animateContentByDefault; // ivar: _animateContentByDefault
@property (nonatomic) BOOL enableImagePreheating; // ivar: _enableImagePreheating
@property (nonatomic) BOOL playLivePhotosAsLoops; // ivar: _playLivePhotosAsLoops
@property (nonatomic) BOOL showBordersOnAnimatedContent; // ivar: _showBordersOnAnimatedContent
@property (nonatomic) CGFloat transitionDuration; // ivar: _transitionDuration


+(id)settingsControllerModule;
+(id)sharedInstance;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif