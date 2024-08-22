// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXOAVSTATE_H
#define EXOAVSTATE_H



#import "OAVReadState.h"
#import "EXReadState.h"

@interface EXOAVState : OAVReadState

@property (readonly, weak) EXReadState *exState; // ivar: mEXReadState


-(id)initWithEXReadState:(id)arg0 packagePart:(id)arg1 ;


@end


#endif