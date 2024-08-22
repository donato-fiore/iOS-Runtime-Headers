// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVISUALEFFECTSUBVIEW_H
#define _UIVISUALEFFECTSUBVIEW_H

@class UIView<_UIVisualEffectViewParticipating>, NSString, NSArray;
@protocol _UIVisualEffectViewParticipating, _UIVisualEffectViewSubviewMonitoring;


#import "UIView.h"
#import "_UIVisualEffectViewBackdropCaptureGroup.h"

@interface _UIVisualEffectSubview : UIView <_UIVisualEffectViewParticipating>



@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containedView; // ivar: _containedView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableGroupFiltering;
@property (copy, nonatomic) NSArray *filters; // ivar: _filters
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // ivar: _primaryCaptureGroup
@property (weak, nonatomic) NSObject<_UIVisualEffectViewSubviewMonitoring> *subviewMonitor; // ivar: _subviewMonitor
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *viewEffects; // ivar: _viewEffects


-(BOOL)_shouldAnimatePropertyWithKey:(id)arg0 ;
-(id)_initialValueForLayer:(id)arg0 keyPath:(id)arg1 usePresentationValue:(BOOL)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_monitoredView:(id)arg0 willMoveFromSuperview:(id)arg1 toSuperview:(id)arg2 ;
-(void)applyIdentityFilterEffects;
-(void)applyIdentityViewEffects;
-(void)applyRequestedFilterEffects;
-(void)applyRequestedViewEffects;
-(void)layoutSubviews;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif