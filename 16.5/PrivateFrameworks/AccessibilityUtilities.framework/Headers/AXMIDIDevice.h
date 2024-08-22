// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMIDIDEVICE_H
#define AXMIDIDEVICE_H

@class NSString, NSNumber, NSMutableSet;
@protocol AXMIDIDeviceEntityDelegate, AXMIDIDeviceProtocol;

#import <Foundation/Foundation.h>


@interface AXMIDIDevice : NSObject <AXMIDIDeviceEntityDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AXMIDIDeviceProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *driverName;
@property (retain, nonatomic) NSMutableSet *entities; // ivar: _entities
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (readonly, nonatomic) NSString *manufacturer;
@property (nonatomic) unsigned int midiDevice; // ivar: _midiDevice
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property (readonly, nonatomic) NSNumber *supportsMMC; // ivar: _supportsMMC
@property (readonly, nonatomic) NSNumber *uniqueID;


-(BOOL)isEqual:(id)arg0 ;
-(id)_entityForMidiEntity:(unsigned int)arg0 addIfNeeded:(BOOL)arg1 ;
-(id)fullDescription;
-(id)initWithMIDIDevice:(unsigned int)arg0 delegate:(id)arg1 ;
-(id)supportsGeneralMMC;
-(void)addMidiDestination:(unsigned int)arg0 ;
-(void)addMidiEntity:(unsigned int)arg0 ;
-(void)addMidiSource:(unsigned int)arg0 ;
-(void)entity:(id)arg0 didAddDestination:(id)arg1 ;
-(void)entity:(id)arg0 didAddSource:(id)arg1 ;
-(void)entity:(id)arg0 didRemoveDestination:(id)arg1 ;
-(void)entity:(id)arg0 didRemoveSource:(id)arg1 ;
-(void)removeMidiDestination:(unsigned int)arg0 ;
-(void)removeMidiEntity:(unsigned int)arg0 ;
-(void)removeMidiSource:(unsigned int)arg0 ;
-(void)resetAndDetectEntities;


@end


#endif