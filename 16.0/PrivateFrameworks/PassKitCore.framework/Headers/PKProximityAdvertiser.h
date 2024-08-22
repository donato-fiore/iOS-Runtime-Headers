// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPROXIMITYADVERTISER_H
#define PKPROXIMITYADVERTISER_H

@class SFService;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKProximityAdvertiser : NSObject {
    SFService *_nearbyInfoSharingService;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_advertiserQueue;
}


@property (readonly, nonatomic) BOOL isAdvertising; // ivar: _isAdvertising


-(id)_createAdvertisingActivationBlockWithName:(SEL)arg0 duration:(id)arg1 completion:(CGFloat)arg2 ;
-(id)init;
-(void)_queue_endAdvertising;
-(void)dealloc;
-(void)endAdvertising;
-(void)startAdvertisingForDuration:(CGFloat)arg0 completion:(id)arg1 ;


@end


#endif