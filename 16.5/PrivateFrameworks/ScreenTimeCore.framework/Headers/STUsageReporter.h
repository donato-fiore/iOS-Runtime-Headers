// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUSAGEREPORTER_H
#define STUSAGEREPORTER_H

@class NSArray, NSDateInterval, NSString, NSFetchedResultsController, NSDate, NSSet, NSNumber;
@protocol NSFetchedResultsControllerDelegate;

#import <Foundation/Foundation.h>


@interface STUsageReporter : NSObject <NSFetchedResultsControllerDelegate>



@property (readonly, copy) NSArray *applicationAndWebUsage;
@property (readonly, copy) NSArray *categoryUsage;
@property (readonly, copy) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSFetchedResultsController *fetchedResultsController; // ivar: _fetchedResultsController
@property (readonly, copy) NSDate *firstPickup;
@property (readonly) NSUInteger hash;
@property BOOL includeTotalUsageDetailItem; // ivar: _includeTotalUsageDetailItem
@property (retain, nonatomic) NSFetchedResultsController *installedAppsController; // ivar: _installedAppsController
@property (copy) NSSet *installedBundleIdentifiers; // ivar: _installedBundleIdentifiers
@property (readonly, copy) NSArray *notifications;
@property (readonly, copy) NSArray *pickups;
@property (readonly) Class superclass;
@property (readonly) NSInteger totalNotifications;
@property (readonly) NSInteger totalPickups;
@property (readonly) CGFloat totalScreenTime;
@property (readonly, copy) NSNumber *userDSID; // ivar: _userDSID


+(id)keyPathsForValuesAffectingNotifications;
-(BOOL)generateReport:(*id)arg0 ;
-(id)_firstPickupFromUsageBlocks:(id)arg0 ;
-(id)_ratiosForCategory:(id)arg0 perCalendarUnit:(NSUInteger)arg1 useTotalScreenTime:(BOOL)arg2 ;
-(id)categoryRatiosPerCalendarUnit:(NSUInteger)arg0 numberOfCategories:(NSUInteger)arg1 ;
-(id)firstPickupOfIntervalWithMostPickups:(*NSUInteger)arg0 perCalendarUnit:(NSUInteger)arg1 ;
-(id)initWithUsage:(id)arg0 dateInterval:(id)arg1 ;
-(id)notificationRatiosForApplication:(id)arg0 perCalendarUnit:(NSUInteger)arg1 ;
-(id)notificationsPerCalendarUnit:(NSUInteger)arg0 ;
-(id)pickupRatiosForApplication:(id)arg0 perCalendarUnit:(NSUInteger)arg1 ;
-(id)pickupsPerCalendarUnit:(NSUInteger)arg0 ;
-(id)ratiosForApplication:(id)arg0 perCalendarUnit:(NSUInteger)arg1 ;
-(id)ratiosForCategory:(id)arg0 perCalendarUnit:(NSUInteger)arg1 ;
-(id)ratiosForWebDomain:(id)arg0 perCalendarUnit:(NSUInteger)arg1 ;
-(id)screenTimeUsagePerCalendarUnit:(NSUInteger)arg0 ;
-(void)_enumerateUsageBlocksWithUnitGranularity:(NSUInteger)arg0 block:(id)arg1 ;
-(void)_updateInstalledBundleIdentifiers;
-(void)controllerDidChangeContent:(id)arg0 ;


@end


#endif