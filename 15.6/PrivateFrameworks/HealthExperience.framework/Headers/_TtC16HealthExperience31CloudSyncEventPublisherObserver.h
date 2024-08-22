// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC16HEALTHEXPERIENCE31CLOUDSYNCEVENTPUBLISHEROBSERVER_H
#define _TTC16HEALTHEXPERIENCE31CLOUDSYNCEVENTPUBLISHEROBSERVER_H

@protocol HKCloudSyncObserverDelegate;

#import <Foundation/Foundation.h>


@interface _TtC16HealthExperience31CloudSyncEventPublisherObserver : NSObject <HKCloudSyncObserverDelegate>

 {
    ? healthStore;
    ? observer;
    ? publisher;
    ? subject;
}




-(id)init;
-(void)cloudSyncObserver:(id)arg0 syncDidStartWithProgress:(id)arg1 ;
-(void)cloudSyncObserver:(id)arg0 syncFailedWithError:(id)arg1 ;
-(void)cloudSyncObserverStatusUpdated:(id)arg0 status:(id)arg1 ;
-(void)cloudSyncObserverSyncCompleted:(id)arg0 ;


@end


#endif