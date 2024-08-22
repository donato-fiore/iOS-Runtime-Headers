// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDINOUTDIRECTIONOPTIONS_H
#define PDINOUTDIRECTIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDInOutDirectionOptions : PDTransitionOptions {
    int mInOut;
}




-(int)inOut;
-(void)setInOut:(int)arg0 ;


@end


#endif