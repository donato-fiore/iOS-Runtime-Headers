// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMIDIDEVICEENTITYENDPOINT_H
#define AXMIDIDEVICEENTITYENDPOINT_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>

#import "AXMIDIDeviceEntity.h"

@interface AXMIDIDeviceEntityEndpoint : NSObject

@property (readonly, nonatomic) NSString *driverName;
@property (weak, nonatomic) AXMIDIDeviceEntity *entity; // ivar: _entity
@property (readonly, nonatomic) NSNumber *isBroadcast;
@property (readonly, nonatomic) NSNumber *isEmbedded;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (readonly, nonatomic) NSString *manufacturer;
@property (nonatomic) unsigned int midiEndpoint; // ivar: _midiEndpoint
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *receiveChannels;
@property (readonly, nonatomic) NSNumber *transmitChannels;
@property (readonly, nonatomic) NSNumber *uniqueID;


-(id)description;
-(id)initWithMIDIEndpoint:(unsigned int)arg0 entity:(id)arg1 ;


@end


#endif