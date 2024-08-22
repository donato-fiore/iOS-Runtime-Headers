// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CBADAPTATIONCLIENT_H
#define CBADAPTATIONCLIENT_H

@protocol OS_dispatch_queue, OS_os_log;

#import <Foundation/Foundation.h>

#import "BrightnessSystemClient.h"

@interface CBAdaptationClient : NSObject {
    BrightnessSystemClient *bsc;
    BOOL ownsClient;
    int _mode;
    BOOL _modeSet;
    id *_notificationBlock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSObject<OS_os_log> *_logHandle;
}


@property BOOL supported; // ivar: _supported


+(BOOL)supportsAdaptation;
-(BOOL)animateFromWeakestAdaptationModeInArray:(*int)arg0 withLength:(int)arg1 toWeakestInArray:(*int)arg2 withLength:(int)arg3 withProgress:(float)arg4 andPeriod:(float)arg5 ;
-(BOOL)available;
-(BOOL)getEnabled;
-(BOOL)getStrengths:(*float)arg0 nStrengths:(int)arg1 ;
-(BOOL)overrideStrengths:(*float)arg0 forModes:(*int)arg1 nModes:(int)arg2 ;
// -(BOOL)registerNotificationCallbackBlock:(id)arg0 withQueue:(unk)arg1  ;
-(BOOL)registerNotificationForType:(NSUInteger)arg0 ;
-(BOOL)setAdaptationMode:(int)arg0 withPeriod:(float)arg1 ;
-(BOOL)setEnabled:(BOOL)arg0 ;
-(BOOL)setWeakestAdaptationModeFromArray:(*int)arg0 withLength:(int)arg1 andPeriod:(float)arg2 ;
-(id)init;
-(id)initWithClientObj:(id)arg0 ;
-(int)getAdaptationMode;
-(void)dealloc;
-(void)handleBrightnessSystemNotificationForKey:(id)arg0 withValue:(id)arg1 ;
-(void)unregisterNotificationCallbackBlock;
-(void)unregisterNotificationForType:(NSUInteger)arg0 ;


@end


#endif