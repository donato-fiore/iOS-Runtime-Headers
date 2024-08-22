// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICARRIERLISTCONTROLLER_H
#define PSUICARRIERLISTCONTROLLER_H

@class PSListController, PSSpecifier, UIBarButtonItem;


#import "PSUIAddOnPlanGroup.h"
#import "PSUICarrierItemGroup.h"

@interface PSUICarrierListController : PSListController {
    PSSpecifier *_carrierItemGroupSpecifier;
    PSSpecifier *_addOnGroupSpecifier;
}


@property (retain, nonatomic) PSUIAddOnPlanGroup *addOnPlanGroup; // ivar: _addOnPlanGroup
@property (retain, nonatomic) UIBarButtonItem *cancelButton; // ivar: _cancelButton
@property (retain, nonatomic) PSUICarrierItemGroup *carrierItemGroup; // ivar: _carrierItemGroup


-(id)addOnGroupSpecifier;
-(id)createAddCellularPlanSpecifierIfNeeded:(id)arg0 ;
-(id)createCarrierItemGroupIfNeeded:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)addCancelButton;
-(void)cellularPlanChanged:(id)arg0 ;
-(void)dismiss;
-(void)loadView;


@end


#endif