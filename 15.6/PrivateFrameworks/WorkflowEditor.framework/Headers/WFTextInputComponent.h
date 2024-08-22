// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTEXTINPUTCOMPONENT_H
#define WFTEXTINPUTCOMPONENT_H



#import "CKStatefulViewComponent.h"

@interface WFTextInputComponent : CKStatefulViewComponent

@property (readonly, nonatomic) WFTextInputAttributes attributes; // ivar: _attributes
@property (readonly, nonatomic) CKTypedComponentAction<> beginAction; // ivar: _beginAction
@property (readonly, nonatomic) CKTypedComponentAction<> doneAction; // ivar: _doneAction
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock


// +(id)newWithAttributes:(struct WFTextInputAttributes *)arg0 updateBlock:(id)arg1 beginAction:(unk)arg2 doneAction:(struct CKTypedComponentAction<> )arg3 size:(struct CKTypedComponentAction<> )arg4  ;


@end


#endif