// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDCORNERDIRECTIONOPTIONS_H
#define PDCORNERDIRECTIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDCornerDirectionOptions : PDTransitionOptions {
    int mDirection;
}




-(int)direction;
-(void)setDirection:(int)arg0 ;


@end


#endif