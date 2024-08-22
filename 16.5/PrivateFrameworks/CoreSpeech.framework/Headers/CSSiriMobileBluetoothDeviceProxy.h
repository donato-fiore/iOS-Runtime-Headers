// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSSIRIMOBILEBLUETOOTHDEVICEPROXY_H
#define CSSIRIMOBILEBLUETOOTHDEVICEPROXY_H

@class NSHashTable, AFBluetoothDeviceInfo, AFBluetoothHeadphoneInEarDetectionState, NSString, NSUUID;
@protocol AFBluetoothDevice, AFInvalidating, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSSiriMobileBluetoothDeviceDataSource.h"

@interface CSSiriMobileBluetoothDeviceProxy : NSObject <AFBluetoothDevice, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    CSSiriMobileBluetoothDeviceDataSource *_dataSource;
    NSHashTable *_observers;
    AFBluetoothDeviceInfo *_deviceInfo;
    AFBluetoothHeadphoneInEarDetectionState *_headphoneInEarDetectionState;
    NSInteger _headphoneListeningMode;
}


@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSUUID *deviceUID; // ivar: _deviceUID
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)deviceInfo;
-(id)identifier;
-(id)initWithAddress:(id)arg0 dataSource:(id)arg1 queue:(id)arg2 ;
-(id)initWithDeviceUID:(id)arg0 dataSource:(id)arg1 queue:(id)arg2 ;
-(void)_accessBTDeviceAndAccessoryManagerUsingBlock:(id)arg0 ;
-(void)_enumerateObserversUsingBlock:(id)arg0 ;
-(void)_fetchDeviceInfoWithCompletion:(id)arg0 ;
-(void)_getDeviceInfo:(id)arg0 ;
-(void)_invalidate;
-(void)_reload:(BOOL)arg0 ;
-(void)_updateDeviceInfo:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)connect:(id)arg0 ;
-(void)dealloc;
-(void)disconnect:(id)arg0 ;
-(void)getDeviceInfo:(id)arg0 ;
-(void)getHeadphoneInEarDetectionState:(id)arg0 ;
-(void)getHeadphoneListeningMode:(id)arg0 ;
-(void)invalidate;
-(void)prewarm;
-(void)reload;
-(void)removeObserver:(id)arg0 ;
-(void)setHeadphoneListeningMode:(NSInteger)arg0 completion:(id)arg1 ;
-(void)updateDeviceInfo:(id)arg0 ;


@end


#endif