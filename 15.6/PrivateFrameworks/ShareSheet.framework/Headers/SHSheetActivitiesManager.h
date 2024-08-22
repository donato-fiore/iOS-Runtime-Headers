// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETACTIVITIESMANAGER_H
#define SHSHEETACTIVITIESMANAGER_H

@class NSArray, NSString, NSMutableDictionary;
@protocol _UIActivityHelperDelegate, SHSheetActivitiesManagerDelegate;

#import <Foundation/Foundation.h>

#import "_UIActivityHelper.h"
#import "_UIActivityMatchingContext.h"
#import "_UIActivityMatchingResults.h"

@interface SHSheetActivitiesManager : NSObject <_UIActivityHelperDelegate>



@property (retain, nonatomic) _UIActivityHelper *activityHelper; // ivar: _activityHelper
@property (readonly, copy, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (retain, nonatomic) _UIActivityMatchingContext *currentContext; // ivar: _currentContext
@property (retain, nonatomic) _UIActivityMatchingResults *currentResults; // ivar: _currentResults
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetActivitiesManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *internalActivitiesByUUID; // ivar: _internalActivitiesByUUID
@property (retain, nonatomic) NSArray *orderedActivities; // ivar: _orderedActivities
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly) Class superclass;


-(BOOL)activityHelper:(id)arg0 matchingWithContext:(id)arg1 shouldIncludeSystemActivityType:(id)arg2 sessionID:(id)arg3 ;
-(id)activitiesByUUID;
-(id)activityForActivityType:(id)arg0 ;
-(id)activityForIdentifier:(id)arg0 ;
-(id)initWithSessionIdentifier:(id)arg0 applicationActivities:(id)arg1 ;
-(void)_addActivities:(id)arg0 ;
-(void)addActivity:(id)arg0 ;
-(void)preheatActivitiesIfNeeded;
-(void)removeActivity:(id)arg0 ;
-(void)updateActivitiesWithContext:(id)arg0 ;


@end


#endif