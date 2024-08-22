// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IOKITHANDLER_H
#define IOKITHANDLER_H

@class NSString;
@protocol ConfigurableObjectProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IOKitHandler : NSObject <ConfigurableObjectProtocol>

 {
    NSUInteger _ioHdl;
    unsigned int _pwrConnect;
    unsigned int _pwrNotifier;
    *IONotificationPort _pwrPort;
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _mostRecentAPWakeMachTime;
    NSUInteger _mostRecentAPSleepMachTime;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mostRecentAPSleepMachTime;
@property (readonly, nonatomic) NSUInteger mostRecentAPWakeMachTime;
@property (readonly) Class superclass;


+(id)configureClass:(id)arg0 ;
+(id)sharedInstance;
-(id)init;
-(int)configureInstance:(id)arg0 ;
-(int)read:(id)arg0 returnedValues:(id)arg1 ;
-(void)dealloc;
-(void)disableIOKitAssertionNotifications;
-(void)disableIOKitPowerNotifications;
-(void)enableIOKitAssertionNotifications;
-(void)enableIOKitPowerNotifications;
-(void)reportIOPMAssertionException:(int)arg0 pid:(int)arg1 ;
-(void)updateMostRecentAPSleepTime;
-(void)updateMostRecentAPWakeTime;


@end


#endif