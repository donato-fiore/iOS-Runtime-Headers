// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMMUSICSTATEPROCESSOR_H
#define PMMMUSICSTATEPROCESSOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PMMMusicContainer.h"

@interface PMMMusicStateProcessor : NSObject

@property (nonatomic) BOOL inCar; // ivar: _inCar
@property (retain, nonatomic) PMMMusicContainer *lastPlayed; // ivar: _lastPlayed
@property (retain, nonatomic) PMMMusicContainer *lastPlayedInCar; // ivar: _lastPlayedInCar
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)shared;
-(id)_init;
-(id)init;
-(void)_handlePause;
-(void)_handlePlay;
-(void)_initNowPlayingPause;
-(void)_initNowPlayingPlay;
-(void)_initStarkConnect;
-(void)_initStarkDisconnect;
-(void)_persist;
-(void)lastPlayedInCarWithHandler:(id)arg0 ;
-(void)lastPlayedWithHandler:(id)arg0 ;


@end


#endif