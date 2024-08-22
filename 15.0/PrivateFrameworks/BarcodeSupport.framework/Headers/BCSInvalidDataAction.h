// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BCSINVALIDDATAACTION_H
#define BCSINVALIDDATAACTION_H



#import "BCSAction.h"

@interface BCSInvalidDataAction : BCSAction



-(BOOL)isInvalidDataAction;
-(id)actionPickerItems;
-(id)initWithData:(id)arg0 codePayload:(id)arg1 ;
-(id)localizedDefaultActionDescription;
-(void)performDefaultAction;


@end


#endif