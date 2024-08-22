// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TDREAMSTROKE_H
#define TDREAMSTROKE_H



#import "TDreamProgramWrapper.h"

@interface TDreamStroke : TDreamProgramWrapper {
    int sigmaUniform;
}


@property (nonatomic) CGFloat sigma; // ivar: _sigma


-(id)init;
-(void)setUniforms;


@end


#endif