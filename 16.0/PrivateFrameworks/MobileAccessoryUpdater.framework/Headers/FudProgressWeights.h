// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FUDPROGRESSWEIGHTS_H
#define FUDPROGRESSWEIGHTS_H


#import <Foundation/Foundation.h>


@interface FudProgressWeights : NSObject

@property float applyWeight; // ivar: applyWeight
@property float finishWeight; // ivar: finishWeight
@property float prepareWeight; // ivar: prepareWeight


-(CGFloat)calculateOverallProgressWithStepProgress:(CGFloat)arg0 step:(int)arg1 ;
-(id)description;
-(id)initWithPrepareWeight:(float)arg0 applyWeight:(float)arg1 finishWeight:(float)arg2 ;


@end


#endif