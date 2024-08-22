// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVISUALEFFECTHOST_H
#define _UIVISUALEFFECTHOST_H

@class UIView<_UIVisualEffectViewParticipating>, NSString, NSArray;
@protocol _UIVisualEffectViewSubviewMonitoring;

#import <Foundation/Foundation.h>

#import "_UIVisualEffectBackdropView.h"
#import "_UIVisualEffectDescriptor.h"
#import "_UIVisualEffectViewBackdropCaptureGroup.h"

@interface _UIVisualEffectHost : NSObject <_UIVisualEffectViewSubviewMonitoring>

 {
    BOOL _autosetSubviewLabelTintColor;
}


@property (weak, nonatomic) _UIVisualEffectBackdropView *captureView; // ivar: _captureView
@property (readonly, nonatomic) UIView<_UIVisualEffectViewParticipating> *contentView; // ivar: _contentView
@property (nonatomic) BOOL contentViewRequired; // ivar: _contentViewRequired
@property (retain, nonatomic) _UIVisualEffectDescriptor *currentEffectDescriptor; // ivar: _currentEffectDescriptor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // ivar: _primaryCaptureGroup
@property (readonly) Class superclass;
@property (readonly, nonatomic) _UIVisualEffectDescriptor *transitionEffectDescriptor; // ivar: _transitionEffectDescriptor
@property (readonly, nonatomic) NSArray *views; // ivar: _views


-(id)_cloneFilters:(id)arg0 ;
-(id)_viewForEntry:(id)arg0 fromCapturePool:(id)arg1 imagePool:(id)arg2 otherPool:(id)arg3 ;
-(id)initWithContentView:(id)arg0 ;
-(void)_applyEffectDescriptor:(id)arg0 ;
-(void)_applyIdentityDescriptorEffectInvertingView:(id)arg0 ;
-(void)_applyRequestedDescriptorEffectInvertingView:(id)arg0 ;
-(void)_configureEffectDescriptor:(id)arg0 ;
-(void)_evaluateInPlaceFiltering;
-(void)_iterateViews:(id)arg0 ;
-(void)_updateAdjustTintColors;
-(void)_updateView:(id)arg0 shouldDrawWithTintColor:(BOOL)arg1 ;
-(void)_view:(id)arg0 willGainDescendent:(id)arg1 ;
-(void)_view:(id)arg0 willLoseDescendent:(id)arg1 ;
-(void)_view:(id)arg0 willMoveToWindow:(id)arg1 ;
-(void)beginTransition;
-(void)endTransition;
-(void)monitorSubviewsOf:(id)arg0 ;
-(void)prepareToTransitionToEffectDescriptor:(id)arg0 ;


@end


#endif