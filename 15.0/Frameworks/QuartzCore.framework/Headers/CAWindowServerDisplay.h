// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAWINDOWSERVERDISPLAY_H
#define CAWINDOWSERVERDISPLAY_H

@class NSString, NSDictionary, NSSet, NSUUID;
@protocol CABrightnessControl, CAPresetTransaction;

#import <Foundation/Foundation.h>

#import "CAWindowServerDisplay.h"

@interface CAWindowServerDisplay : NSObject <CABrightnessControl, CAPresetTransaction>

 {
    *CAWindowServerDisplayImpl _impl;
}


@property (copy) NSString *TVMode;
@property (copy) NSString *TVSignalType;
@property BOOL accessibilityFrameRateLimitEnabled;
@property BOOL allowsDisplayCompositing;
@property BOOL allowsExtendedDynamicRange;
@property BOOL allowsVirtualModes;
@property CGColorTRC blackpointAdaptation;
@property (getter=isBlanked) BOOL blanked;
@property (retain) *CGColorSpace blendColorSpace;
@property (readonly) CGRect bounds;
@property (readonly, nonatomic) BOOL brightnessAvailable;
@property (copy) id *brightnessCallback;
@property (readonly, nonatomic) NSDictionary *brightnessCapabilities;
@property (readonly) ? chromaticities;
@property (readonly) CAWindowServerDisplay *cloneMaster;
@property (readonly) NSSet *clones;
@property (copy, nonatomic) NSString *colorMode;
@property float contrast;
@property (copy) NSDictionary *cursorDictionary;
@property BOOL cursorEnabled;
@property BOOL cursorHidden;
@property CGPoint cursorPosition;
@property (retain) *__IOSurface cursorSurface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isDetaching) BOOL detaching;
@property (readonly) *void detachingDisplay;
@property (readonly) CGRect detachingRect;
@property (readonly) NSString *deviceName;
@property BOOL disabled;
@property BOOL disablesUpdates;
@property (retain) *CGColorSpace displayColorSpace;
@property (readonly) unsigned int displayId;
@property (readonly) NSInteger displayType;
@property BOOL enabled;
@property (getter=isFlipBookEnabled) BOOL flipBookEnabled;
@property (readonly) unsigned int framebufferFormat;
@property (readonly) float gamma;
@property (getter=isGrayscale) BOOL grayscale;
@property (readonly) NSUInteger hash;
@property (copy) id *hotPlugCallback;
@property float idealRefreshRate;
@property BOOL invertsColors;
@property float maximumBrightness;
@property (readonly) CGSize maximumCursorSize;
@property (readonly) NSUInteger maximumFrameTime; // ivar: _maximumFrameTime
@property (nonatomic) CGFloat maximumHDRLuminance;
@property (readonly) float maximumLuminance;
@property (nonatomic) CGFloat maximumReferenceLuminance;
@property (nonatomic) CGFloat maximumSDRLuminance;
@property (readonly) CGFloat maximumScale;
@property (readonly) NSUInteger maximumSourceRectPixels;
@property (readonly) NSUInteger maximumSourceRectWidth;
@property (readonly) NSUInteger maximumVRRVBLDelta; // ivar: _maximumVRRVBLDelta
@property (readonly) NSUInteger minimumFrameTime; // ivar: _minimumFrameTime
@property (nonatomic) CGFloat minimumLuminance;
@property (readonly) CGFloat minimumScale;
@property (readonly) NSUInteger minimumSourceRectSize;
@property (readonly) NSUInteger minimumVRRVBLDelta; // ivar: _minimumVRRVBLDelta
@property (readonly) CGSize minimumVisibleCursorSize;
@property (getter=isMirroringEnabled) BOOL mirroringEnabled; // ivar: _mirroringEnabled
@property (readonly) NSString *name;
@property (readonly) CGSize nativeSize;
@property (readonly) BOOL needsUpdate;
@property (readonly) CGFloat nextWakeupTime;
@property float nits;
@property (copy) NSString *orientation;
@property (copy) NSString *overscanAdjustment;
@property CGFloat overscanAmount;
@property CGSize overscanAmounts;
@property (readonly) CGSize panelPhysicalSize;
@property (readonly) NSUInteger panelPointsPerInch;
@property (nonatomic) BOOL preserveAppleSRGBGammaResponse;
@property (readonly) NSUInteger previousVBL;
@property int processId;
@property (readonly, nonatomic) NSUInteger productId;
@property (readonly) unsigned int rendererFlags;
@property CGFloat scale;
@property BOOL scalePreservesAspect;
@property CGSize scales;
@property (getter=isSecure) BOOL secure;
@property (readonly, nonatomic) unsigned int serviceObject;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsColorSpaces;
@property (readonly) BOOL supportsCursor;
@property (readonly) BOOL supportsExtendedColors;
@property CGColorTRC systemGamma;
@property NSInteger tag;
@property (readonly) NSInteger transportType;
@property (nonatomic) NSInteger trinityCabalConfig;
@property (readonly) BOOL tripleBuffered;
@property (readonly) NSString *uniqueId;
@property (copy) id *updateRequestCallback;
@property BOOL usesPreferredModeRefreshRate;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly) NSUInteger vblDelta;
@property (readonly, nonatomic) NSUInteger vendorId;
@property (readonly) BOOL wantedToDetach;
@property (readonly, nonatomic) BOOL whitePointAvailable;
@property (readonly, nonatomic) BOOL whitePointD50XYZ;
@property (readonly) ? whitepoint;


