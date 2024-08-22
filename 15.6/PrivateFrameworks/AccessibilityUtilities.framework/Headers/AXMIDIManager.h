// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMIDIMANAGER_H
#define AXMIDIMANAGER_H

@class NSString, NSMutableSet;
@protocol AXMIDIDeviceProtocol;

#import <Foundation/Foundation.h>

#import "AXMIDIParser.h"

@interface AXMIDIManager : NSObject <AXMIDIDeviceProtocol>



@property (retain, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *devices; // ivar: _devices
@property (copy, nonatomic) id *eventHandler; // ivar: _eventHandler
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int midiClientRef; // ivar: _midiClientRef
@property (nonatomic) unsigned int midiInputPortRef; // ivar: _midiInputPortRef
@property (retain, nonatomic) AXMIDIParser *parser; // ivar: _parser
@property (readonly) Class superclass;


-(id)_deviceForMidiDevice:(unsigned int)arg0 addIfNeeded:(BOOL)arg1 ;
-(id)_nameForMidiObjectType:(int)arg0 ;
-(id)init;
-(id)initWithIdentifier:(id)arg0 eventHandler:(id)arg1 ;
-(void)_addMidiDestination:(unsigned int)arg0 ;
-(void)_addMidiEntity:(unsigned int)arg0 ;
-(void)_addMidiSource:(unsigned int)arg0 ;
-(void)_handleIOErrorNotification:(struct MIDIIOErrorNotification *)arg0 ;
-(void)_handleObjectAddedNotification:(struct MIDIObjectAddRemoveNotification *)arg0 ;
-(void)_handleObjectRemovedNotification:(struct MIDIObjectAddRemoveNotification *)arg0 ;
-(void)_handlePropertyChangedNotification:(struct MIDIObjectPropertyChangeNotification *)arg0 ;
-(void)_handleSerialPortOwnerChangedNotification:(struct MIDIObjectPropertyChangeNotification *)arg0 ;
-(void)_handleThruConnectionsChangedNotification:(struct MIDIObjectPropertyChangeNotification *)arg0 ;
-(void)_removeMidiDestination:(unsigned int)arg0 ;
-(void)_removeMidiDevice:(unsigned int)arg0 ;
-(void)_removeMidiEntity:(unsigned int)arg0 ;
-(void)_removeMidiSource:(unsigned int)arg0 ;
-(void)_resetAndDetectDevices;
-(void)dealloc;
-(void)device:(id)arg0 didAddEntity:(id)arg1 ;
-(void)device:(id)arg0 didRemoveEntity:(id)arg1 ;
-(void)device:(id)arg0 entity:(id)arg1 didAddDestination:(id)arg2 ;
-(void)device:(id)arg0 entity:(id)arg1 didAddSource:(id)arg2 ;
-(void)device:(id)arg0 entity:(id)arg1 didRemoveDestination:(id)arg2 ;
-(void)device:(id)arg0 entity:(id)arg1 didRemoveSource:(id)arg2 ;
-(void)printAttachedDevices;


@end


#endif