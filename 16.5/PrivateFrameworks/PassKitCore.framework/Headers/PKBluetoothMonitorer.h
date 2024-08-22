// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKBLUETOOTHMONITORER_H
#define PKBLUETOOTHMONITORER_H

@class CBCentralManager, NSString;
@protocol CBCentralManagerDelegate, PKBluetoothMonitorerDelegate;

#import <Foundation/Foundation.h>


@interface PKBluetoothMonitorer : NSObject <CBCentralManagerDelegate>

 {
    CBCentralManager *_bluetoothManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKBluetoothMonitorerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


-(id)initWithManagerOptions:(id)arg0 ;
-(void)centralManagerDidUpdateState:(id)arg0 ;


@end


#endif