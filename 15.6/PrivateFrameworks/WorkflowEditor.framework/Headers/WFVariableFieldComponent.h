// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLEFIELDCOMPONENT_H
#define WFVARIABLEFIELDCOMPONENT_H

@class NSString;


#import "CKStatefulViewComponent.h"

@interface WFVariableFieldComponent : CKStatefulViewComponent

@property (readonly, nonatomic) BOOL editable; // ivar: _editable
@property (readonly, copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock


// +(id)newWithText:(id)arg0 editable:(BOOL)arg1 updateBlock:(id)arg2 size:(unk)arg3  ;


@end


#endif