// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSVOICETRIGGEREVENTINFOPROVIDER_H
#define CSVOICETRIGGEREVENTINFOPROVIDER_H

@class NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSVoiceTriggerEventInfoProvider : NSObject {
    NSMutableDictionary *_accessoryVoiceTriggerEvents;
    NSDictionary *_builtInVoiceTriggerEvent;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (copy, nonatomic) NSDictionary *rtsTriggerInfo; // ivar: _rtsTriggerInfo
@property (nonatomic) NSUInteger triggerNotifiedMachTime; // ivar: _triggerNotifiedMachTime


+(BOOL)isVoiceTriggerInfoAvailableLocally:(id)arg0 ;
+(id)sharedInstance;
-(BOOL)_isBuiltInDeviceFromDeviceId:(id)arg0 ;
-(id)init;
-(void)fetchVoiceTriggerInfoWithAudioContext:(id)arg0 triggerInfoProviding:(id)arg1 resultVoiceTriggerInfo:(*id)arg2 resultRTSTriggerInfo:(*id)arg3 ;
-(void)setVoiceTriggerInfo:(id)arg0 deviceId:(id)arg1 ;


@end


#endif