// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDORIENTATIONOPTIONS_H
#define PDORIENTATIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDOrientationOptions : PDTransitionOptions {
    int mOrientation;
}




-(int)orientation;
-(void)setOrientation:(int)arg0 ;


@end


#endif