// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TCPROGRESSSTAGE_H
#define TCPROGRESSSTAGE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TCProgressStage.h"
#import "TCProgressContext.h"

@interface TCProgressStage : NSObject {
    CGFloat m_currentPosition;
    CGFloat m_totalSteps;
    CGFloat m_stepsInParent;
    NSString *m_name;
    TCProgressStage *m_parentStage;
    TCProgressContext *m_context;
}




-(CGFloat)currentPosition;
-(id)initBranchWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 name:(id)arg2 inContext:(id)arg3 ;
-(id)initRootStageInContext:(id)arg0 ;
-(id)initWithSteps:(CGFloat)arg0 takingSteps:(CGFloat)arg1 name:(id)arg2 inContext:(id)arg3 ;
-(id)parentStage;
-(void)advanceProgress:(CGFloat)arg0 ;
-(void)dealloc;
-(void)end;
-(void)setProgress:(CGFloat)arg0 ;


@end


#endif