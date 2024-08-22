// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDDATABASEPRUNINGCOORDINATOR_H
#define HDDATABASEPRUNINGCOORDINATOR_H

@class NSString;
@protocol HDDiagnosticObject, HDProfileReadyObserver, HDPeriodicActivityDelegate;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDPeriodicActivity.h"

@interface HDDatabasePruningCoordinator : NSObject <HDDiagnosticObject, HDProfileReadyObserver, HDPeriodicActivityDelegate>

 {
    HDDaemon *_daemon;
    HDPeriodicActivity *_activity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerDisabledPeriodicActivitiesForUnsupportedDaemon:(id)arg0 ;
-(id)diagnosticDescription;
-(id)initWithDaemon:(id)arg0 ;
-(void)dealloc;
-(void)performPeriodicActivity:(id)arg0 completion:(id)arg1 ;
-(void)periodicActivity:(id)arg0 configureXPCActivityCriteria:(id)arg1 ;
-(void)profileDidBecomeReady:(id)arg0 ;


@end


#endif