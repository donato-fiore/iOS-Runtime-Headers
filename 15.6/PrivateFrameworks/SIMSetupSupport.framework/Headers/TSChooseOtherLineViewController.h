// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHOOSEOTHERLINEVIEWCONTROLLER_H
#define TSCHOOSEOTHERLINEVIEWCONTROLLER_H

@class NSString, UIViewController;
@protocol TSSetupFlowItem;


#import "TSOBWelcomeController.h"

@interface TSChooseOtherLineViewController : TSOBWelcomeController <TSSetupFlowItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) UIViewController *hostController; // ivar: _hostController
@property (retain, nonatomic) NSString *iccid; // ivar: _iccid
@property (readonly) Class superclass;


-(id)initWithHostController:(id)arg0 iccid:(id)arg1 ;
-(void)fetchPlanItems:(id)arg0 ;
-(void)maybeShowDisableLineAlert:(id)arg0 ;
-(void)prepare:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;


@end


#endif