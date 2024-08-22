// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFNUMBERFIELDCOMPONENT_H
#define WFNUMBERFIELDCOMPONENT_H



#import "CKStatefulViewComponent.h"

@interface WFNumberFieldComponent : CKStatefulViewComponent

@property (readonly, nonatomic) WFNumberFieldAttributes attributes; // ivar: _attributes
@property (readonly, nonatomic) CKTypedComponentAction<> doneAction; // ivar: _doneAction
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, nonatomic) id *variableBlock; // ivar: _variableBlock


// +(id)newWithAttributes:(struct WFNumberFieldAttributes *)arg0 updateBlock:(id)arg1 variableBlock:(unk)arg2 doneAction:(id)arg3 size:(unk)arg4  ;


@end


#endif