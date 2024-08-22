// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICARRIERITEMGROUP_H
#define PSUICARRIERITEMGROUP_H

@class CTCellularPlanManager, TSSIMSetupFlow, NSString, PSSpecifier, PSListController;
@protocol TSSIMSetupDelegate, PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICellularPlanManagerCache.h"
#import "PSUIAddCellularPlanSpecifier.h"

@interface PSUICarrierItemGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup>

 {
    PSUICellularPlanManagerCache *_cellularPlanManagerCache;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierEmbedded;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierStandard;
    TSSIMSetupFlow *_flow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


-(BOOL)hasCarrierItems;
-(id)addCellularPlanSpecifier;
-(id)getLogger;
-(id)init;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 planManager:(id)arg2 ctPlanManager:(id)arg3 ;
-(id)specifiers;
-(id)specifiersForCarrierItems;
-(void)_addLocationFooterIfNecessary;
-(void)_handleAddCarrierItem:(id)arg0 specifier:(id)arg1 ;
-(void)carrierItemPressed:(id)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;
-(void)turnOnLocationServicesPressed:(id)arg0 ;


@end


#endif