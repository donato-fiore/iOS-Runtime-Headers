// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIDICISESSION_H
#define MIDICISESSION_H

@class NSArray, NSMutableArray, NSNumber;

#import <Foundation/Foundation.h>

#import "MIDICIDeviceInfo.h"

@interface MIDICISession : NSObject {
    unsigned int _client;
    NSArray *_supportedProtocols;
    NSMutableArray *_profileStates;
    unsigned int _ciSessionRef;
    unsigned int _maxSysExSize;
    unsigned char _maxRequests;
}


@property (readonly, nonatomic) MIDICIDeviceIdentification deviceID; // ivar: _deviceID
@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (copy, nonatomic) id *disconnectBlock; // ivar: _sessionDisconnectCallback
@property (readonly, nonatomic) unsigned int entity;
@property (readonly, nonatomic) NSNumber *maxPropertyRequests;
@property (readonly, nonatomic) NSNumber *maxSysExSize;
@property (readonly, nonatomic) unsigned int midiDestination; // ivar: _destination
@property (copy, nonatomic) id *profileChangedCallback; // ivar: _profileChangedCallback
@property (copy, nonatomic) id *profileSpecificDataBlock; // ivar: _profileSpecificDataCallback
@property (copy, nonatomic) id *profileSpecificDataHandler; // ivar: _profileSpecificDataHandler
@property (copy, nonatomic) id *propertyChangedCallback;
@property (copy, nonatomic) id *propertyChangedCallback; // ivar: _propertyChangedCallback
@property (copy, nonatomic) id *propertyResponseCallback;
@property (copy, nonatomic) id *propertyResponseCallback; // ivar: _propertyResponseCallback
@property (readonly, nonatomic) BOOL supportsProfileCapability; // ivar: _supportsProfileCapability
@property (readonly, nonatomic) BOOL supportsPropertyCapability; // ivar: _supportsPropertyCapability


+(id)description;
-(BOOL)disableProfile:(id)arg0 onChannel:(unsigned char)arg1 error:(*id)arg2 ;
-(BOOL)enableProfile:(id)arg0 onChannel:(unsigned char)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)sendProfile:(id)arg0 onChannel:(unsigned char)arg1 profileData:(id)arg2 ;
-(BOOL)toggleProfile:(id)arg0 onChannel:(unsigned char)arg1 enabling:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)updateProfileStateForChannel:(unsigned char)arg0 withProfile:(id)arg1 enabled:(BOOL)arg2 ;
-(id)description;
-(id)init;
// -(id)initWithDiscoveredNode:(id)arg0 dataReadyHandler:(id)arg1 disconnectHandler:(unk)arg2  ;
-(id)initWithMIDIDestination:(unsigned int)arg0 dataReadyHandler:(id)arg1 ;
// -(id)initWithMIDIDestination:(unsigned int)arg0 dataReadyHandler:(id)arg1 disconnectHandler:(unk)arg2 profileSpecificDataHandler:(id)arg3  ;
-(id)initWithMIDIEntity:(unsigned int)arg0 dataReadyHandler:(id)arg1 ;
-(id)profileStateForChannel:(unsigned char)arg0 ;
-(void)addProfileState:(char *)arg0 length:(unsigned int)arg1 channel:(unsigned char)arg2 ;
-(void)dealloc;
-(void)getProperty:(id)arg0 onChannel:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)handleCINotification:(struct MIDINotification *)arg0 withHandler:(id)arg1 ;
-(void)hasProperty:(id)arg0 onChannel:(unsigned char)arg1 responseHandler:(id)arg2 ;
-(void)setProperty:(id)arg0 onChannel:(unsigned char)arg1 responseHandler:(id)arg2 ;


@end


#endif