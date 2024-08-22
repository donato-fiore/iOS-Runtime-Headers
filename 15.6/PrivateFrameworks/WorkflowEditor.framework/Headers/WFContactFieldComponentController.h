// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCONTACTFIELDCOMPONENTCONTROLLER_H
#define WFCONTACTFIELDCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFContactFieldDelegate;


#import "CKStatefulViewComponentController.h"

@interface WFContactFieldComponentController : CKStatefulViewComponentController <WFContactFieldDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMounted) BOOL mounted; // ivar: _mounted
@property (readonly) Class superclass;


+(id)newStatefulView:(id)arg0 ;
+(void)configureStatefulView:(id)arg0 forComponent:(id)arg1 ;
-(id)viewControllerContainingContactField:(id)arg0 ;
-(void)didAcquireStatefulView:(id)arg0 ;
-(void)didMount;
-(void)willRelinquishStatefulView:(id)arg0 ;
-(void)willUnmount;


@end


#endif