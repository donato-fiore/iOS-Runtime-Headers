// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUPROGRESSSTAGE_H
#define TSUPROGRESSSTAGE_H


#import <Foundation/Foundation.h>

#import "TSUProgressStage.h"
#import "TSUProgressContext.h"

@interface TSUProgressStage : NSObject {
    CGFloat m_currentPosition;
    CGFloat m_totalSteps;
    CGFloat m_stepsInParent;
    CGFloat m_startInParent;
    CGFloat m_nextSubStageParentSize;
    TSUProgressStage *m_parentStage;
    TSUProgressContext *m_context;
}




-(CGFloat)currentPosition;
-(CGFloat)nextSubStageParentSize;
-(CGFloat)overallProgress;
-(id)description;
-(id)initRootStageInContext:(id)arg0 ;
-(id)initWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 inContext:(id)arg2 ;
-(id)parentStage;
-(void)advanceProgress:(CGFloat)arg0 ;
-(void)dealloc;
-(void)end;
-(void)setNextSubStageParentSize:(CGFloat)arg0 ;
-(void)setProgress:(CGFloat)arg0 ;
-(void)setProgressPercentage:(CGFloat)arg0 ;


@end


#endif