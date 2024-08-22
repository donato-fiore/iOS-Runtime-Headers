// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCPROGRESSCONTEXT_H
#define TCPROGRESSCONTEXT_H

@class NSDate, NSMutableArray;

#import <Foundation/Foundation.h>

#import "OITSUProgressContext.h"
#import "TCProgressStage.h"

@interface TCProgressContext : NSObject {
    OITSUProgressContext *m_parentProgressContext;
    TCProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}




+(CGFloat)currentPosition;
+(id)contextForCurrentThread;
+(id)createBranchWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 name:(id)arg2 ;
+(id)stageForCurrentThread;
+(void)addProgressObserver:(id)arg0 selector:(SEL)arg1 ;
+(void)advanceProgress:(CGFloat)arg0 ;
+(void)advanceProgressInContext:(id)arg0 progress:(CGFloat)arg1 ;
+(void)createContextForCurrentThreadWithParentContext:(id)arg0 ;
+(void)createStageWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 ;
+(void)createStageWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 name:(id)arg2 ;
+(void)endBranch:(id)arg0 ;
+(void)endStage;
+(void)popBranch;
+(void)pushBranch:(id)arg0 ;
+(void)removeContextForCurrentThread;
+(void)removeProgressObserver:(id)arg0 ;
+(void)setMessage:(id)arg0 ;
+(void)setProgress:(CGFloat)arg0 ;
-(id)currentStage;
-(id)initWithParentContext:(id)arg0 ;
-(id)rootStage;
-(void)dealloc;
-(void)reportProgress:(CGFloat)arg0 ;


@end


#endif