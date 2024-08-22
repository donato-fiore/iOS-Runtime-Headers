// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
    ? visibleEvents;
    ? disposables;
    ? _clockSyncedPlaysPublisher;
    ? _subscriptionPublisher;
}


@property (nonatomic, weak) NSObject<_TtP9SportsKit21SportsManagerDelegate_> *delegate; // ivar: delegate


-(id)init;
-(void)getEventForCanonicalId:(id)arg0 completion:(id)arg1 ;


@end


#endif