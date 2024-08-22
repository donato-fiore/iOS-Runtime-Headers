// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFBLUETOOTHSETTINGSCLIENT_H
#define WFBLUETOOTHSETTINGSCLIENT_H

@class NSString, BluetoothManager, NSMutableDictionary;
@protocol WFBooleanStateSetting;


#import "WFSettingsClient.h"

@interface WFBluetoothSettingsClient : WFSettingsClient <WFBooleanStateSetting>



@property (copy, nonatomic) id *availabilityCompletion; // ivar: _availabilityCompletion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BluetoothManager *manager; // ivar: _manager
@property (readonly, nonatomic) NSMutableDictionary *observeBlocksPerDeviceType; // ivar: _observeBlocksPerDeviceType
@property (readonly) Class superclass;


+(void)createClientWithCompletionHandler:(id)arg0 ;
-(id)initWithBluetoothManager:(id)arg0 ;
-(void)availabilityChanged:(id)arg0 ;
-(void)dealloc;
-(void)devicesChanged:(id)arg0 ;
-(void)getPairedDevicesMatchingType:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)getStateWithCompletionHandler:(id)arg0 ;
-(void)observePairedDevicesMatchingType:(NSUInteger)arg0 update:(id)arg1 ;
-(void)registerForNotifications;
-(void)setState:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)waitForAvailabilityWithCompletionHandler:(id)arg0 ;


@end


#endif