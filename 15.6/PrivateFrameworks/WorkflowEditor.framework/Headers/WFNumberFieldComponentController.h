// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNUMBERFIELDCOMPONENTCONTROLLER_H
#define WFNUMBERFIELDCOMPONENTCONTROLLER_H



#import "CKStatefulViewComponentController.h"

@interface WFNumberFieldComponentController : CKStatefulViewComponentController



+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)valueChanged;
-(void)valueChangedThrottled;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif