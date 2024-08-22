// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFVARIABLEFIELDCOMPONENTCONTROLLER_H
#define WFVARIABLEFIELDCOMPONENTCONTROLLER_H



#import "CKStatefulViewComponentController.h"

@interface WFVariableFieldComponentController : CKStatefulViewComponentController



+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(BOOL)variablesDisabled;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)textDidChange;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif