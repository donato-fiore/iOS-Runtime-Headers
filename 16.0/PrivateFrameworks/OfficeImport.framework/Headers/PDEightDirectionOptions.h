// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDEIGHTDIRECTIONOPTIONS_H
#define PDEIGHTDIRECTIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDEightDirectionOptions : PDTransitionOptions {
    int mDirection;
}




-(int)direction;
-(void)setDirection:(int)arg0 ;


@end


#endif