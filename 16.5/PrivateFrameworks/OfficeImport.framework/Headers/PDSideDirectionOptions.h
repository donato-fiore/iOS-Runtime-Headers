// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDSIDEDIRECTIONOPTIONS_H
#define PDSIDEDIRECTIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDSideDirectionOptions : PDTransitionOptions {
    int mDirection;
}




-(int)direction;
-(void)setDirection:(int)arg0 ;


@end


#endif