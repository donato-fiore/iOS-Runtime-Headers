// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONCONTROLLER_H
#define NTKCOMPLICATIONCONTROLLER_H

@class NSMutableArray, NSMapTable, CLKDevice, NSDate, NSString;
@protocol NTKComplicationDisplay;

#import <Foundation/Foundation.h>

#import "NTKComplication.h"
#import "NTKFace.h"

@interface NTKComplicationController : NSObject {
    BOOL _hasGoneLive;
    BOOL _active;
    id<NTKComplicationDisplay> *_legacyDisplayDEPRECATED;
    NSMutableArray *_displayWrappers;
    NSMapTable *_displayWrappersToDataMode;
}


@property (readonly, nonatomic) NSInteger animationMode; // ivar: _animationMode
@property (readonly, nonatomic) NSInteger cachingMode; // ivar: _cachingMode
@property (readonly, nonatomic) NTKComplication *complication; // ivar: _complication
@property (readonly, nonatomic) NSInteger complicationFamily; // ivar: _complicationFamily
@property (readonly, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly, nonatomic) NSInteger effectiveFaceDataMode; // ivar: _effectiveFaceDataMode
@property (readonly, nonatomic) NTKFace *face; // ivar: _face
@property (nonatomic, getter=isFaceZooming) BOOL faceZooming; // ivar: _faceZooming
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (readonly, weak, nonatomic) NSObject<NTKComplicationDisplay> *legacyDisplay;
@property (retain, nonatomic) NSDate *pauseDate; // ivar: _pauseDate
@property (nonatomic) BOOL showsLockedUI; // ivar: _showsLockedUI
@property (readonly, nonatomic) NSString *slot; // ivar: _slot
@property (readonly, nonatomic) NSInteger updatingMode; // ivar: _updatingMode


+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
+(BOOL)_acceptsComplicationType:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(BOOL)_isLegacy;
+(Class)controllerClassForComplicationType:(NSUInteger)arg0 family:(NSInteger)arg1 forDevice:(id)arg2 ;
+(id)DEPRECATEDControllerForComplication:(id)arg0 withLegacyDisplay:(id)arg1 forDevice:(id)arg2 ;
+(id)controllerForComplication:(id)arg0 withRequestedFamily:(NSInteger)arg1 face:(id)arg2 slot:(id)arg3 ;
-(BOOL)hasTapAction;
-(BOOL)wantsLegacyDisplay;
-(Class)richComplicationDisplayViewClass;
-(id)_initWithComplication:(id)arg0 legacyDisplay:(id)arg1 forDevice:(id)arg2 ;
-(id)initWithComplication:(id)arg0 family:(NSInteger)arg1 face:(id)arg2 slot:(id)arg3 ;
-(void)DEPRECATEDInvalidate;
-(void)_activate;
-(void)_applyAnimationMode;
-(void)_applyCachingMode;
-(void)_applyUpdatingMode;
-(void)_configureForLegacyDisplay:(id)arg0 ;
-(void)_deactivate;
-(void)_handleRenderStatsForDisplayWrapper:(id)arg0 withTime:(CGFloat)arg1 cost:(CGFloat)arg2 ;
-(void)_openApp:(id)arg0 withURL:(id)arg1 result:(id)arg2 ;
-(void)_openAppWithURL:(id)arg0 ;
-(void)_updateEffectiveAnimationMode;
-(void)_updateEffectiveCachingMode;
-(void)_updateEffectiveFaceDataMode;
-(void)_updateEffectiveUpdatingMode;
-(void)_updateInternalModes:(BOOL)arg0 ;
-(void)_updateIsComplicationActive:(BOOL)arg0 ;
-(void)activate;
-(void)addDisplayWrapper:(id)arg0 ;
-(void)deactivate;
-(void)dealloc;
-(void)didTouchDownInView:(id)arg0 ;
-(void)didTouchUpInsideView:(id)arg0 ;
-(void)enumerateDisplayWrappersWithBlock:(id)arg0 ;
-(void)handleFaceDefaultsChanged;
-(void)notifyDelegateOnTimelineChangeWithTritiumUpdatePriority:(NSInteger)arg0 ;
-(void)performBackgroundDataRefresh;
-(void)performTapAction;
-(void)removeDisplayWrapper:(id)arg0 ;
-(void)setDataMode:(NSInteger)arg0 forDisplayWrapper:(id)arg1 ;


@end


#endif