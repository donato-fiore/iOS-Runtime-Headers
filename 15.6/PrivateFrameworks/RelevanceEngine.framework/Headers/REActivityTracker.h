// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REACTIVITYTRACKER_H
#define REACTIVITYTRACKER_H

@class NSCountedSet, NSMapTable, NSSet;
@protocol REActivityTrackerDelegate;

#import <Foundation/Foundation.h>


@interface REActivityTracker : NSObject {
    ? delegateCallbacks;
    NSCountedSet *_activities;
    NSMapTable *_activitiesByObject;
}


@property (readonly, weak, nonatomic) NSObject<REActivityTrackerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSSet *outstandingActivities;


-(BOOL)trackingObject:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(id)outstandingActivitiesForObject:(id)arg0 ;
-(void)beginActivity:(id)arg0 forObject:(id)arg1 ;
-(void)endActivity:(id)arg0 forObject:(id)arg1 ;
-(void)trackObject:(id)arg0 ;
-(void)withdrawObject:(id)arg0 ;


@end


#endif