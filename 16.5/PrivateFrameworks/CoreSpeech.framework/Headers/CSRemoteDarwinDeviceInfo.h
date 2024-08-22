// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSREMOTEDARWINDEVICEINFO_H
#define CSREMOTEDARWINDEVICEINFO_H

@class NSMutableDictionary, NSMutableOrderedSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSRemoteDarwinDeviceInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *deviceUIDMapTable; // ivar: _deviceUIDMapTable
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableOrderedSet *voiceTriggerEnabledDevices; // ivar: _voiceTriggerEnabledDevices


+(id)sharedInstance;
-(BOOL)_isRemoteDarwinConnectedWithUUID:(id)arg0 ;
-(BOOL)hasDarwinDeviceConnected;
-(BOOL)hasDarwinDeviceHandleVoiceTrigger;
-(BOOL)isPrimaryVoiceTriggerDeviceWithUUID:(id)arg0 ;
-(BOOL)isRemoteDarwinConnectedWithUUID:(id)arg0 ;
-(id)fetchDeviceUUIDStringFromUID:(id)arg0 ;
-(id)fetchRichDeviceUIDStringFromUUID:(id)arg0 ;
-(id)init;
-(void)addDeviceIDPairToMapTable:(id)arg0 withDeviceUID:(id)arg1 ;
-(void)allDeviceDisconnected;
-(void)deviceConnectedWithUUID:(id)arg0 ;
-(void)deviceDisconnectedWithUUID:(id)arg0 ;
-(void)notifyVoiceTriggerDisabledWithDeviceUUID:(id)arg0 ;
-(void)notifyVoiceTriggerEnabledWithDeviceUUID:(id)arg0 ;


@end


#endif