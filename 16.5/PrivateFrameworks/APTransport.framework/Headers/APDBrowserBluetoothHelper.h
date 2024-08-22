// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APDBROWSERBLUETOOTHHELPER_H
#define APDBROWSERBLUETOOTHHELPER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APDBrowserBluetoothHelper : NSObject {
    BOOL _isBluetoothPoweredOn;
}


@property (nonatomic) BOOL bluetoothPowerChangedListeningStarted; // ivar: _bluetoothPowerChangedListeningStarted
@property (nonatomic) *void eventHandlerContext; // ivar: _eventHandlerContext
@property (nonatomic) *unk eventHandlerFunc; // ivar: _eventHandlerFunc
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *eventQueue; // ivar: _eventQueue
@property (nonatomic) *OpaqueAPDBluetoothHelper helperRef; // ivar: _helperRef
@property (nonatomic) BOOL isInvalidated; // ivar: _isInvalidated
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)getEventString:(unsigned int)arg0 ;
-(id)init;
-(int)dispatchEvent:(unsigned int)arg0 withEventInfo:(id)arg1 ;
-(int)ensureBluetoothPowerChangedListenerStopped;
-(int)ensureBluetoothPowerEventMonitorStarted;
-(int)getBluetoothPowerOn:(*BOOL)arg0 ;
-(int)invalidate;
-(int)queryBluetoothPower:(*BOOL)arg0 ;
-(int)setBluetoothPower:(BOOL)arg0 ;
-(int)setEventHandler:(*unk)arg0 context:(*void)arg1 helperRef:(struct OpaqueAPDBluetoothHelper *)arg2 ;
-(int)setPowered:(BOOL)arg0 ;
-(int)startListeningToEvent:(unsigned int)arg0 ;
-(int)stopListeningToEvent:(unsigned int)arg0 ;
-(void)dealloc;
-(void)handleBluetoothChangedNotificationInternal:(id)arg0 ;


@end


#endif