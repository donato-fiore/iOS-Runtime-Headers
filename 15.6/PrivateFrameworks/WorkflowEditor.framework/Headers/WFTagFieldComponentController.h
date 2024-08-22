// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFTAGFIELDCOMPONENTCONTROLLER_H
#define WFTAGFIELDCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFTagFieldDelegate;


#import "CKStatefulViewComponentController.h"

@interface WFTagFieldComponentController : CKStatefulViewComponentController <WFTagFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(id)viewControllerContainingTagField:(id)arg0 ;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)willRelinquishStatefulView:(id)arg0 ;


@end


#endif