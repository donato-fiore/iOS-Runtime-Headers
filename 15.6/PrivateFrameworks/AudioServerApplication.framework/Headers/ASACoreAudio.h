// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASACOREAUDIO_H
#define ASACOREAUDIO_H

@class NSMutableArray, NSArray;
@protocol OS_dispatch_source, OS_dispatch_queue;


#import "ASAObject.h"

@interface ASACoreAudio : ASAObject {
    unsigned int _cadPort;
    NSObject<OS_dispatch_source> *_deathSource;
    NSObject<OS_dispatch_queue> *_deathQueue;
    NSMutableArray *_clients;
    NSMutableArray *_plugins;
}


@property (readonly, copy, nonatomic) NSArray *audioDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *audioDevices;
@property (readonly, copy, nonatomic) NSArray *boxObjectIDs;
@property (readonly, copy, nonatomic) NSArray *boxes;
@property (readonly, copy, nonatomic) NSArray *clockDeviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *clockDevices;
@property (readonly, copy, nonatomic) NSArray *deviceObjectIDs;
@property (readonly, copy, nonatomic) NSArray *pluginObjectIDs;
@property (readonly, copy, nonatomic) NSArray *plugins;


+(id)coreAudio;
+(id)sharedCoreAudioObject;
-(id)audioDeviceWithUID:(id)arg0 ;
-(id)boxWithUID:(id)arg0 ;
-(id)clockDeviceWithUID:(id)arg0 ;
-(id)coreAudioClassName;
-(id)defaultInputAudioDevice;
-(id)defaultOutputAudioDevice;
-(id)defaultSystemOutputAudioDevice;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)initWithAudioObjectID:(unsigned int)arg0 ;
-(id)pluginWithBundleID:(id)arg0 ;
-(id)transportManagerWithBundleID:(id)arg0 ;
-(unsigned int)audioDeviceObjectIDWithUID:(id)arg0 ;
-(unsigned int)boxObjectIDWithUID:(id)arg0 ;
-(unsigned int)clockDeviceObjectIDWithUID:(id)arg0 ;
-(unsigned int)defaultInputAudioDeviceObjectID;
-(unsigned int)defaultOutputAudioDeviceObjectID;
-(unsigned int)defaultSystemOutputAudioDeviceObjectID;
-(unsigned int)pluginObjectIDWithBundleID:(id)arg0 ;
-(unsigned int)transportManagerObjectIDWithBundleID:(id)arg0 ;
-(void)_setupDeathSource;
-(void)_teardownDeathSource;
-(void)addClient:(id)arg0 ;
-(void)addPlugin:(id)arg0 ;
-(void)dealloc;
-(void)removeClient:(id)arg0 ;
-(void)removePlugin:(id)arg0 ;


@end


#endif