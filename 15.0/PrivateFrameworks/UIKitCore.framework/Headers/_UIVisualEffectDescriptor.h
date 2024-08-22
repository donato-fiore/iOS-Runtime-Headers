// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIVISUALEFFECTDESCRIPTOR_H
#define _UIVISUALEFFECTDESCRIPTOR_H

@class UIView<_UIVisualEffectViewParticipating>, NSArray;

#import <Foundation/Foundation.h>


@interface _UIVisualEffectDescriptor : NSObject

@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *_identityContainerView; // ivar: _identityContainerView
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *_requestedContainerView; // ivar: _requestedContainerView
@property (nonatomic) BOOL allowsVibrancyInContent; // ivar: _allowsVibrancyInContent
@property (nonatomic) NSInteger alphaTransition; // ivar: _alphaTransition
@property (retain, nonatomic) UIView<_UIVisualEffectViewParticipating> *containerView;
@property (nonatomic) BOOL disableInPlaceFiltering; // ivar: _disableInPlaceFiltering
@property (copy, nonatomic) NSArray *filterEntries; // ivar: _filterEntries
@property (copy, nonatomic) NSArray *overlays; // ivar: _overlays
@property (nonatomic) BOOL requestAlphaTransition; // ivar: _requestAlphaTransition
@property (nonatomic) BOOL textShouldRenderWithTintColor; // ivar: _textShouldRenderWithTintColor
@property (copy, nonatomic) NSArray *underlays; // ivar: _underlays
@property (copy, nonatomic) NSArray *viewEffects; // ivar: _viewEffects


+(id)newTransitionDescriptorForStops:(id)arg0 ;
-(id)copyForTransitionToDescriptor:(id)arg0 ;
-(id)description;
-(id)init;
-(void)addFilterEntry:(id)arg0 ;
-(void)addOverlay:(id)arg0 ;
-(void)addUnderlay:(id)arg0 ;
-(void)addViewEffect:(id)arg0 ;
-(void)uniqueFilterNames;


@end


#endif