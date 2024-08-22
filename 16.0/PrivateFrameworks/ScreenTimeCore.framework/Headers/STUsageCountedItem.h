// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGECOUNTEDITEM_H
#define STUSAGECOUNTEDITEM_H

@class NSManagedObject, NSString;


#import "STUsageBlock.h"

@interface STUsageCountedItem : NSManagedObject

@property (readonly, nonatomic) STUsageBlock *block;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSInteger numberOfNotifications;
@property (readonly, nonatomic) NSInteger numberOfPickups;
@property (readonly, nonatomic) BOOL usageTrusted;


+(id)notificationItemsExcludingSystemHiddenApplications:(id)arg0 ;
+(id)pickupItemsExcludingSystemHiddenApplications:(id)arg0 ;


@end


#endif