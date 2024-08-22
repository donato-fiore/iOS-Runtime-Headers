// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTRANSITBALANCEMODEL_H
#define PKTRANSITBALANCEMODEL_H

@class NSDictionary, NSArray, NSMutableDictionary, NSMutableArray, NSString;

#import <Foundation/Foundation.h>

#import "PKTransitPassProperties.h"
#import "PKPaymentPass.h"

@interface PKTransitBalanceModel : NSObject {
    NSDictionary *_balancesByID;
    PKTransitPassProperties *_transitProperties;
    PKPaymentPass *_pass;
    NSArray *_dynamicPlans;
    NSMutableDictionary *_dynamicPlansById;
}


@property (retain, nonatomic) NSMutableArray *balanceFields; // ivar: _balanceFields
@property (readonly, nonatomic) NSDictionary *balancesAndCountPlansByID;
@property (readonly, nonatomic) NSArray *displayableBalances; // ivar: _displayableBalances
@property (readonly, nonatomic) NSArray *displayableCommutePlanBalances; // ivar: _displayableCommutePlanBalances
@property (readonly, nonatomic) NSArray *displayableCommutePlans; // ivar: _displayableCommutePlans
@property (readonly, nonatomic) NSArray *displayableCurrencyBalances; // ivar: _displayableCurrencyBalances
@property (readonly, nonatomic) NSString *displayableListOfBalances;
@property (readonly, nonatomic) NSArray *displayablePointsBalances; // ivar: _displayablePointsBalances
@property (readonly, nonatomic) BOOL hasBalanceContent;
@property (readonly, nonatomic) BOOL hasCommutePlanContent;
@property (readonly, nonatomic) BOOL hasCurrencyBalance;
@property (readonly, nonatomic) BOOL hasPointsBalance;
@property (readonly, nonatomic) BOOL hasPositiveBalance;
@property (readonly, nonatomic) NSString *primaryDisplayableBalance;
@property (readonly, nonatomic) NSArray *transitCommutePlans; // ivar: _transitCommutePlans


-(BOOL)isEqual:(id)arg0 ;
-(id)balanceForIdentifiers:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filteredActionsForDisplayableEntities;
-(id)initWithPass:(id)arg0 ;
-(void)_updateBalancesAndPlans;
-(void)applyStoredValueBalancesFromProperties:(id)arg0 ;
-(void)setDynamicBalances:(id)arg0 ;
-(void)setDynamicBalancesByID:(id)arg0 ;
-(void)setTransitProperties:(id)arg0 ;
-(void)setTransitProperties:(id)arg0 andApplyStoredValueBalances:(BOOL)arg1 ;
-(void)updateWithDynamicCommutePlans:(id)arg0 ;


@end


#endif