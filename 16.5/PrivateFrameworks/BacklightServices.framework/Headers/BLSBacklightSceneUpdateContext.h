// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSBACKLIGHTSCENEUPDATECONTEXT_H
#define BLSBACKLIGHTSCENEUPDATECONTEXT_H


#import <Foundation/Foundation.h>

#import "BLSAlwaysOnFrameSpecifier.h"
#import "BLSBacklightSceneVisualState.h"
#import "BLSBacklightChangeEvent.h"

@interface BLSBacklightSceneUpdateContext : NSObject

@property (readonly, nonatomic, getter=isAnimated) BOOL animated; // ivar: _animated
@property (readonly, nonatomic) BLSAlwaysOnFrameSpecifier *frameSpecifier; // ivar: _frameSpecifier
@property (readonly, nonatomic) BLSBacklightSceneVisualState *previousVisualState; // ivar: _previousVisualState
@property (readonly, nonatomic, getter=isTouchTargetable) BOOL touchTargetable; // ivar: _touchTargetable
@property (readonly, nonatomic) BLSBacklightChangeEvent *triggerEvent; // ivar: _triggerEvent
@property (readonly, nonatomic) BLSBacklightSceneVisualState *visualState; // ivar: _visualState


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithVisualState:(id)arg0 previousVisualState:(id)arg1 frameSpecifier:(id)arg2 animated:(BOOL)arg3 triggerEvent:(id)arg4 touchTargetable:(BOOL)arg5 ;


@end


#endif