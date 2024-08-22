// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKDESTINATIONQUERYCONTROLLER_H
#define CNKDESTINATIONQUERYCONTROLLER_H

@protocol CNKDestinationQueryControllerDelegate;

#import <Foundation/Foundation.h>


@interface CNKDestinationQueryController : NSObject {
    ? scheduleIDSQuerySubject;
    ? scheduleIDSQueryGroupSubject;
    ? scheduleIDSCachedQuerySubject;
    ? scheduleIDSQueryDebouncer;
    ? scheduleIDSQueryGroupDebouncer;
    ? scheduleIDSCachedQueryDebouncer;
    ? scheduleNotificationSubject;
    ? scheduleNotificationDebouncer;
    ? idsDestinations;
    ? idsGroupDestinations;
    ? idsLookupManager;
}


@property (nonatomic, weak) NSObject<CNKDestinationQueryControllerDelegate> *delegate; // ivar: delegate


-(id)init;


@end


#endif