// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUSAGETIMEDITEM_H
#define STUSAGETIMEDITEM_H

@class NSManagedObject, NSString;


#import "STUsageCategory.h"

@interface STUsageTimedItem : NSManagedObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) STUsageCategory *category;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSInteger totalTimeInSeconds;
@property (readonly, nonatomic) BOOL usageTrusted;




@end


#endif