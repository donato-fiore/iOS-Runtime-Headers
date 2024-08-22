// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVMOTIONEFFECTCOMPONENT_H
#define PVMOTIONEFFECTCOMPONENT_H

@class NSString;
@protocol PVMotionEffectLoadDelegate, PVMotionEffectPropertyMapDelegate, PVMotionEffectRenderCacheDelegate;


#import "PVEffectComponent.h"
#import "PVMotionEffect.h"

@interface PVMotionEffectComponent : PVEffectComponent <PVMotionEffectLoadDelegate, PVMotionEffectPropertyMapDelegate, PVMotionEffectRenderCacheDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PVMotionEffect *motionEffect; // ivar: _motionEffect
@property (readonly) Class superclass;


-(BOOL)motionEffect:(id)arg0 propertiesDisableCache:(id)arg1 time:(struct ? )arg2 forcePosterFrame:(BOOL)arg3 ;
-(BOOL)motionEffect:(id)arg0 shouldInvalidateCachedRenderForProperty:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(id)initWithMotionEffect:(id)arg0 ;
-(id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg0 ;
-(void)effect:(id)arg0 updateProperties:(id)arg1 allProperties:(id)arg2 ;
-(void)motionEffect:(id)arg0 didBecomeReady:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffect:(id)arg0 didLoad:(*void)arg1 ;
-(void)motionEffect:(id)arg0 willOpenMedia:(*void)arg1 properties:(id)arg2 ;
-(void)motionEffect:(id)arg0 willRender:(*void)arg1 properties:(id)arg2 time:(struct ? )arg3 ;
-(void)motionEffectDidFailToLoad:(id)arg0 ;
-(void)motionEffectDidStartLoading:(id)arg0 ;
-(void)motionEffectDidUnload:(id)arg0 ;


@end


#endif