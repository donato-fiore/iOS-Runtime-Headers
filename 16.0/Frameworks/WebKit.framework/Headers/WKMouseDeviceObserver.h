// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKMOUSEDEVICEOBSERVER_H
#define WKMOUSEDEVICEOBSERVER_H

@class NSString;
@protocol BKSMousePointerDeviceObserver;

#import <Foundation/Foundation.h>


@interface WKMouseDeviceObserver : NSObject <BKSMousePointerDeviceObserver>

 {
    NSUInteger _startCount;
    RetainPtr<id<BSInvalidatable>> _token;
    OSObjectPtr<NSObject<OS_dispatch_queue> *> _deviceObserverTokenQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMouseDevice; // ivar: _hasMouseDevice
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)mousePointerDevicesDidChange:(id)arg0 ;
-(void)start;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stop;
-(void)stopWithCompletionHandler:(id)arg0 ;


@end


#endif