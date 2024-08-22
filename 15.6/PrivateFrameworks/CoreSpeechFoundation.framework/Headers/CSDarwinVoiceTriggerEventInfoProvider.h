// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSDARWINVOICETRIGGEREVENTINFOPROVIDER_H
#define CSDARWINVOICETRIGGEREVENTINFOPROVIDER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSDarwinVoiceTriggerEventInfoProvider : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableDictionary *triggerInfos; // ivar: _triggerInfos


+(id)sharedInstance;
+(id)voiceTriggerEventInfoWithAdjustedMachTime:(id)arg0 deviceUUID:(id)arg1 anchorHostMachTime:(NSUInteger)arg2 anchorDarwinMachTime:(NSUInteger)arg3 ;
-(id)getMachTimeAdjustedVoiceTriggerEventInfoForDeviceUUID:(id)arg0 ;
-(id)init;
-(void)setRawVoiceTriggerEventInfo:(id)arg0 fromDeviceUUID:(id)arg1 anchorHostMachTime:(NSUInteger)arg2 anchorDarwinMachTime:(NSUInteger)arg3 ;


@end


#endif