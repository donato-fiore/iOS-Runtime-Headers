// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSUICELLULARPLANCONVERTEDCONTROLLER_H
#define PSUICELLULARPLANCONVERTEDCONTROLLER_H

@class PSListController, CTCellularPlanItem;


#import "PSUICellularPlanUniversalReference.h"

@interface PSUICellularPlanConvertedController : PSListController

@property (retain, nonatomic) CTCellularPlanItem *plan; // ivar: _plan
@property (retain, nonatomic) PSUICellularPlanUniversalReference *planReference; // ivar: _planReference


-(id)_carrierNameSpecifier;
-(id)_labelSpecifier;
-(id)_phoneNumber:(id)arg0 ;
-(id)_phoneNumberSpecifier;
-(id)_planLabel:(id)arg0 ;
-(id)_removeSIMSpecifier;
-(id)_turnOnThisLineSpecifier;
-(id)specifiers;
-(void)_maybeAddRemoveCellularPlanSpecifier:(id)arg0 ;


@end


#endif