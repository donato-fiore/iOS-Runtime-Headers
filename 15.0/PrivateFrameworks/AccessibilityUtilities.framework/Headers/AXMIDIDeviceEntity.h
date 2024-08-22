// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMIDIDEVICEENTITY_H
#define AXMIDIDEVICEENTITY_H

@class NSMutableSet, NSNumber, NSString;

#import <Foundation/Foundation.h>

#import "AXMIDIDevice.h"

@interface AXMIDIDeviceEntity : NSObject

@property (retain, nonatomic) NSMutableSet *destinations; // ivar: _destinations
@property (weak, nonatomic) AXMIDIDevice *device; // ivar: _device
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *driverName;
@property (readonly, nonatomic) NSNumber *isBroadcast;
@property (readonly, nonatomic) NSNumber *isEmbedded;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (nonatomic) unsigned int midiEntity; // ivar: _midiEntity
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableSet *sources; // ivar: _sources
@property (readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property (readonly, nonatomic) NSNumber *supportsMMC; // ivar: _supportsMMC
@property (readonly, nonatomic) NSNumber *uniqueID;


-(id)_destinationForMidiEndpoint:(unsigned int)arg0 addIfNeeded:(BOOL)arg1 ;
-(id)_sourceForMidiEndpoint:(unsigned int)arg0 addIfNeeded:(BOOL)arg1 ;
-(id)description;
-(id)initWithMIDIEntity:(unsigned int)arg0 device:(id)arg1 ;
-(id)supportsGeneralMMC;
-(void)addMidiDestination:(unsigned int)arg0 ;
-(void)addMidiSource:(unsigned int)arg0 ;
-(void)removeMidiDestination:(unsigned int)arg0 ;
-(void)removeMidiSource:(unsigned int)arg0 ;
-(void)resetAndDetectEndpoints;


@end


#endif