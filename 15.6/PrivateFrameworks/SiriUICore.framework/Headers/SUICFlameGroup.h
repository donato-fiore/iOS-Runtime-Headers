// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUICFLAMEGROUP_H
#define SUICFLAMEGROUP_H


#import <Foundation/Foundation.h>


@interface SUICFlameGroup : NSObject {
    ? _stateModifiersPtr;
    ? _stateModifiers;
}


@property (nonatomic) float globalAlpha; // ivar: _globalAlpha
@property (nonatomic) BOOL isAura; // ivar: _isAura
@property (nonatomic) BOOL isDyingOff; // ivar: _isDyingOff
@property ? stateModifiers;
@property ? stateModifiersPtr;
@property (nonatomic) float stateTime; // ivar: _stateTime
@property (nonatomic) float transitionPhase; // ivar: _transitionPhase
@property (nonatomic) *float transitionPhasePtr; // ivar: _transitionPhasePtr
@property (nonatomic) float zTime; // ivar: _zTime




@end


#endif