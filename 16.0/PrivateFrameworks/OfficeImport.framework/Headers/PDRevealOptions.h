// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDREVEALOPTIONS_H
#define PDREVEALOPTIONS_H



#import "PDEightDirectionOptions.h"

@interface PDRevealOptions : PDEightDirectionOptions {
    BOOL mIsThroughBlack;
}




-(BOOL)isThroughBlack;
-(void)setIsThroughBlack:(BOOL)arg0 ;


@end


#endif