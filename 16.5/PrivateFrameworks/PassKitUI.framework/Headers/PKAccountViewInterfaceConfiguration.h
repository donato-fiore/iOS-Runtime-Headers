// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTVIEWINTERFACECONFIGURATION_H
#define PKACCOUNTVIEWINTERFACECONFIGURATION_H

@class PKAccount, NSDateComponents, PKPaymentTransaction;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountViewInterfaceConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) PKAccount *account; // ivar: _account
@property (nonatomic) NSUInteger destination; // ivar: _destination
@property (nonatomic) BOOL isNewAccount; // ivar: _isNewAccount
@property (retain, nonatomic) NSDateComponents *rewardsDateComponents; // ivar: _rewardsDateComponents
@property (retain, nonatomic) PKPaymentTransaction *transaction; // ivar: _transaction
@property (nonatomic) NSUInteger viewStyle; // ivar: _viewStyle


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif