// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTIMEALLOWANCESVIEWMODEL_H
#define STTIMEALLOWANCESVIEWMODEL_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "STAlwaysAllowList.h"
#import "STDeviceBedtime.h"

@interface STTimeAllowancesViewModel : NSObject

@property (nonatomic) BOOL allAllowancesEnabled; // ivar: _allAllowancesEnabled
@property (copy, nonatomic) NSDictionary *allowancesByIdentifier; // ivar: _allowancesByIdentifier
@property (copy, nonatomic) STAlwaysAllowList *alwaysAllowList; // ivar: _alwaysAllowList
@property (copy, nonatomic) STDeviceBedtime *bedtime; // ivar: _bedtime
@property (copy, nonatomic) NSDictionary *pendingAskForTimeByIdentifier; // ivar: _pendingAskForTimeByIdentifier


-(id)init;


@end


#endif