-(BOOL)abortWhitePointRamp:(struct ? *)arg0 error:(*id)arg1 ;
-(BOOL)canUpdate:(BOOL)arg0 ;
-(BOOL)canUpdateWithFlags:(unsigned int)arg0 ;
-(BOOL)commitBrightness:(*id)arg0 ;
-(BOOL)commitPreset;
-(BOOL)finishExternalUpdate:(*void)arg0 withFlags:(unsigned int)arg1 ;
-(BOOL)finishExternalUpdate:(*void)arg0 withFlags:(unsigned int)arg1 debugInfo:(NSUInteger)arg2 ;
-(BOOL)setDigitalModes:(id)arg0 withTimings:(id)arg1 ;
-(BOOL)setWhitePoint:(struct ? *)arg0 rampDuration:(CGFloat)arg1 error:(*id)arg2 ;
-(float)maximumRefreshRate;
-(float)minimumRefreshRate;
-(id)_initWithCADisplayServer:(*void)arg0 ;
-(id)hitTestAtPosition:(struct CGPoint )arg0 options:(id)arg1 ;
-(id)notificationQueue;
-(struct CATransform3D )transformFromLayerId:(NSUInteger)arg0 inContextId:(unsigned int)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromContextId:(unsigned int)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 toContextId:(unsigned int)arg1 ;
-(struct __IOSurface *)acquireFrozenSurface;
-(unsigned int)clientPortAtPosition:(struct CGPoint )arg0 ;
-(unsigned int)clientPortOfContextId:(unsigned int)arg0 ;
-(unsigned int)contextIdAtPosition:(struct CGPoint )arg0 ;
-(unsigned int)contextIdAtPosition:(struct CGPoint )arg0 excludingContextIds:(id)arg1 ;
-(unsigned int)taskNamePortOfContextId:(unsigned int)arg0 ;
-(void)abortColorMatrixRamp:(*float)arg0 scale:(*float)arg1 ;
-(void)abortContrastEnhancerRamp:(*float)arg0 ;
-(void)activateReplay;
-(void)addClone:(id)arg0 ;
-(void)addClone:(id)arg0 options:(id)arg1 ;
-(void)addFramePresentationTimestamp:(NSUInteger)arg0 ;
-(void)beginExternalUpdate:(*void)arg0 usingSoftwareRenderer:(BOOL)arg1 ;
-(void)copyDisplayTimingsFromDisplay:(id)arg0 ;
-(void)dealloc;
-(void)emitBrightnessError:(*id)arg0 ;
-(void)emitWhitePointError:(*id)arg0 ;
-(void)freeze;
-(void)invalidate;
-(void)postNotification:(id)arg0 payload:(id)arg1 ;
-(void)powerStateDidChange:(id)arg0 ;
-(void)presentSurface:(struct __IOSurface *)arg0 withOptions:(id)arg1 ;
-(void)registerForNotifications:(id)arg0 withBlock:(id)arg1 ;
-(void)removeAllClones;
-(void)removeClone:(id)arg0 ;
-(void)renderForTime:(CGFloat)arg0 ;
-(void)setAccessibilityColorMatrix:(*float)arg0 scale:(float)arg1 ;
-(void)setAmbient:(float)arg0 ;
-(void)setBrightnessLimit:(float)arg0 ;
-(void)setCalibrationPhase:(unsigned int)arg0 forIdentifier:(unsigned int)arg1 ;
-(void)setColorMatrix:(*float)arg0 scale:(float)arg1 rampDuration:(CGFloat)arg2 ;
-(void)setHeadroom:(float)arg0 ;
-(void)setMaximumRefreshRate:(float)arg0 ;
-(void)setMinimumRefreshRate:(float)arg0 ;
-(void)setNotificationQueue:(id)arg0 ;
-(void)setPotentialHeadroom:(float)arg0 ;
-(void)setSDRBrightness:(float)arg0 ;
-(void)setUserAdjustment:(*float)arg0 scale:(float)arg1 ;
-(void)unregisterNotificationBlocks;
-(void)update;
-(void)willUnblank;


@end


#endif