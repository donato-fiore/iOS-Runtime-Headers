// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETLIFECYCLESEQUENCE_H
#define WGWIDGETLIFECYCLESEQUENCE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "WGWidgetLifeCycleSequence.h"

@interface WGWidgetLifeCycleSequence : NSObject

@property (nonatomic, setter=_setCurrentState:) NSInteger currentState; // ivar: _currentState
@property (retain, nonatomic, getter=_previousSequence, setter=_setPreviousSequence:) WGWidgetLifeCycleSequence *previousSequence; // ivar: _previousSequence
@property (readonly, copy, nonatomic) NSString *sequenceIdentifier; // ivar: _sequenceIdentifier


-(BOOL)_isValidTransitionToState:(NSInteger)arg0 ;
-(BOOL)isCurrentState:(NSInteger)arg0 ;
-(BOOL)isCurrentStateAtLeast:(NSInteger)arg0 ;
-(BOOL)isCurrentStateAtMost:(NSInteger)arg0 ;
-(BOOL)isCurrentStateNotYet:(NSInteger)arg0 ;
-(id)beginTransitionToState:(SEL)arg0 error:(NSInteger)arg1 ;
-(id)description;
-(id)initWithSequenceIdentifier:(id)arg0 ;
-(id)sequenceWithIdentifier:(id)arg0 ;
-(id)transitionToState:(NSInteger)arg0 ;


@end


#endif