// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPALLOWANCEPOLICYGUARDEDDATA_H
#define PPALLOWANCEPOLICYGUARDEDDATA_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PPAllowancePolicyGuardedData : NSObject {
    NSSet *notificationBlocklist;
    NSSet *notificationAllowlist;
    NSSet *searchableItemBlocklist;
    NSSet *searchableItemAllowlist;
}






@end


#endif