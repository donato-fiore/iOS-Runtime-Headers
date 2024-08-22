// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIROOTWINDOW_H
#define _UIROOTWINDOW_H

@class NSString, RBSAssertion;


#import "UIWindow.h"

@interface _UIRootWindow : UIWindow {
    CGFloat _scale;
    os_unfair_lock_s _visibilityLock;
    BOOL _visibilityLock_enabled;
    NSString *_visibilityLock_environment;
    NSString *_visibilityLock_identifier;
    BOOL _visibilityLock_updateEnqueued;
    os_unfair_lock_s _visibilityProcessingLock;
    NSString *_visibilityProcessingLock_identifier;
    RBSAssertion *_visibilityProcessingLock_assertion;
}


@property (nonatomic, getter=_additionalRootLayerAffineTransform, setter=_setAdditionalRootLayerAffineTransform:) CGAffineTransform additionalRootLayerAffineTransform; // ivar: _additionalRootLayerAffineTransform
@property (readonly, copy, nonatomic) NSString *visibilityEnvironment;


-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isWindowServerHostingManaged;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_transformLayerIncludesScreenRotation;
-(BOOL)_wantsSceneAssociation;
-(id)_context;
-(id)_layerForCoordinateSpaceConversion;
-(id)_visibilityLock_environment;
-(id)initWithDisplay:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(struct ? )_bindingDescription;
-(void)_configureContextOptions:(id)arg0 ;
-(void)_configureRootLayer:(id)arg0 sceneTransformLayer:(id)arg1 transformLayer:(id)arg2 ;
-(void)_didMoveFromScreen:(id)arg0 toScreen:(id)arg1 ;
-(void)_noteScreenDidChangeMode:(id)arg0 ;
-(void)_updateVisibility;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(void)dealloc;
-(void)setHidden:(BOOL)arg0 ;
-(void)setVisibilityIdentifier:(id)arg0 ;


@end


#endif