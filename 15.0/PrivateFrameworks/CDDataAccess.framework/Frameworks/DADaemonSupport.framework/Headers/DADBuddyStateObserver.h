// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DADBUDDYSTATEOBSERVER_H
#define DADBUDDYSTATEOBSERVER_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DADBuddyStateObserver : NSObject {
    NSObject<OS_dispatch_source> *_buddyStatePollingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    int _notifyToken;
}


@property (copy, nonatomic) id *buddyDidFinishHandler; // ivar: _buddyDidFinishHandler


+(BOOL)hasPassedBuddy;
+(BOOL)isSetupUser;
-(BOOL)isRunning;
-(id)initWithQueue:(id)arg0 ;
-(void)buddyDidFinish;
-(void)checkBuddyStatus;
-(void)createPeriodicPollingTimer;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)stopWithAssertQueue:(BOOL)arg0 ;


@end


#endif