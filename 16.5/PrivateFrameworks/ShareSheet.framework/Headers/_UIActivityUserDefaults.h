// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYUSERDEFAULTS_H
#define _UIACTIVITYUSERDEFAULTS_H

@class NSString, NSUserDefaults;

#import <Foundation/Foundation.h>


@interface _UIActivityUserDefaults : NSObject

@property (copy, nonatomic) NSString *activityDefaultsKey; // ivar: _activityDefaultsKey
@property (retain, nonatomic) NSUserDefaults *underlyingUserDefaults; // ivar: _underlyingUserDefaults


+(id)builtinActivityOrder;
+(id)updatedActivityIdentifiersUserOrderWithPreviousOrder:(id)arg0 someSortedActivityIdentifiers:(id)arg1 ;
+(void)_migrateUserActivityOrderforKey:(id)arg0 userDefaults:(id)arg1 defaultOrder:(id)arg2 ;
+(void)migrateUserActivityOrderIfNecessary;
-(BOOL)activityIsHidden:(id)arg0 ;
-(BOOL)canHideActivity:(id)arg0 ;
-(BOOL)hasUserEditedActivityOrder;
-(id)activitiesBySortingActivities:(id)arg0 byIdentifierWithDefaultActivityIdentifierOrdering:(id)arg1 ;
-(id)activitiesOrderedByUserActivityOrderForActivities:(id)arg0 ;
-(id)activityIdentifiersInUserOrder;
-(id)applicationExtensionForActivity:(id)arg0 ;
-(id)identifierForActivity:(id)arg0 ;
-(id)initWithUnderlyingUserDefaults:(id)arg0 activityDefaultsKey:(id)arg1 ;
-(id)migrateSortOrderIfNeededForBuiltInActivityType:(id)arg0 activityIdentifierOrdering:(id)arg1 ;
-(id)mutableActivityIdentifiersArrayForActivitiesArray:(id)arg0 ;
-(void)_userEditedActivityDefaults;
-(void)postActivityUserDefaultsDidChangeNotification;
-(void)removeActivityTypeFromDefaults:(id)arg0 ;
-(void)setActivity:(id)arg0 asHidden:(BOOL)arg1 ;
-(void)setActivityIdentifiersInUserOrder:(id)arg0 ;
-(void)updateUserActivityOrderWithOrderedPartialActivities:(id)arg0 ;


@end


#endif