// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNACCOUNTSANDGROUPSAUTHORIZATIONCONTEXT_H
#define CNACCOUNTSANDGROUPSAUTHORIZATIONCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNAccountsAndGroupsCell.h"
#import "CNContainerPickerItem.h"
#import "CNAccountsAndGroupsItem.h"

@interface CNAccountsAndGroupsAuthorizationContext : NSObject

@property (copy, nonatomic) id *actionCompletionHandler; // ivar: _actionCompletionHandler
@property (retain, nonatomic) CNAccountsAndGroupsCell *cell; // ivar: _cell
@property (retain, nonatomic) NSArray *contactsToAddToDropDestination; // ivar: _contactsToAddToDropDestination
@property (retain, nonatomic) CNContainerPickerItem *containerItem; // ivar: _containerItem
@property (retain, nonatomic) CNAccountsAndGroupsItem *item; // ivar: _item
@property (nonatomic) NSInteger type; // ivar: _type




@end


#endif