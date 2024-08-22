// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC9SPORTSKIT13SPORTSMANAGER_H
#define _TTC9SPORTSKIT13SPORTSMANAGER_H

@protocol _TtP9SportsKit21SportsManagerDelegate_;

#import <Foundation/Foundation.h>


@interface _TtC9SportsKit13SportsManager : NSObject {
    ? dataStore;
    ? playsStore;
    ? xpcConnectionProvider;
    ? appState;
    ? activeSubscriptions;
    ? activitiesMonitor;
    ? disposables;
    ? _clockSyncedPlaysPublisher;
    ? _subscriptionPublisher;
    ? _activitiesPublisher;
}


@property (nonatomic, weak) NSObject<_TtP9SportsKit21SportsManagerDelegate_> *delegate; // ivar: delegate


-(NSInteger)activitiesCount;
-(id)init;
-(void)getEventForCanonicalId:(id)arg0 completion:(id)arg1 ;


@end


#endif