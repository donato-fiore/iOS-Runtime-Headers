// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONMANAGEMENTINSPECTOR_H
#define ATXNOTIFICATIONMANAGEMENTINSPECTOR_H


#import <Foundation/Foundation.h>


@interface ATXNotificationManagementInspector : NSObject



-(BOOL)clearAllNotificationData:(*id)arg0 ;
-(id)constructStacksForNotifications:(id)arg0 ;
-(id)constructStacksGroupedByAppForNotifications:(id)arg0 ;
-(id)fetchNotificationsFromBiomeFromStartDate:(id)arg0 endDate:(id)arg1 outError:(*id)arg2 ;
-(id)fetchNotificationsFromCoreDuetFromStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)fetchNotificationsFromDbFromStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)fetchNotificationsFromFileData:(id)arg0 outError:(*id)arg1 ;
-(id)fetchNotificationsFromSource:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 shouldInferMessages:(BOOL)arg3 outError:(*id)arg4 ;
-(id)fetchSerializedAppGroupedNotificationDigestFromSource:(id)arg0 digestTimeString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldInferMessages:(BOOL)arg4 outError:(*id)arg5 ;
-(id)fetchSerializedMissedNotificationRankingFromFileData:(id)arg0 modeString:(id)arg1 outError:(*id)arg2 ;
-(id)fetchSerializedMissedNotificationRankingFromSource:(id)arg0 modeString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldInferMessages:(BOOL)arg4 outError:(*id)arg5 ;
-(id)fetchSerializedNotificationDigestFromFileData:(id)arg0 digestTimeString:(id)arg1 outError:(*id)arg2 ;
-(id)fetchSerializedNotificationDigestFromSource:(id)arg0 digestTimeString:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 shouldInferMessages:(BOOL)arg4 outError:(*id)arg5 ;
-(id)fetchSerializedNotificationsFromSource:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 shouldInferMessages:(BOOL)arg3 outError:(*id)arg4 ;
-(id)logAndCreateErrorForString:(id)arg0 ;


@end


#endif