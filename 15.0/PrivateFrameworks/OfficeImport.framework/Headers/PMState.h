// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMSTATE_H
#define PMSTATE_H



#import "CMState.h"
#import "CMOutlineState.h"
#import "OADTablePartStyle.h"

@interface PMState : CMState {
    CMOutlineState *mListState;
    OADTablePartStyle *mCurrentRowStyle;
}




-(id)currentRowStyle;
-(id)init;
-(id)listState;
-(void)setCurrentRowStyle:(id)arg0 ;


@end


#endif