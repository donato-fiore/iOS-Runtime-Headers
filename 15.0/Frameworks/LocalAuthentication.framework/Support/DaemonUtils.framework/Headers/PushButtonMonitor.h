// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUSHBUTTONMONITOR_H
#define PUSHBUTTONMONITOR_H

@class SBSBiometricsService;
@protocol PushButtonDelegate;

#import <Foundation/Foundation.h>


@interface PushButtonMonitor : NSObject {
    NSUInteger _lastTap;
    NSUInteger _lastDoubleTap;
    id *_axDoubleTapExpirationBlock;
    SBSBiometricsService *_sbBiometricsService;
}


@property (nonatomic) BOOL axDoubleTapDetected; // ivar: _axDoubleTapDetected
@property (weak, nonatomic) NSObject<PushButtonDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL doubleTapDetected; // ivar: _doubleTapDetected


+(id)sharedInstance;
-(BOOL)_startWithError:(*id)arg0 ;
-(CGFloat)_defaultExpirationTimeout;
-(id)init;
-(id)prearmAssertion;
-(void)_consumeDoubleTapWithReason:(id)arg0 includingAX:(BOOL)arg1 ;
-(void)_expireDoubleTap:(NSUInteger)arg0 ;
-(void)_restartWithReactivationDelay:(CGFloat)arg0 ;
-(void)_scheduleDoubleTapExpiration;
-(void)axApplePayConfirmation;
-(void)consumeDoubleTapWithReason:(id)arg0 ;
-(void)dealloc;
-(void)doubleTappedAt:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif