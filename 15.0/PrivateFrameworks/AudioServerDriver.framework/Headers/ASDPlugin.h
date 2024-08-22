// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDPLUGIN_H
#define ASDPLUGIN_H

@class NSMapTable, NSMutableDictionary, NSString;
@protocol ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate, OS_dispatch_queue;


#import "ASDObject.h"

@interface ASDPlugin : ASDObject <ASDDeviceConfigurationChangeDelegate, ASDPropertyChangedDelegate>

 {
    NSMapTable *_objects;
    NSObject<OS_dispatch_queue> *_objectQueue;
    NSMutableDictionary *_boxes;
    NSObject<OS_dispatch_queue> *_boxQueue;
    NSMutableDictionary *_audioDevices;
    NSObject<OS_dispatch_queue> *_audioDeviceQueue;
    NSMutableDictionary *_clockDevices;
    NSObject<OS_dispatch_queue> *_clockDeviceQueue;
    NSString *_manufacturerName;
    unsigned int _nextObjectID;
    *AudioServerPlugInDriverInterface _interfacePtr;
    *AudioServerPlugInHostInterface _pluginHost;
    unsigned int _pluginRefCount;
    NSObject<OS_dispatch_queue> *_powerNotificationQueue;
    *IONotificationPort _powerNotificationPort;
    unsigned int _powerConnection;
    unsigned int _powerNotifier;
}


@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) **AudioServerPlugInDriverInterface driverRef; // ivar: _driverRef
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int transportType; // ivar: _transportType


-(BOOL)deregisterForSystemSleepNotifications;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)registerForSystemSleepNotifications;
-(BOOL)requestConfigurationChangeForDevice:(id)arg0 withBlock:(id)arg1 ;
-(id)arrayForKey:(id)arg0 ;
-(id)audioDevices;
-(id)boxes;
-(id)clockDevices;
-(id)devices;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)driverClassName;
-(id)init;
-(id)objectForObjectID:(unsigned int)arg0 ;
-(id)plugin;
-(unsigned int)addRef;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(unsigned int)objectClass;
-(unsigned int)objectIDForBoxUID:(id)arg0 ;
-(unsigned int)objectIDForClockDeviceUID:(id)arg0 ;
-(unsigned int)objectIDForDeviceUID:(id)arg0 ;
-(unsigned int)removeRef;
-(void)_handlePowerNotificationWithMessageType:(unsigned int)arg0 andArgument:(NSInteger)arg1 ;
-(void)addAudioDevice:(id)arg0 ;
-(void)addAudioDevices:(id)arg0 ;
-(void)addBox:(id)arg0 ;
-(void)addCAObject:(id)arg0 ;
-(void)addClockDevice:(id)arg0 ;
-(void)addClockDevices:(id)arg0 ;
-(void)addDevice:(id)arg0 ;
-(void)addDevices:(id)arg0 ;
-(void)addStreamRealTimeOperations:(id)arg0 ;
-(void)changedProperty:(struct AudioObjectPropertyAddress *)arg0 forObject:(id)arg1 ;
-(void)changedProperty:(struct AudioObjectPropertyAddress *)arg0 forObjectID:(unsigned int)arg1 ;
-(void)dealloc;
-(void)halInitializeWithPluginHost:(struct AudioServerPlugInHostInterface *)arg0 ;
-(void)removeAudioDevice:(id)arg0 ;
-(void)removeAudioDevices:(id)arg0 ;
-(void)removeBox:(id)arg0 ;
-(void)removeCAObject:(id)arg0 ;
-(void)removeClockDevice:(id)arg0 ;
-(void)removeClockDevices:(id)arg0 ;
-(void)removeDevice:(id)arg0 ;
-(void)removeDevices:(id)arg0 ;
-(void)removeStreamRealTimeOperations:(id)arg0 ;
-(void)setArray:(id)arg0 forKey:(id)arg1 ;
-(void)setDictionary:(id)arg0 forKey:(id)arg1 ;
-(void)systemHasPoweredOn;
-(void)systemWillSleep;


@end


#endif