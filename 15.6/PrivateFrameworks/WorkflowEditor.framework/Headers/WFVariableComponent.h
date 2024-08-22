// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFVARIABLECOMPONENT_H
#define WFVARIABLECOMPONENT_H

@protocol WFVariableDelegate, WFVariableUIDelegate;


#import "CKCompositeComponent.h"
#import "WFCustomButtonComponent.h"

@interface WFVariableComponent : CKCompositeComponent <WFVariableDelegate>



@property (readonly, weak, nonatomic) WFCustomButtonComponent *buttonComponent; // ivar: _buttonComponent
@property (readonly, nonatomic) id *updateBlock; // ivar: _updateBlock
@property (readonly, weak, nonatomic) NSObject<WFVariableUIDelegate> *variableUIDelegate; // ivar: _variableUIDelegate


+(id)newWithVariable:(id)arg0 variableUIDelegate:(id)arg1 resultType:(NSUInteger)arg2 editable:(BOOL)arg3 updateBlock:(id)arg4 ;
-(void)variableDidChange:(id)arg0 ;
-(void)variableDidClear:(id)arg0 ;
-(void)variableDidUpdate:(id)arg0 ;


@end


#endif