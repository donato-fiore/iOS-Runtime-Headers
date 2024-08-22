// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDTIMENODEUNION_H
#define PDTIMENODEUNION_H


#import <Foundation/Foundation.h>

#import "PDAnimateTimeBehavior.h"
#import "PDAnimateEffectBehavior.h"
#import "PDAnimateMotionBehavior.h"
#import "PDAnimateRotateBehavior.h"
#import "PDAnimateScaleBehavior.h"
#import "PDAnimateColorBehavior.h"
#import "PDAudioNode.h"
#import "PDVideoNode.h"
#import "PDParallelTimeNode.h"
#import "PDSequentialTimeNode.h"
#import "PDSetBehavior.h"
#import "PDCmdBehavior.h"

@interface PDTimeNodeUnion : NSObject {
    PDAnimateTimeBehavior *mTimeBehavior;
    PDAnimateEffectBehavior *mEffectBehavior;
    PDAnimateMotionBehavior *mMotionBehavior;
    PDAnimateRotateBehavior *mRotateBehavior;
    PDAnimateScaleBehavior *mScaleBehavior;
    PDAnimateColorBehavior *mColorBehavior;
    PDAudioNode *mAudio;
    PDVideoNode *mVideo;
    PDParallelTimeNode *mParallelTimeNodeGroup;
    PDSequentialTimeNode *mSequentialTimeNodeGroup;
    PDSetBehavior *mSetBehavior;
    PDCmdBehavior *mCmdBehavior;
}




-(id)audio;
-(id)behavior;
-(id)cmdBehavior;
-(id)colorBehavior;
-(id)commonBehavior;
-(id)description;
-(id)effectBehavior;
-(id)init;
-(id)motionBehavior;
-(id)parallel;
-(id)rotateBehavior;
-(id)scaleBehavior;
-(id)sequential;
-(id)timeBehavior;
-(id)video;
-(void)setAudio:(id)arg0 ;
-(void)setBehavior:(id)arg0 ;
-(void)setCmdBehavior:(id)arg0 ;
-(void)setColorBehavior:(id)arg0 ;
-(void)setEffectBehavior:(id)arg0 ;
-(void)setMotionBehavior:(id)arg0 ;
-(void)setParallel:(id)arg0 ;
-(void)setRotateBehavior:(id)arg0 ;
-(void)setScaleBehavior:(id)arg0 ;
-(void)setSequential:(id)arg0 ;
-(void)setTimeBehavior:(id)arg0 ;
-(void)setVideo:(id)arg0 ;


@end


#endif