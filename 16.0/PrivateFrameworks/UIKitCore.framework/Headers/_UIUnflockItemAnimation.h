// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIUNFLOCKITEMANIMATION_H
#define _UIUNFLOCKITEMANIMATION_H


#import <Foundation/Foundation.h>

#import "UITargetedPreview.h"
#import "_UIMorphingPlatterView.h"
#import "UIView.h"
#import "UIViewFloatAnimatableProperty.h"
#import "_UIUnflockReparentingView.h"
#import "_UIPortalView.h"

@interface _UIUnflockItemAnimation : NSObject

@property (retain, nonatomic) UITargetedPreview *destination; // ivar: _destination
@property (retain, nonatomic) _UIMorphingPlatterView *platterView; // ivar: _platterView
@property (retain, nonatomic) UIView *positionReferenceView; // ivar: _positionReferenceView
@property (retain, nonatomic) UIViewFloatAnimatableProperty *positionTrackingProperty; // ivar: _positionTrackingProperty
@property (retain, nonatomic) _UIUnflockReparentingView *reparentingContainerView; // ivar: _reparentingContainerView
@property (retain, nonatomic) _UIPortalView *reparentingPortalView; // ivar: _reparentingPortalView
@property (nonatomic) NSInteger type; // ivar: _type


+(id)animationWithPlatterView:(id)arg0 destination:(id)arg1 positionReferenceView:(id)arg2 type:(NSInteger)arg3 ;
-(void)complete;
-(void)play;


@end


#endif