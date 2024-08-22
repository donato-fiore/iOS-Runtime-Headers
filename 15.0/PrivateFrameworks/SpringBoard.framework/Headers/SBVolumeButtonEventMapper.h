// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBVOLUMEBUTTONEVENTMAPPER_H
#define SBVOLUMEBUTTONEVENTMAPPER_H

@class NSHashTable, NSString;
@protocol PTSettingsKeyObserver, SBUIActiveOrientationObserver;

#import <Foundation/Foundation.h>

#import "SBHUDSettings.h"

@interface SBVolumeButtonEventMapper : NSObject <PTSettingsKeyObserver, SBUIActiveOrientationObserver>

 {
    SBHUDSettings *_settings;
    NSHashTable *_activeHUDModels;
}


@property (nonatomic) NSUInteger buttonsEdge; // ivar: _buttonsEdge
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger effectiveInterfaceOrientation; // ivar: _effectiveInterfaceOrientation
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (readonly) Class superclass;
@property (nonatomic, getter=isVolumeButtonRemappingEnabled) BOOL volumeButtonRemappingEnabled; // ivar: _volumeButtonRemappingEnabled


+(BOOL)_shouldInvertVolumeButtonsForLTRRightEdgePadInInterfaceOrientation:(NSInteger)arg0 ;
+(BOOL)_shouldInvertVolumeButtonsForLTRTopEdgePadInInterfaceOrientation:(NSInteger)arg0 ;
+(BOOL)_shouldInvertVolumeButtonsForRTLRightEdgePadInInterfaceOrientation:(NSInteger)arg0 ;
+(BOOL)_shouldInvertVolumeButtonsForRTLTopEdgePadInInterfaceOrientation:(NSInteger)arg0 ;
+(BOOL)isVolumeButtonRemappingSupported;
+(BOOL)shouldInvertVolumeButtonsOnEdge:(NSUInteger)arg0 forInterfaceOrientation:(NSInteger)arg1 userInterfaceLayoutDirection:(NSInteger)arg2 ;
-(BOOL)isPreventingEffectiveInterfaceOrientationChanges;
-(BOOL)shouldInvertVolumeButtonsForEvent:(id)arg0 withPressType:(NSInteger)arg1 ;
-(id)init;
-(void)_didDismissHUD:(id)arg0 ;
-(void)_prototypeSettingsChanged;
-(void)_willPresentHUD:(id)arg0 ;
-(void)activeInterfaceOrientationDidChangeToOrientation:(NSInteger)arg0 willAnimateWithDuration:(CGFloat)arg1 fromOrientation:(NSInteger)arg2 ;
-(void)activeInterfaceOrientationWillChangeToOrientation:(NSInteger)arg0 ;
-(void)dealloc;
-(void)settings:(id)arg0 changedValueForKey:(id)arg1 ;


@end


#endif