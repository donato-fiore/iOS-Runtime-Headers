// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIADDONPLANGROUP_H
#define PSUIADDONPLANGROUP_H

@class CTCellularPlanManager, PSSpecifier, NSString, NSMutableArray, Logger, TSSIMSetupFlow, PSListController;
@protocol TSSIMSetupDelegate, PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICellularPlanManagerCache.h"

@interface PSUIAddOnPlanGroup : NSObject <TSSIMSetupDelegate, PSSpecifierGroup>

 {
    PSUICellularPlanManagerCache *_cellularPlanManager;
    CTCellularPlanManager *_ctCellularPlanManager;
    PSSpecifier *_groupSpecifier;
    NSString *_carrierName;
    NSMutableArray *_remotePlansSpecifiers;
    Logger *_logger;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) TSSIMSetupFlow *flow; // ivar: _flow
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (readonly) Class superclass;


-(id)getLogger;
-(id)init;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 planManager:(id)arg2 ctPlanManager:(id)arg3 ;
-(id)specifiers;
-(id)specifiersForRemotePlans;
-(void)remoteItemPressed:(id)arg0 ;
-(void)simSetupFlowCompleted:(NSUInteger)arg0 ;


@end


#endif