// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUSCROLLGESTURERECOGNITIONRESOLVER_H
#define HUSCROLLGESTURERECOGNITIONRESOLVER_H

@class NSSet, NSMutableSet;

#import <Foundation/Foundation.h>


@interface HUScrollGestureRecognitionResolver : NSObject

@property (nonatomic) CGFloat conflictingGestureActivationDelay; // ivar: _conflictingGestureActivationDelay
@property (readonly, nonatomic) NSSet *conflictingGestureRecognizers;
@property (readonly, nonatomic) NSMutableSet *conflictingGestureStates; // ivar: _conflictingGestureStates
@property (readonly, nonatomic) NSMutableSet *mutablePanGestureReocgnizers; // ivar: _mutablePanGestureReocgnizers
@property (readonly, nonatomic) NSSet *panGestureRecognizers;


-(id)_stateForConflictingGestureRecognizer:(id)arg0 ;
-(id)init;
-(void)_activeTimerDidFireForOtherGesture:(id)arg0 ;
-(void)_cancelConflictingGestures;
-(void)_clearSimultaenouslyRecognizedGestures;
-(void)_handleConflictingGesture:(id)arg0 ;
-(void)_handlePanGesture:(id)arg0 ;
-(void)_removeConflictingGestureState:(id)arg0 ;
-(void)addConflictingGestureRecognizer:(id)arg0 ;
-(void)addPanGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)removeConflictingGestureRecognizer:(id)arg0 ;
-(void)removePanGestureRecognizer:(id)arg0 ;


@end


#endif