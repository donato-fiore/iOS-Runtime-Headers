// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPASSASSOCIATEDINFOMODEL_H
#define NPKPASSASSOCIATEDINFOMODEL_H

@class NSArray, NSSet, PKPaymentPass, PKTransitAppletState, PKTransitPassProperties;

#import <Foundation/Foundation.h>


@interface NPKPassAssociatedInfoModel : NSObject

@property (readonly, nonatomic) NSArray *allPassItemsFields;
@property (readonly, nonatomic) NSArray *balanceFields; // ivar: _balanceFields
@property (copy, nonatomic) NSSet *balances; // ivar: _balances
@property (readonly, nonatomic) NSArray *commutePlanFields; // ivar: _commutePlanFields
@property (nonatomic, getter=isCommutePlanValueRequired) BOOL commutePlanValueRequired; // ivar: _commutePlanValueRequired
@property (readonly, nonatomic) PKPaymentPass *pass; // ivar: _pass
@property (nonatomic) NSUInteger rangingSuspensionReason; // ivar: _rangingSuspensionReason
@property (retain, nonatomic) NSArray *tiles; // ivar: _tiles
@property (retain, nonatomic) PKTransitAppletState *transitAppletState; // ivar: _transitAppletState
@property (retain, nonatomic) PKTransitPassProperties *transitPassProperties; // ivar: _transitPassProperties


+(id)accountBalanceForAccount:(id)arg0 ;
-(BOOL)_shouldAddCommutePlan:(id)arg0 action:(id)arg1 withBalancesByID:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_actionWithIdentifier:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_actionWithIdentifiers:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_allPassBalanceFieldsWithBalancesByID:(id)arg0 ;
-(id)_balanceByIDWithBalances:(id)arg0 ;
-(id)_balanceFieldBalance:(id)arg0 fieldIdentifier:(id)arg1 ;
-(id)_balanceFieldWithPassField:(id)arg0 balance:(id)arg1 isPrimaryBalance:(BOOL)arg2 ;
-(id)_balanceFieldsWithBalancesByID:(id)arg0 passFields:(id)arg1 maximumCount:(NSUInteger)arg2 ;
-(id)_balancePassFieldsFromPass:(id)arg0 ;
-(id)_commutePlanFieldsWithBalancesByID:(id)arg0 ;
-(id)_commutePlanWithFelicaPassProperties:(id)arg0 ;
-(id)_formattedValueWithCommutePlan:(id)arg0 balancesByID:(id)arg1 ;
-(id)_identifierFromAction:(id)arg0 type:(NSUInteger)arg1 ;
-(id)_primaryDisplayableBalanceFieldWithBalancesByID:(id)arg0 ;
-(id)description;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 transitProperties:(id)arg1 balances:(id)arg2 commutePlanValueRequired:(BOOL)arg3 ;
-(void)updateItemFields;


@end


#endif