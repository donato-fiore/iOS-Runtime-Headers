// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTMPUTRANSPORTBUTTONEVENTHANDLER_H
#define MTMPUTRANSPORTBUTTONEVENTHANDLER_H

@class UIControl;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface MTMPUTransportButtonEventHandler : NSObject {
    NSObject<OS_dispatch_source> *_longPressTimer;
    BOOL _longPress;
    BOOL _shouldFakeEnabled;
}


@property (weak, nonatomic) UIControl *button; // ivar: _button
@property (nonatomic) CGFloat minimumLongPressDuration; // ivar: _minimumLongPressDuration
@property (nonatomic) BOOL supportsTapWhenDisabled; // ivar: _supportsTapWhenDisabled


-(BOOL)shouldFakeEnabled;
-(BOOL)shouldForceTrackingEnabled;
-(id)init;
-(id)performHitTestingBlock:(id)arg0 ;
-(void)_clearLongPressTimer;
-(void)_longPressTimerAction;
-(void)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;


@end


#endif