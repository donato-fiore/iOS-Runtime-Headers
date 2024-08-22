// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUIPLANPENDINGTRANSFERMENUSGROUP_H
#define PSUIPLANPENDINGTRANSFERMENUSGROUP_H

@class CTCellularPlanManager, NSString, PSSpecifier, PSListController, CTCellularPlanPendingTransfer;
@protocol PSSpecifierGroup;

#import <Foundation/Foundation.h>

#import "PSUICellularPlanManagerCache.h"

@interface PSUIPlanPendingTransferMenusGroup : NSObject <PSSpecifierGroup>



@property (retain, nonatomic) CTCellularPlanManager *cellularPlanManager; // ivar: _cellularPlanManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) PSListController *listController; // ivar: _listController
@property (retain, nonatomic) PSSpecifier *parentSpecifier; // ivar: _parentSpecifier
@property (retain, nonatomic) PSUICellularPlanManagerCache *planManagerCache; // ivar: _planManagerCache
@property (retain, nonatomic) CTCellularPlanPendingTransfer *planPendingTransfer; // ivar: _planPendingTransfer
@property (readonly) Class superclass;


-(id)activatePlanSpecifier;
-(id)cancelConsentRequestSpecifier;
-(id)initWithHostController:(id)arg0 parentSpecifier:(id)arg1 ;
-(id)initWithListController:(id)arg0 groupSpecifier:(id)arg1 ;
-(id)planActivationInfo;
-(id)planPendingTransferLabel:(id)arg0 ;
-(id)planPendingTransferNumber:(id)arg0 ;
-(id)specifiers;
-(void)addSpecifierForHeaderString:(id)arg0 ;
-(void)removePlanPendingTransfer:(id)arg0 ;


@end


#endif