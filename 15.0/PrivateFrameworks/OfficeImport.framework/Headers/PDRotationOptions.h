// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDROTATIONOPTIONS_H
#define PDROTATIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDRotationOptions : PDTransitionOptions {
    int mDirection;
}




-(int)direction;
-(void)setDirection:(int)arg0 ;


@end


#endif