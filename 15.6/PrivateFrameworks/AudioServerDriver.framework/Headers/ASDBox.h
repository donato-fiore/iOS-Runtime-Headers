// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDBOX_H
#define ASDBOX_H

@class NSMutableArray, NSString, NSArray;
@protocol OS_dispatch_queue;


#import "ASDObject.h"

@interface ASDBox : ASDObject {
    NSMutableArray *_audioDevices;
    NSObject<OS_dispatch_queue> *_deviceQueue;
    NSString *_boxName;
    BOOL _acquired;
    int _acquisitionFailure;
    BOOL _identify;
    NSObject<OS_dispatch_queue> *_acquireQueue;
}


@property (nonatomic, getter=isAcquirable) BOOL acquirable; // ivar: _acquirable
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *acquireQueue;
@property (nonatomic, getter=isAcquireable) BOOL acquireable;
@property (nonatomic) BOOL acquired;
@property (nonatomic) int acquisitionFailure;
@property (readonly, retain, nonatomic) NSArray *audioDevices;
@property (copy, nonatomic) NSString *boxName;
@property (readonly, copy, nonatomic) NSString *boxUID; // ivar: _boxUID
@property (nonatomic) BOOL canChangeBoxName; // ivar: _canChangeBoxName
@property (nonatomic) BOOL canSetIdentify; // ivar: _canSetIdentify
@property (readonly, retain, nonatomic) NSArray *clockDevices; // ivar: _clockDevices
@property (readonly, retain, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (nonatomic) BOOL hasAudio; // ivar: _hasAudio
@property (nonatomic) BOOL hasMIDI; // ivar: _hasMIDI
@property (nonatomic) BOOL hasVideo; // ivar: _hasVideo
@property (nonatomic) BOOL identify;
@property (copy, nonatomic) NSString *manufacturerName; // ivar: _manufacturerName
@property (copy, nonatomic) NSString *modelName; // ivar: _modelName
@property (copy, nonatomic) NSString *modelUID; // ivar: _modelUID
@property (nonatomic) BOOL requiresAuthentication; // ivar: _requiresAuthentication
@property (copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (nonatomic) BOOL supportsIdentify; // ivar: _supportsIdentify
@property (readonly, nonatomic) unsigned int transportType;


+(id)keyPathsForValuesAffectingAcquireable;
-(BOOL)acquireBox:(BOOL)arg0 fromHAL:(BOOL)arg1 ;
-(BOOL)changeBoxName:(id)arg0 ;
-(BOOL)getProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(*unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(BOOL)hasProperty:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)isPropertySettable:(struct AudioObjectPropertyAddress *)arg0 ;
-(BOOL)setProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 qualifierData:(*void)arg2 dataSize:(unsigned int)arg3 andData:(*void)arg4 forClient:(int)arg5 ;
-(id)diagnosticDescriptionWithIndent:(id)arg0 walkTree:(BOOL)arg1 ;
-(id)driverClassName;
-(id)initWithBoxUID:(id)arg0 withPlugin:(id)arg1 ;
-(id)initWithPlugin:(id)arg0 ;
-(unsigned int)dataSizeForProperty:(struct AudioObjectPropertyAddress *)arg0 withQualifierSize:(unsigned int)arg1 andQualifierData:(*void)arg2 ;
-(unsigned int)objectClass;
-(void)addAudioDevice:(id)arg0 ;
-(void)addClockDevice:(id)arg0 ;
-(void)addDevice:(id)arg0 ;
-(void)addDevicesToPlugin;
-(void)identifyBox:(BOOL)arg0 ;
-(void)removeAllAudioDevices;
-(void)removeAllClockDevices;
-(void)removeAllDevices;
-(void)removeAudioDevice:(id)arg0 ;
-(void)removeClockDevice:(id)arg0 ;
-(void)removeDevice:(id)arg0 ;
-(void)removeDevicesFromPlugin;
-(void)systemHasPoweredOn;
-(void)systemWillSleep;


@end


#endif