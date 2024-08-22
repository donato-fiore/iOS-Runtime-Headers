// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRREMOVESYNCEDOUTPUTDEVICESMESSAGE_H
#define MRREMOVESYNCEDOUTPUTDEVICESMESSAGE_H

@class NSArray;


#import "MRProtocolMessage.h"

@interface MRRemoveSyncedOutputDevicesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSArray *outputDeviceUIDs;


-(NSUInteger)type;
-(id)initWithOutputDeviceUID:(id)arg0 ;
-(id)initWithOutputDeviceUIDs:(id)arg0 ;


@end


#endif