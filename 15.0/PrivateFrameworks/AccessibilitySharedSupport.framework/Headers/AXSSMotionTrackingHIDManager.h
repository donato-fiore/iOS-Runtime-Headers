// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSSMOTIONTRACKINGHIDMANAGER_H
#define AXSSMOTIONTRACKINGHIDMANAGER_H

@class NSMutableArray, HIDManager, NSArray;
@protocol OS_dispatch_queue, AXSSMotionTrackingHIDManagerDelegate;

#import <Foundation/Foundation.h>


@interface AXSSMotionTrackingHIDManager : NSObject

@property (retain, nonatomic) NSMutableArray *_devices; // ivar: __devices
@property (retain, nonatomic) HIDManager *_hidManager; // ivar: __hidManager
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_hidManagerDispatchQueue; // ivar: __hidManagerDispatchQueue
@property (nonatomic) BOOL _monitoring; // ivar: __monitoring
@property (weak, nonatomic) NSObject<AXSSMotionTrackingHIDManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSArray *devices;


-(id)init;
-(void)_deviceNotification:(id)arg0 added:(BOOL)arg1 ;
-(void)dealloc;
-(void)startMonitoring;
-(void)stopMonitoring;


@end


#endif