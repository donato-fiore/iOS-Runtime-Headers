// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDSPLITDIRECTIONOPTIONS_H
#define PDSPLITDIRECTIONOPTIONS_H



#import "PDTransitionOptions.h"

@interface PDSplitDirectionOptions : PDTransitionOptions {
    int mOrientation;
    int mInOut;
}




-(int)inOut;
-(int)orientation;
-(void)setInOut:(int)arg0 ;
-(void)setOrientation:(int)arg0 ;


@end


#endif