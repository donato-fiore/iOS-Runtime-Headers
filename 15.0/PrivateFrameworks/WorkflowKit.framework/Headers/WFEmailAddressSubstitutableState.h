// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFEMAILADDRESSSUBSTITUTABLESTATE_H
#define WFEMAILADDRESSSUBSTITUTABLESTATE_H



#import "WFContactHandleSubstitutableState.h"

@interface WFEmailAddressSubstitutableState : WFContactHandleSubstitutableState



-(BOOL)reinterpretsStringsAsContactHandlesFromVariable:(BOOL)arg0 ;
-(id)stringInterpretedAsContactHandle:(id)arg0 allowsCustomHandles:(BOOL)arg1 ;
-(id)valueItemClasses;


@end


#endif