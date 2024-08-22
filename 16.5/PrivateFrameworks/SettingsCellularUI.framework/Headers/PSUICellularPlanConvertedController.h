// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSUICELLULARPLANCONVERTEDCONTROLLER_H
#define PSUICELLULARPLANCONVERTEDCONTROLLER_H

@class PSListController, CTCellularPlanItem, NSString, PSSpecifier;


#import "PSUICellularPlanUniversalReference.h"

@interface PSUICellularPlanConvertedController : PSListController

@property (retain, nonatomic) CTCellularPlanItem *planItem; // ivar: _planItem
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // ivar: _planReference
@property (retain) NSString *planStatus; // ivar: _planStatus
@property (weak) PSSpecifier *weakReactivateSpecifier; // ivar: _weakReactivateSpecifier
@property (weak) PSSpecifier *weakStatusSpecifier; // ivar: _weakStatusSpecifier


-(id)_labelSpecifier;
-(id)_phoneNumber:(id)arg0 ;
-(id)_phoneNumberSpecifier;
-(id)_planLabel:(id)arg0 ;
-(id)_reactivateSIMSpecifier;
-(id)_removeSIMSpecifier;
-(id)_simTypeSpecifier;
-(id)_status:(id)arg0 ;
-(id)_statusSpecifier;
-(id)_turnOnThisLineSpecifier;
-(id)getLogger;
-(id)specifiers;
-(void)_cellularPlanChanged:(id)arg0 ;
-(void)_maybeAddRemoveCellularPlanSpecifier:(id)arg0 ;
-(void)_updatePlanStatus:(id)arg0 ;
-(void)_updateReactivateSpecifier:(id)arg0 ;
-(void)_updateStatusSpecifier:(id)arg0 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif