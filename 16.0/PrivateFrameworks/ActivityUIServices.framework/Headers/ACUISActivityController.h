// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYCONTROLLER_H
#define ACUISACTIVITYCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices18ActivityController.h"

@interface ACUISActivityController : NSObject

@property (retain, nonatomic) _TtC18ActivityUIServices18ActivityController *activityController; // ivar: _activityController
@property (retain, nonatomic) NSMapTable *activityUpdateProviders; // ivar: _activityUpdateProviders
@property (readonly, nonatomic) BOOL isActivityEnabled;


+(id)sharedInstance;
-(BOOL)isActivityActive:(id)arg0 ;
-(id)activityProviderWrapping:(id)arg0 ;
-(id)init;
-(id)observeActivityAlertsWithHandler:(id)arg0 ;
-(id)observeActivityUpdatesWithHandler:(id)arg0 ;
-(void)disableActivitiesForIdentifier:(id)arg0 ;
-(void)endActivity:(id)arg0 ;
-(void)endActivityForProvider:(id)arg0 ;
-(void)setSystemProvidedMetrics:(id)arg0 ;


@end


#endif