// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHXDRAWINGSTATE_H
#define CHXDRAWINGSTATE_H



#import "OAXDrawingState.h"
#import "CHXReadState.h"

@interface CHXDrawingState : OAXDrawingState {
    CHXReadState *mCHXState;
}




-(id)chxState;
-(id)initWithCHXState:(id)arg0 ;


@end


#endif