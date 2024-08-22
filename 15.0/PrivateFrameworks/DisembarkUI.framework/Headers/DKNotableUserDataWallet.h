// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKNOTABLEUSERDATAWALLET_H
#define DKNOTABLEUSERDATAWALLET_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface DKNotableUserDataWallet : NSObject

@property (nonatomic) BOOL hasCards; // ivar: _hasCards
@property (retain, nonatomic) NSArray *localPaymentCards; // ivar: _localPaymentCards


-(id)initWithCards:(BOOL)arg0 localPaymentCards:(id)arg1 ;


@end


#endif