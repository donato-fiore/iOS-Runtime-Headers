// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPENDINGPASSUPGRADE_H
#define PKPENDINGPASSUPGRADE_H

@class NSMutableArray, NSURL;

#import <Foundation/Foundation.h>

#import "PKPassUpgradeRequest.h"
#import "PKPaymentPass.h"

@interface PKPendingPassUpgrade : NSObject

@property (nonatomic) BOOL appletDidUpgrade; // ivar: _appletDidUpgrade
@property (retain, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (nonatomic) BOOL passUpgradeInProgress; // ivar: _passUpgradeInProgress
@property (nonatomic) BOOL requiresAppletUpgrade; // ivar: _requiresAppletUpgrade
@property (readonly, nonatomic) BOOL upgradeIsComplete;
@property (copy, nonatomic) NSURL *upgradePassURL; // ivar: _upgradePassURL
@property (readonly, nonatomic) PKPassUpgradeRequest *upgradeRequest; // ivar: _upgradeRequest
@property (retain, nonatomic) PKPaymentPass *upgradedPass; // ivar: _upgradedPass
@property (nonatomic) BOOL webRequestFinished; // ivar: _webRequestFinished


-(id)initWithRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif