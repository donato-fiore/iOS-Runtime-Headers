// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXMODEAPPUSAGEMANAGER_H
#define ATXMODEAPPUSAGEMANAGER_H


#import <Foundation/Foundation.h>


@interface ATXModeAppUsageManager : NSObject



-(BOOL)_findModeForEventStartDate:(id)arg0 withModeStream:(id)arg1 andCurrentModePointer:(*NSUInteger)arg2 ;
-(id)_allAppsInAppUsageStream:(id)arg0 ;
-(id)_allAppsInNotificationStream:(id)arg0 ;
-(id)_appCategoriesForBundleIDs:(id)arg0 ;
-(id)_appCategoryFromBundleId:(id)arg0 ;
-(id)_appUsageStatsTupleFromModeStream:(id)arg0 andAppUsageStream:(id)arg1 ;
-(id)_appsNamesForBundleIDs:(id)arg0 ;
-(id)_calculateResponseTimeStatistics:(id)arg0 ;
-(id)_deviceUnlockActivityFromModeStream:(id)arg0 andDeviceLockStream:(id)arg1 ;
-(id)_dndUsageFromModeStream:(id)arg0 andDNDUsageStream:(id)arg1 ;
-(id)_formatModeStream:(id)arg0 ;
-(id)_mapNotificationIdToBundleId:(id)arg0 ;
-(id)_modeAppUsageDataFrom:(id)arg0 toDate:(id)arg1 duetHelper:(id)arg2 ;
-(id)_modeStatsTupleFromModeStream:(id)arg0 ;
-(id)_notificationUsageDataFromModeStream:(id)arg0 andNotificationUsageStream:(id)arg1 ;
-(id)_peopleInteractionsFromModeStream:(id)arg0 ;
-(id)_populateInteractionDataByMode:(id)arg0 withModeStream:(id)arg1 andInteractionStream:(id)arg2 andInteractionType:(id)arg3 ;
-(id)_queryCDInteractionsOfMechanismTypes:(id)arg0 withCDInteractionStore:(id)arg1 from:(id)arg2 to:(id)arg3 ;
-(id)appUsageDataByModeFromStartDate:(id)arg0 toEndDate:(id)arg1 duetHelper:(id)arg2 ;


@end


#endif