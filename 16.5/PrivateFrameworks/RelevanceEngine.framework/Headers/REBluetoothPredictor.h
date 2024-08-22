// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REBLUETOOTHPREDICTOR_H
#define REBLUETOOTHPREDICTOR_H

@class NSDictionary;
@protocol REBluetoothPredictorProperties;


#import "REPredictor.h"
#import "REDuetContextQuery.h"
#import "REUpNextScheduler.h"

@interface REBluetoothPredictor : REPredictor <REBluetoothPredictorProperties>

 {
    REDuetContextQuery *_connectCarQuery;
    REDuetContextQuery *_connectAudioQuery;
    REUpNextScheduler *_bluetoothNotificationScheduler;
}


@property (getter=_isConnctedToCar, setter=_setConnectedToCar:) BOOL _connectedToCar; // ivar: _connectedToCar
@property (getter=_isConnectedToSpeaker, setter=_setConnectedToSpeaker:) BOOL _connectedToSpeaker; // ivar: _connectedToSpeaker
@property (readonly) BOOL connectedToCar;
@property (readonly) BOOL connectedToSpeaker;
@property (retain) NSDictionary *localDevices; // ivar: _localDevices


+(id)bluetoothQueue;
+(id)supportedFeatures;
-(id)_init;
-(id)featureValueForFeature:(id)arg0 element:(id)arg1 engine:(id)arg2 trainingContext:(id)arg3 ;
-(void)_registerForBluetoothNotifications;
-(void)_unregisterForBluetoothNotifications;
-(void)pause;
-(void)resume;
-(void)update;


@end


#endif