// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCLOCKINTERFACE_H
#define TSCLOCKINTERFACE_H

@class NSString;
@protocol TSClockClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TSClock.h"

@interface TSClockInterface : NSObject <TSClockClient>

 {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    *unk _lockStateCallback;
    *void _lockStateRefcon;
    *unk _masterChangeCallback;
    *void _masterChangeRefcon;
    *unk _timeSyncTimeChangeCallback;
    *void _timeSyncTimeChangeRefcon;
    *unk _gptpGrandmasterCallback;
    *void _gptpGrandmasterRefcon;
    *unk _gptpGrandmasterPortCallback;
    *void _gptpGrandmasterPortRefcon;
    *unk _gptpLocalPortCallback;
    *void _gptpLocalPortRefcon;
}


@property (retain, nonatomic) TSClock *clock; // ivar: _clock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithClockIdentifier:(NSUInteger)arg0 ;
-(void)didChangeClockMasterForClock:(id)arg0 ;
-(void)didChangeLocalPortWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 forClock:(id)arg2 ;
-(void)didChangeLockStateTo:(int)arg0 forClock:(id)arg1 ;
-(void)didEndClockGrandmasterChangeForClock:(id)arg0 ;
-(void)didEndClockGrandmasterChangeWithGrandmasterID:(NSUInteger)arg0 localPort:(unsigned short)arg1 forClock:(id)arg2 ;
-(void)setLockStateNotificationCallback:(*unk)arg0 refcon:(*void)arg1 ;
-(void)setMasterChangeNotificationCallback:(*unk)arg0 refcon:(*void)arg1 ;
-(void)setTimeSyncTimeChangeNotificationCallback:(*unk)arg0 refcon:(*void)arg1 ;
-(void)setgPTPGrandmasterIDAndPortNotificationCallback:(*unk)arg0 refcon:(*void)arg1 ;
-(void)setgPTPGrandmasterNotificationCallback:(*unk)arg0 refcon:(*void)arg1 ;
-(void)setgPTPLocalPortNotificationCallback:(*unk)arg0 refcon:(*void)arg1 ;


@end


#endif