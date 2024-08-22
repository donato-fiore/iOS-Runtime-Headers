// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUSHBUTTONMONITOR_H
#define PUSHBUTTONMONITOR_H

@class SBSBiometricsService, SBSHardwareButtonService, NSString;
@protocol SBSHardwareButtonEventConsuming, BSInvalidatable, PushButtonDelegate;

#import <Foundation/Foundation.h>


@interface PushButtonMonitor : NSObject <SBSHardwareButtonEventConsuming>

 {
    NSUInteger _lastTap;
    NSUInteger _lastDoubleTap;
    id *_axDoubleTapExpirationBlock;
    SBSBiometricsService *_sbBiometricsService;
    SBSHardwareButtonService *_sbHardwareButtonService;
    id<BSInvalidatable> *_powerButtonObserver;
}


@property (nonatomic) BOOL axDoubleTapDetected; // ivar: _axDoubleTapDetected
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PushButtonDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doubleTapDetected; // ivar: _doubleTapDetected
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)startWithError:(*id)arg0 ;
-(CGFloat)_defaultExpirationTimeout;
-(id)_init;
-(id)init;
-(id)prearmAssertion;
-(void)_consumeDoubleTapWithReason:(id)arg0 includingAX:(BOOL)arg1 ;
-(void)_expireDoubleTap:(NSUInteger)arg0 ;
-(void)_restartWithReactivationDelay:(CGFloat)arg0 ;
-(void)_scheduleDoubleTapExpiration;
-(void)adviseDoubleTap;
-(void)axApplePayConfirmation;
-(void)consumeDoublePressUpForButtonKind:(NSInteger)arg0 ;
-(void)consumeDoubleTapWithReason:(id)arg0 ;
-(void)dealloc;
-(void)doubleTappedAt:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif