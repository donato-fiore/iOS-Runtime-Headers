// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICARRIERITEMGROUP_H
#define PSUICARRIERITEMGROUP_H

@class CTCellularPlanManager, NSString, PSSpecifier, PSListController;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICellularPlanManagerCache.h"
#import "PSUIAddCellularPlanSpecifier.h"

@interface PSUICarrierItemGroup : NSObject <PSSpecifierGroup>

 {
    PSUICellularPlanManagerCache *_cellularPlanManagerCache;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierEmbedded;
    PSUIAddCellularPlanSpecifier *_addCellularPlanSpecifierStandard;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


-(BOOL)hasCarrierItems;
-(id)getAddCellularPlanSpecifier:(BOOL)arg0 ;
-(id)getLogger;
-(id)init;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 planManager:(id)arg2 ctPlanManager:(id)arg3 ;
-(id)specifiers;
-(id)specifiersForCarrierItems;
-(void)carrierItemPressed:(id)arg0 ;


@end


#endif