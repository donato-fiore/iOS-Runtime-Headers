// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DKNOTABLEUSERDATA_H
#define DKNOTABLEUSERDATA_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "DKNotableUserDataWallet.h"

@interface DKNotableUserData : NSObject

@property (retain, nonatomic) NSArray *accounts; // ivar: _accounts
@property (retain, nonatomic) NSArray *cellularPlans; // ivar: _cellularPlans
@property (nonatomic) NSInteger dataSize; // ivar: _dataSize
@property (nonatomic) BOOL findMyEnabled; // ivar: _findMyEnabled
@property (retain, nonatomic) DKNotableUserDataWallet *walletData; // ivar: _walletData




@end


#endif