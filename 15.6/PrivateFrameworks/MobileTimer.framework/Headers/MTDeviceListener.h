// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTDEVICELISTENER_H
#define MTDEVICELISTENER_H

@class NSString;
@protocol MTAgentDiagnosticDelegate, MTAgentNotificationListener, NAScheduler;

#import <Foundation/Foundation.h>


@interface MTDeviceListener : NSObject <MTAgentDiagnosticDelegate, MTAgentNotificationListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL internalHasBeenUnlockedSinceBoot; // ivar: _internalHasBeenUnlockedSinceBoot
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<NAScheduler> *workScheduler; // ivar: _workScheduler


+(BOOL)_latestKeyBagValueForHasBeenUnlockedSinceBoot;
+(BOOL)hasBeenUnlockedSinceBoot;
+(id)sharedDeviceListener;
-(BOOL)_hasBeenUnlockedSinceBoot;
-(BOOL)handlesNotification:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)gatherDiagnostics;
-(id)init;
-(void)handleNotification:(id)arg0 ofType:(NSInteger)arg1 completion:(id)arg2 ;
-(void)printDiagnostics;


@end


#endif