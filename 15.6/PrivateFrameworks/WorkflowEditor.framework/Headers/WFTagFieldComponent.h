// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTAGFIELDCOMPONENT_H
#define WFTAGFIELDCOMPONENT_H

@protocol WFComponentNavigationContext;


#import "CKStatefulViewComponent.h"

@interface WFTagFieldComponent : CKStatefulViewComponent

@property (readonly, nonatomic) WFTagFieldAttributes attributes; // ivar: _attributes
@property (readonly, weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, nonatomic) id *variableBlock; // ivar: _variableBlock


// +(id)newWithAttributes:(struct WFTagFieldAttributes *)arg0 updateBlock:(id)arg1 variableBlock:(unk)arg2 navigationContext:(id)arg3 size:(unk)arg4  ;


@end


#endif