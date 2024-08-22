// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSAUDIOINJECTIONDEVICE_H
#define CSAUDIOINJECTIONDEVICE_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>

#import "CSAudioInjectionEngine.h"

@interface CSAudioInjectionDevice : NSObject

@property (readonly, nonatomic) NSString *deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (readonly, nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (readonly, nonatomic) NSUUID *deviceUID; // ivar: _deviceUID
@property (nonatomic) BOOL enableAlwaysOnVoiceTrigger; // ivar: _enableAlwaysOnVoiceTrigger
@property (weak, nonatomic) CSAudioInjectionEngine *injectionEngine; // ivar: _injectionEngine
@property (nonatomic) BOOL isConnected; // ivar: _isConnected
@property (readonly, nonatomic) BOOL isPluginDevice;
@property (readonly, nonatomic) NSString *productIdentifier; // ivar: _productIdentifier


-(BOOL)speakAudio:(id)arg0 ;
// -(BOOL)speakAudio:(id)arg0 withScaleFactor:(float)arg1 outASBD:(struct AudioStreamBasicDescription )arg2 playbackStarted:(id)arg3 completion:(unk)arg4  ;
// -(BOOL)speakAudio:(id)arg0 withScaleFactor:(float)arg1 playbackStarted:(id)arg2 completion:(unk)arg3  ;
-(id)initWithDeviceType:(NSInteger)arg0 deviceName:(id)arg1 deviceID:(id)arg2 productID:(id)arg3 ;


@end


#endif