// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIGRAVITYWELLEFFECTBODY_H
#define _UIGRAVITYWELLEFFECTBODY_H


#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIMorphingPlatterView.h"
#import "UITargetedPreview.h"

@interface _UIGravityWellEffectBody : NSObject

@property (retain, nonatomic) UIView *anchorView; // ivar: _anchorView
@property (nonatomic) CGFloat distanceFromPrimaryBody; // ivar: _distanceFromPrimaryBody
@property (retain, nonatomic) _UIMorphingPlatterView *effectView; // ivar: _effectView
@property (nonatomic) CGPoint positionInPrimaryContainer; // ivar: _positionInPrimaryContainer
@property (retain, nonatomic) UITargetedPreview *preview; // ivar: _preview


-(id)description;


@end


#endif