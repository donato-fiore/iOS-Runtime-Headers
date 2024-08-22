// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDAILYCASHSELECTIONITEM_H
#define PKDAILYCASHSELECTIONITEM_H

@class PKCurrencyAmount, NSString;
@protocol PKIdentifiable, NSCopying;

#import <Foundation/Foundation.h>


@interface PKDailyCashSelectionItem : NSObject <PKIdentifiable>

 {
    NSUInteger _accountState;
}


@property (retain, nonatomic) PKCurrencyAmount *balance; // ivar: _balance
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAccount; // ivar: _hasAccount
@property (nonatomic) BOOL hasRedeemed; // ivar: _hasRedeemed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic) BOOL loading; // ivar: _loading
@property (nonatomic) NSUInteger redemptionType; // ivar: _redemptionType
@property (nonatomic) BOOL selected; // ivar: _selected
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;


@end


#endif