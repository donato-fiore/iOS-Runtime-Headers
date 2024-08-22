// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTRIGGERACTIONFLOW_H
#define HUTRIGGERACTIONFLOW_H


#import <Foundation/Foundation.h>


@interface HUTriggerActionFlow : NSObject

@property (readonly, nonatomic) NSUInteger flowState; // ivar: _flowState
@property (readonly, nonatomic) BOOL hasChangedState; // ivar: _hasChangedState
@property (readonly, nonatomic) BOOL isFinished;
@property (readonly, nonatomic) BOOL isLastState;
@property (readonly, nonatomic) BOOL isSingleFlow;
@property (readonly, nonatomic) BOOL isStandalone;


+(id)selectFlowForState:(NSUInteger)arg0 ;
-(NSUInteger)_nextState;
-(id)getNextState;
-(id)initWithEditorMode:(NSUInteger)arg0 ;
-(id)initWithFlowState:(NSUInteger)arg0 ;
-(id)initWithFlowState:(NSUInteger)arg0 hasChangedState:(BOOL)arg1 ;


@end


#endif