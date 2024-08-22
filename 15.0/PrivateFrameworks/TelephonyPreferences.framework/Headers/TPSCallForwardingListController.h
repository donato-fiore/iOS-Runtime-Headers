// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSCALLFORWARDINGLISTCONTROLLER_H
#define TPSCALLFORWARDINGLISTCONTROLLER_H

@class PSSpecifier, NSString;
@protocol TPSCallForwardingControllerDelegate;


#import "TPSListController.h"
#import "TPSCallForwardingController.h"

@interface TPSCallForwardingListController : TPSListController <TPSCallForwardingControllerDelegate>



@property (readonly, nonatomic) TPSCallForwardingController *callForwardingController; // ivar: _callForwardingController
@property (readonly, nonatomic) PSSpecifier *conditionalServiceSwitchSpecifier; // ivar: _conditionalServiceSwitchSpecifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PSSpecifier *mainSwitchSpecifier; // ivar: _mainSwitchSpecifier
@property (readonly) Class superclass;


-(id)conditionalServiceBusyPhoneNumber:(id)arg0 ;
-(id)conditionalServiceSwitchOn:(id)arg0 ;
-(id)conditionalServiceTypeSpecifiers;
-(id)conditionalServiceUnansweredPhoneNumber:(id)arg0 ;
-(id)conditionalServiceUnreachablePhoneNumber:(id)arg0 ;
-(id)mainSwitchOn:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)unconditionalServicePhoneNumber:(id)arg0 ;
-(id)unconditionalServiceTypeSpecifiers;
-(void)callForwardingController:(id)arg0 didChangeServiceType:(NSInteger)arg1 ;
-(void)callForwardingController:(id)arg0 didChangeValue:(id)arg1 error:(id)arg2 ;
-(void)configureCell:(id)arg0 ;
-(void)configureCell:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setConditionalServiceBusyPhoneNumber:(id)arg0 specifier:(id)arg1 ;
-(void)setConditionalServiceSwitchOn:(id)arg0 specifier:(id)arg1 ;
-(void)setConditionalServiceUnansweredPhoneNumber:(id)arg0 specifier:(id)arg1 ;
-(void)setConditionalServiceUnreachablePhoneNumber:(id)arg0 specifier:(id)arg1 ;
-(void)setMainSwitchOn:(id)arg0 specifier:(id)arg1 ;
-(void)setUnconditionalServicePhoneNumber:(id)arg0 specifier:(id)arg1 ;


@end


#endif