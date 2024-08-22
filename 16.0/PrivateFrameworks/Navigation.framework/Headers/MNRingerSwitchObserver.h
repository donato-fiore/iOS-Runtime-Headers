// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNRINGERSWITCHOBSERVER_H
#define MNRINGERSWITCHOBSERVER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MNRingerSwitchObserver : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (nonatomic) int ringerStateNotifyToken; // ivar: _ringerStateNotifyToken
@property (nonatomic) BOOL ringerSwitchEnabled; // ivar: _ringerSwitchEnabled


+(id)sharedObserver;
-(BOOL)fetchRingerSwitchEnabled;
-(NSUInteger)stateForNotifyToken:(int)arg0 ;
-(id)init;
-(void)dealloc;
-(void)loadPropertiesOnConcurrentQueue;
-(void)registerForRingerStateNotifications;
-(void)unregisterForRingerStateNotifications;


@end


#endif