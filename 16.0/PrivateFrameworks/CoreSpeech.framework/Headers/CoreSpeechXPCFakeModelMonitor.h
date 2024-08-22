// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CORESPEECHXPCFAKEMODELMONITOR_H
#define CORESPEECHXPCFAKEMODELMONITOR_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CoreSpeechXPCFakeModelMonitor : NSObject

@property (nonatomic) int fakeAssetRollNotificationRegistrationToken; // ivar: _fakeAssetRollNotificationRegistrationToken
@property (retain) NSString *lastFakeModelUsedHash; // ivar: _lastFakeModelUsedHash
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property BOOL shouldRollFakeModel; // ivar: _shouldRollFakeModel


-(id)init;
-(void)_registerForFakeAssetRollNotification;
-(void)start;
-(void)stop;


@end


#endif