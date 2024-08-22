// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMNETWORKAVAILABILITY_H
#define IMNETWORKAVAILABILITY_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IMDispatchTimer.h"

@interface IMNetworkAvailability : NSObject {
    NSString *_guid;
    IMDispatchTimer *_timer;
    CGFloat _timeout;
    CGFloat _wifiTimeout;
    CGFloat _startTime;
    NSUInteger _flags;
    NSUInteger _options;
    id *_completionBlock;
}


@property (nonatomic) *void context; // ivar: _context


-(BOOL)_isNetworkAvailablibityCheckingDone:(BOOL)arg0 wantsWiFi:(BOOL)arg1 wantsCellular:(BOOL)arg2 cellular:(BOOL)arg3 hasCellularDataConnection:(BOOL)arg4 done:(BOOL)arg5 withinTimeWindow:(BOOL)arg6 ;
-(id)initWithFlags:(NSUInteger)arg0 options:(NSUInteger)arg1 timeout:(CGFloat)arg2 wifiTimeout:(CGFloat)arg3 completionBlock:(id)arg4 ;
-(id)initWithFlags:(NSUInteger)arg0 timeout:(CGFloat)arg1 wifiTimeout:(CGFloat)arg2 completionBlock:(id)arg3 ;
-(id)mobileNetworkManager;
-(void)_cancel;
-(void)_setTimer;
-(void)_timerHit:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)start;


@end


#endif