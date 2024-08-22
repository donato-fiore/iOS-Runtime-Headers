// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNNOTIFICATIONRECORDSDIFFAPPLIER_H
#define CALNNOTIFICATIONRECORDSDIFFAPPLIER_H


#import <Foundation/Foundation.h>


@interface CALNNotificationRecordsDiffApplier : NSObject



+(void)applyDiff:(id)arg0 toNotificationManager:(id)arg1 ;
+(void)refreshNotificationManager:(id)arg0 withNotificationRecords:(id)arg1 forSourceWithIdentifier:(id)arg2 filteredBySourceClientIDs:(id)arg3 ;


@end


#endif